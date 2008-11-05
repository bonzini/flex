/* filter - postprocessing of flex output through filters */

/*  This file is part of flex. */

/*  Redistribution and use in source and binary forms, with or without */
/*  modification, are permitted provided that the following conditions */
/*  are met: */

/*  1. Redistributions of source code must retain the above copyright */
/*     notice, this list of conditions and the following disclaimer. */
/*  2. Redistributions in binary form must reproduce the above copyright */
/*     notice, this list of conditions and the following disclaimer in the */
/*     documentation and/or other materials provided with the distribution. */

/*  Neither the name of the University nor the names of its contributors */
/*  may be used to endorse or promote products derived from this software */
/*  without specific prior written permission. */

/*  THIS SOFTWARE IS PROVIDED ``AS IS'' AND WITHOUT ANY EXPRESS OR */
/*  IMPLIED WARRANTIES, INCLUDING, WITHOUT LIMITATION, THE IMPLIED */
/*  WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR */
/*  PURPOSE. */

#include "flexdef.h"

int outfile_created = 0;

/* Allocate and initialize an external filter.
 * @param chain the current chain or NULL for new chain
 * @param cmd the command to execute.
 * @param ... a NULL terminated list of (const char*) arguments to command,
 *            not including argv[0].
 * @return newest filter in chain
 */
struct filter *filter_create_ext (struct filter *chain, const char *cmd,
				  ...)
{
	struct filter *f;
	int     max_args;
	const char *s;
	va_list ap;

	/* allocate and initialize new filter */
	f = (struct filter *) flex_alloc (sizeof (struct filter));
	memset (f, 0, sizeof (*f));
	f->filter_func = NULL;
	f->extra = NULL;
	f->next = NULL;
	f->argc = 0;

	if (chain != NULL) {
		/* append f to end of chain */
		while (chain->next)
			chain = chain->next;
		chain->next = f;
	}


	/* allocate argv, and populate it with the argument list. */
	max_args = 8;
	f->argv =
		(const char **) flex_alloc (sizeof (char *) *
					    (max_args + 1));
	f->argv[f->argc++] = cmd;

	va_start (ap, cmd);
	while ((s = va_arg (ap, const char *)) != NULL) {
		if (f->argc >= max_args) {
			max_args += 8;
			f->argv =
				(const char **) flex_realloc (f->argv,
							      sizeof (char
								      *) *
							      (max_args +
							       1));
		}
		f->argv[f->argc++] = s;
	}
	f->argv[f->argc] = NULL;

	va_end (ap);
	return f;
}

/* Allocate and initialize an internal filter.
 * @param chain the current chain or NULL for new chain
 * @param filter_func The function that will perform the filtering.
 *        filter_func should return 0 if successful, and -1
 *        if an error occurs -- or it can simply exit().
 * @param extra optional user-defined data to pass to the filter.
 * @return newest filter in chain
 */
struct filter *filter_create_int (struct filter *chain,
				  int (*filter_func) (struct filter *),
				  void *extra)
{
	struct filter *f;

	/* allocate and initialize new filter */
	f = (struct filter *) flex_alloc (sizeof (struct filter));
	memset (f, 0, sizeof (*f));
	f->next = NULL;
	f->argc = 0;
	f->argv = NULL;

	f->filter_func = filter_func;
	f->extra = extra;

	if (chain != NULL) {
		/* append f to end of chain */
		while (chain->next)
			chain = chain->next;
		chain->next = f;
	}

	return f;
}

/** Fork and exec entire filter chain.
 *  @param chain The head of the chain.
 *  @return true on success.
 */
bool filter_apply_chain (struct filter * chain)
{
	int     pid, pipes[2];

	/* Tricky recursion, since we want to begin the chain
	 * at the END. Why? Because we need all the forked processes
	 * to be children of the main flex process.
	 */
	if (chain)
		filter_apply_chain (chain->next);
	else
		return true;

	/* Now we are the right-most unprocessed link in the chain.
	 */

	fflush (stdout);
	fflush (stderr);

	if (pipe (pipes) == -1)
		flexerror (_("pipe failed"));

	if ((pid = fork ()) == -1)
		flexerror (_("fork failed"));

	if (pid == 0) {
		/* child */

        /* We need stdin (the FILE* stdin) to connect to this new pipe.
         * There is no portable way to set stdin to a new file descriptor,
         * as stdin is not an lvalue on some systems (BSD).
         * So we dup the new pipe onto the stdin descriptor and use a no-op fseek
         * to sync the stream. This is a Hail Mary situation. It seems to work.
         */
		close (pipes[1]);
		if (dup2 (pipes[0], fileno (stdin)) == -1)
			flexfatal (_("dup2(pipes[0],0)"));
		close (pipes[0]);
        fseek (stdin, 0, SEEK_CUR);

		/* run as a filter, either internally or by exec */
		if (chain->filter_func) {
			int     r;

			if ((r = chain->filter_func (chain)) == -1)
				flexfatal (_("filter_func failed"));
			exit (0);
		}
		else {
			execvp (chain->argv[0],
				(char **const) (chain->argv));
			flexfatal (_("exec failed"));
		}

		exit (1);
	}

	/* Parent */
	close (pipes[0]);
	if (dup2 (pipes[1], fileno (stdout)) == -1)
		flexfatal (_("dup2(pipes[1],1)"));
	close (pipes[1]);
    fseek (stdout, 0, SEEK_CUR);

	return true;
}

/** Truncate the chain to max_len number of filters.
 * @param chain the current chain.
 * @param max_len the maximum length of the chain.
 * @return the resulting length of the chain.
 */
int filter_truncate (struct filter **chain, int max_len)
{
	int     len = 1;

    if (max_len == 0)
        *chain = 0;
	if (!*chain)
		return 0;

	while ((*chain)->next && len < max_len) {
		(*chain) = (*chain)->next;
		++len;
	}

	(*chain)->next = NULL;
	return len;
}

/** Adjust the line numbers in the #line directives of the generated scanner.
 * After the m4 expansion, the line numbers are incorrect since the m4 macros
 * can add or remove lines.  This only adjusts line numbers for generated code,
 * not user code. This also happens to be a good place to squeeze multiple
 * blank lines into a single blank line.
 */
int filter_postprocess_output (struct filter *chain)
{
	char   *buf;
	const int readsz = 512;
	int     lineno = 1;
	bool    in_gen = true;	/* in generated code */
	bool    last_was_blank = true;

	if (!chain)
		return 0;

	buf = (char *) flex_alloc (readsz);

	while (fgets (buf, readsz, stdin)) {

        char *p, *q;
        int is_blank = true;

        if (strncmp (buf, "#line ", 6) == 0)
            in_gen = false;

        if (strncmp (buf, "@output(", 8) == 0) {
            char *filename = strdup (buf);
            FILE *prev_stdout;

            /* Remove "@)\n".  */
            filename[strlen (filename) - 3] = '\0';
		    prev_stdout = freopen (filename + 8, "w+", stdout);
		    if (prev_stdout == NULL)
			    lerrsf (_("could not create %s"), filename + 8);

            free (filename);
            lineno = 1;
    		outfile_created = 1;
            last_was_blank = true;
            continue;
        }

        for (p = q = buf; *p; ) {
            if (!isspace (*p))
                is_blank = false;

            if (*p == '@') {
                if (p[1] == '@')
                    *q++ = p[1], p += 2;
                else if (p[1] == '{')
                    *q++ = '[', p += 2;
                else if (p[1] == '}')
                    *q++ = ']', p += 2;
                else if (strncmp (p, "@oline@", 7) == 0)
                    in_gen = true, q += sprintf (q, "%d", lineno + 1), p += 7;
            } else
                *q++ = *p++;
        }

        *q = '\0';

		/* squeeze blank lines from generated code */
		if (in_gen && is_blank && last_was_blank)
			continue;

		last_was_blank = is_blank;
		fputs (buf, stdout);
		lineno++;
	}
	fflush (stdout);
	if (ferror (stdout))
		lerrsf (_("error writing output file %s"),
			outfilename ? outfilename : "<stdout>");

	else if (fclose (stdout))
		lerrsf (_("error closing output file %s"),
			outfilename ? outfilename : "<stdout>");

	return 0;
}

/* vim:set expandtab cindent tabstop=4 softtabstop=4 shiftwidth=4 textwidth=0: */
