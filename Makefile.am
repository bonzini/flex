# This file is part of flex.

# Redistribution and use in source and binary forms, with or without
# modification, are permitted provided that the following conditions
# are met:

# 1. Redistributions of source code must retain the above copyright
#    notice, this list of conditions and the following disclaimer.
# 2. Redistributions in binary form must reproduce the above copyright
#    notice, this list of conditions and the following disclaimer in the
#    documentation and/or other materials provided with the distribution.

# Neither the name of the University nor the names of its contributors
# may be used to endorse or promote products derived from this software
# without specific prior written permission.

# THIS SOFTWARE IS PROVIDED ``AS IS'' AND WITHOUT ANY EXPRESS OR
# IMPLIED WARRANTIES, INCLUDING, WITHOUT LIMITATION, THE IMPLIED
# WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
# PURPOSE.

# Notes on building:

AM_YFLAGS = -d
ACLOCAL_AMFLAGS = -I m4

AUTOMAKE_OPTIONS = \
	gnits \
	check-news \
	dist-bzip2

EXTRA_DIST = \
	flex.spec.in \
	flex.spec \
	.indent.pro \
	AUTHORS \
	COPYING \
	INSTALL \
	NEWS \
	ONEWS \
	README \
	README.cvs-snapshot \
	THANKS \
	TODO \
	autogen.sh \
	ABOUT-NLS \
	config.rpath \
	gettext.h

SUBDIRS = \
	. \
	data \
	doc \
	m4  \
	examples \
	po \
	src \
	tools \
	tests

# Create the ChangeLog, but only if we're inside a cvs working directory

ChangeLog:
	if [ -d CVS ] ; then \
		sh $(srcdir)/tools/cvs2cl.pl -F trunk -U $(srcdir)/tools/cvsauthors \
	; fi

# Run GNU indent on sources. Don't run this unless all the sources compile cleanly.
#
# Whole idea:
#   1. Check for .indent.pro, otherwise indent will use unknown
#      settings, or worse, the GNU defaults.)
#   2. Check that this is GNU indent.
#   3. Make sure to process only the NON-generated .c and .h files.
#   4. Run indent twice per file. The first time is a test.
#      Otherwise, indent overwrites your file even if it fails!
indentfiles = \
	src/buf.c \
	src/ccl.c \
	src/dfa.c \
	src/ecs.c \
	src/filter.c \
	src/flexdef.h \
	src/gen.c \
	src/libmain.c \
	src/libyywrap.c \
	src/main.c \
	src/misc.c \
	src/nfa.c \
	src/options.c \
	src/options.h \
	src/regex.c \
	src/scanopt.c \
	src/scanopt.h \
	src/sym.c \
	src/tables.c \
	src/tables.h \
	src/tables_shared.c \
	src/tables_shared.h \
	src/tblcmp.c

indent:
	if [ -f .indent.pro ] ; then \
	for f in $(indentfiles);\
	do\
		echo indenting $$f ;\
		$(indent) < $$f >/dev/null && indent $$f || echo $$f FAILED to indent ;\
	done \
	fi

.PHONY: ChangeLog indent
