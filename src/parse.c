/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     CHAR = 258,
     NUMBER = 259,
     SECTEND = 260,
     SCDECL = 261,
     XSCDECL = 262,
     NAME = 263,
     PREVCCL = 264,
     EOF_OP = 265,
     OPTION_OP = 266,
     OPT_OUTFILE = 267,
     OPT_PREFIX = 268,
     OPT_YYCLASS = 269,
     OPT_HEADER = 270,
     OPT_TABLES = 271,
     CCE_ALNUM = 272,
     CCE_ALPHA = 273,
     CCE_BLANK = 274,
     CCE_CNTRL = 275,
     CCE_DIGIT = 276,
     CCE_GRAPH = 277,
     CCE_LOWER = 278,
     CCE_PRINT = 279,
     CCE_PUNCT = 280,
     CCE_SPACE = 281,
     CCE_UPPER = 282,
     CCE_XDIGIT = 283,
     BEGIN_REPEAT_POSIX = 284,
     END_REPEAT_POSIX = 285,
     BEGIN_REPEAT_FLEX = 286,
     END_REPEAT_FLEX = 287
   };
#endif
/* Tokens.  */
#define CHAR 258
#define NUMBER 259
#define SECTEND 260
#define SCDECL 261
#define XSCDECL 262
#define NAME 263
#define PREVCCL 264
#define EOF_OP 265
#define OPTION_OP 266
#define OPT_OUTFILE 267
#define OPT_PREFIX 268
#define OPT_YYCLASS 269
#define OPT_HEADER 270
#define OPT_TABLES 271
#define CCE_ALNUM 272
#define CCE_ALPHA 273
#define CCE_BLANK 274
#define CCE_CNTRL 275
#define CCE_DIGIT 276
#define CCE_GRAPH 277
#define CCE_LOWER 278
#define CCE_PRINT 279
#define CCE_PUNCT 280
#define CCE_SPACE 281
#define CCE_UPPER 282
#define CCE_XDIGIT 283
#define BEGIN_REPEAT_POSIX 284
#define END_REPEAT_POSIX 285
#define BEGIN_REPEAT_FLEX 286
#define END_REPEAT_FLEX 287




/* Copy the first part of user declarations.  */
#line 29 "parse.y"

/*  Copyright (c) 1990 The Regents of the University of California. */
/*  All rights reserved. */

/*  This code is derived from software contributed to Berkeley by */
/*  Vern Paxson. */

/*  The United States Government has rights in this work pursuant */
/*  to contract no. DE-AC03-76SF00098 between the United States */
/*  Department of Energy and the University of California. */

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

/* Some versions of bison are broken in that they use alloca() but don't
 * declare it properly.  The following is the patented (just kidding!)
 * #ifdef chud to fix the problem, courtesy of Francois Pinard.
 */
#ifdef YYBISON
/* AIX requires this to be the first thing in the file.  What a piece.  */
# ifdef _AIX
 #pragma alloca
# endif
#endif

#include "flexdef.h"
#include "tables.h"

/* The remainder of the alloca() cruft has to come after including flexdef.h,
 * so HAVE_ALLOCA_H is (possibly) defined.
 */
#ifdef YYBISON
# ifdef __GNUC__
#  ifndef alloca
#   define alloca __builtin_alloca
#  endif
# else
#  if HAVE_ALLOCA_H
#   include <alloca.h>
#  else
#   ifdef __hpux
void *alloca ();
#   else
#    ifdef __TURBOC__
#     include <malloc.h>
#    else
char *alloca ();
#    endif
#   endif
#  endif
# endif
#endif

/* Bletch, ^^^^ that was ugly! */


int pat, scnum, eps, headcnt, trailcnt, anyccl, lastchar, i, rulelen;
int trlcontxt, xcluflg, currccl, cclsorted, varlength, variable_trail_rule;

int *scon_stk;
int scon_stk_ptr;

static int madeany = false;  /* whether we've made the '.' character class */
int previous_continued_action;	/* whether the previous rule's action was '|' */

#define format_warn3(fmt, a1, a2) \
	do{ \
        char fw3_msg[MAXLINE];\
        snprintf( fw3_msg, MAXLINE,(fmt), (a1), (a2) );\
        warn( fw3_msg );\
	}while(0)

/* Expand a POSIX character class expression. */
#define CCL_EXPR(func) \
	do{ \
	int c; \
	for ( c = 0; c < csize; ++c ) \
		if ( isascii(c) && func(c) ) \
			ccladd( currccl, c ); \
	}while(0)

/* While POSIX defines isblank(), it's not ANSI C. */
#define IS_BLANK(c) ((c) == ' ' || (c) == '\t')

/* On some over-ambitious machines, such as DEC Alpha's, the default
 * token type is "long" instead of "int"; this leads to problems with
 * declaring yylval in flexdef.h.  But so far, all the yacc's I've seen
 * wrap their definitions of YYSTYPE with "#ifndef YYSTYPE"'s, so the
 * following should ensure that the default token type is "int".
 */
#define YYSTYPE int



/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 282 "parse.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   129

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  54
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  26
/* YYNRULES -- Number of rules.  */
#define YYNRULES  81
/* YYNRULES -- Number of states.  */
#define YYNSTATES  120

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   287

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      34,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    48,     2,    42,     2,     2,     2,
      49,    50,    40,    45,    41,    53,    47,    44,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      38,    33,    39,    46,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    51,     2,    52,    37,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    35,    43,    36,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     9,    10,    14,    17,    18,    20,    22,
      24,    26,    29,    31,    33,    36,    39,    40,    44,    48,
      52,    56,    60,    66,    72,    73,    74,    77,    79,    81,
      83,    84,    89,    93,    94,    98,   100,   102,   104,   107,
     111,   114,   116,   120,   122,   125,   128,   130,   137,   143,
     148,   151,   154,   157,   164,   170,   175,   177,   179,   181,
     185,   189,   191,   195,   200,   205,   208,   211,   212,   214,
     216,   218,   220,   222,   224,   226,   228,   230,   232,   234,
     236,   239
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      55,     0,    -1,    56,    57,    58,    64,    65,    -1,    -1,
      57,    59,    60,    -1,    57,    61,    -1,    -1,     1,    -1,
       5,    -1,     6,    -1,     7,    -1,    60,     8,    -1,     8,
      -1,     1,    -1,    11,    62,    -1,    62,    63,    -1,    -1,
      12,    33,     8,    -1,    13,    33,     8,    -1,    14,    33,
       8,    -1,    15,    33,     8,    -1,    16,    33,     8,    -1,
      64,    68,    65,    66,    34,    -1,    64,    68,    35,    64,
      36,    -1,    -1,    -1,    37,    71,    -1,    71,    -1,    10,
      -1,     1,    -1,    -1,    38,    67,    69,    39,    -1,    38,
      40,    39,    -1,    -1,    69,    41,    70,    -1,    70,    -1,
       1,    -1,     8,    -1,    73,    72,    -1,    73,    72,    42,
      -1,    72,    42,    -1,    72,    -1,    72,    43,    74,    -1,
      74,    -1,    72,    44,    -1,    74,    75,    -1,    75,    -1,
      74,    29,     4,    41,     4,    30,    -1,    74,    29,     4,
      41,    30,    -1,    74,    29,     4,    30,    -1,    75,    40,
      -1,    75,    45,    -1,    75,    46,    -1,    75,    31,     4,
      41,     4,    32,    -1,    75,    31,     4,    41,    32,    -1,
      75,    31,     4,    32,    -1,    47,    -1,    76,    -1,     9,
      -1,    48,    79,    48,    -1,    49,    72,    50,    -1,     3,
      -1,    51,    77,    52,    -1,    51,    37,    77,    52,    -1,
      77,     3,    53,     3,    -1,    77,     3,    -1,    77,    78,
      -1,    -1,    17,    -1,    18,    -1,    19,    -1,    20,    -1,
      21,    -1,    22,    -1,    23,    -1,    24,    -1,    25,    -1,
      26,    -1,    27,    -1,    28,    -1,    79,     3,    -1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   142,   142,   172,   179,   180,   181,   182,   186,   194,
     197,   201,   204,   207,   211,   214,   215,   218,   223,   225,
     227,   229,   233,   235,   237,   241,   253,   289,   313,   336,
     341,   344,   347,   365,   368,   370,   372,   376,   399,   455,
     458,   501,   519,   525,   530,   557,   565,   568,   596,   610,
     632,   639,   645,   651,   679,   693,   712,   734,   755,   765,
     768,   771,   785,   788,   795,   849,   860,   868,   875,   876,
     877,   878,   879,   880,   881,   882,   883,   884,   885,   891,
     894,   908
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "CHAR", "NUMBER", "SECTEND", "SCDECL",
  "XSCDECL", "NAME", "PREVCCL", "EOF_OP", "OPTION_OP", "OPT_OUTFILE",
  "OPT_PREFIX", "OPT_YYCLASS", "OPT_HEADER", "OPT_TABLES", "CCE_ALNUM",
  "CCE_ALPHA", "CCE_BLANK", "CCE_CNTRL", "CCE_DIGIT", "CCE_GRAPH",
  "CCE_LOWER", "CCE_PRINT", "CCE_PUNCT", "CCE_SPACE", "CCE_UPPER",
  "CCE_XDIGIT", "BEGIN_REPEAT_POSIX", "END_REPEAT_POSIX",
  "BEGIN_REPEAT_FLEX", "END_REPEAT_FLEX", "'='", "'\\n'", "'{'", "'}'",
  "'^'", "'<'", "'>'", "'*'", "','", "'$'", "'|'", "'/'", "'+'", "'?'",
  "'.'", "'\"'", "'('", "')'", "'['", "']'", "'-'", "$accept", "goal",
  "initlex", "sect1", "sect1end", "startconddecl", "namelist1", "options",
  "optionlist", "option", "sect2", "initforrule", "flexrule",
  "scon_stk_ptr", "scon", "namelist2", "sconname", "rule", "re", "re2",
  "series", "singleton", "fullccl", "ccl", "ccl_expr", "string", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,    61,    10,   123,   125,    94,    60,    62,
      42,    44,    36,   124,    47,    43,    63,    46,    34,    40,
      41,    91,    93,    45
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    54,    55,    56,    57,    57,    57,    57,    58,    59,
      59,    60,    60,    60,    61,    62,    62,    63,    63,    63,
      63,    63,    64,    64,    64,    65,    66,    66,    66,    66,
      67,    68,    68,    68,    69,    69,    69,    70,    71,    71,
      71,    71,    72,    72,    73,    74,    74,    74,    74,    74,
      75,    75,    75,    75,    75,    75,    75,    75,    75,    75,
      75,    75,    76,    76,    77,    77,    77,    77,    78,    78,
      78,    78,    78,    78,    78,    78,    78,    78,    78,    78,
      79,    79
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     5,     0,     3,     2,     0,     1,     1,     1,
       1,     2,     1,     1,     2,     2,     0,     3,     3,     3,
       3,     3,     5,     5,     0,     0,     2,     1,     1,     1,
       0,     4,     3,     0,     3,     1,     1,     1,     2,     3,
       2,     1,     3,     1,     2,     2,     1,     6,     5,     4,
       2,     2,     2,     6,     5,     4,     1,     1,     1,     3,
       3,     1,     3,     4,     4,     2,     2,     0,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     0
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     0,     1,     7,     0,     8,     9,    10,    16,
      24,     0,     5,    14,    33,    13,    12,     4,     0,     0,
       0,     0,     0,    15,    30,     2,    25,    11,     0,     0,
       0,     0,     0,     0,     0,    24,     0,    17,    18,    19,
      20,    21,    32,    36,    37,     0,    35,    33,    29,    61,
      58,    28,     0,    56,    81,     0,    67,     0,    27,    41,
       0,    43,    46,    57,    31,     0,    23,    26,     0,     0,
      67,     0,    22,    40,     0,    44,    38,     0,    45,     0,
      50,    51,    52,    34,    80,    59,    60,     0,    65,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    62,    66,    42,    39,     0,     0,    63,     0,    49,
       0,    55,     0,    64,     0,    48,     0,    54,    47,    53
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     1,     2,     5,    10,    11,    17,    12,    13,    23,
      14,    25,    57,    34,    26,    45,    46,    58,    59,    60,
      61,    62,    63,    71,   102,    68
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -61
static const yytype_int8 yypact[] =
{
     -61,    14,    75,   -61,   -61,    61,   -61,   -61,   -61,   -61,
     -61,    29,   -61,    83,     6,   -61,   -61,    24,     9,    32,
      37,    46,    54,   -61,    52,   -61,    69,   -61,   100,   101,
     102,   103,   104,    74,    30,   -61,    -1,   -61,   -61,   -61,
     -61,   -61,   -61,   -61,   -61,   -28,   -61,    67,   -61,   -61,
     -61,   -61,    26,   -61,   -61,    26,    77,    81,   -61,    58,
      26,    42,    38,   -61,   -61,   108,   -61,   -61,     1,    -9,
     -61,     0,   -61,   -61,    26,   -61,    64,   113,    38,   114,
     -61,   -61,   -61,   -61,   -61,   -61,   -61,    36,    66,   -61,
     -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,
     -61,   -61,   -61,    42,   -61,   -25,    53,   -61,   117,   -61,
       3,   -61,     8,   -61,    91,   -61,    90,   -61,   -61,   -61
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,
      88,    98,   -61,   -61,   -61,   -61,    60,    76,   -45,   -61,
      55,   -60,   -61,    56,   -61,   -61
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -26
static const yytype_int8 yytable[] =
{
      48,    78,    49,    88,    84,   109,   -25,   114,    50,    51,
      69,    64,   116,    65,     3,    76,   110,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,    49,
      15,    43,    27,   115,    74,    50,    52,    16,    44,    88,
     117,    86,    28,    78,    24,    49,    53,    54,    55,    85,
      56,    50,   101,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,    29,     6,     7,     8,    79,
      30,    77,     9,    53,    54,    55,     4,    56,    80,    31,
      -6,    -6,    -6,    81,    82,   111,    -6,    32,   107,    53,
      54,    55,    33,    56,   112,    18,    19,    20,    21,    22,
      73,    74,    75,    66,    35,    24,   104,    74,    37,    38,
      39,    40,    41,    42,    70,    72,    44,   105,   106,   108,
     113,   118,   119,    47,    36,    83,    87,     0,    67,   103
};

static const yytype_int8 yycheck[] =
{
       1,    61,     3,     3,     3,    30,     0,     4,     9,    10,
      55,    39,     4,    41,     0,    60,    41,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,     3,
       1,     1,     8,    30,    43,     9,    37,     8,     8,     3,
      32,    50,    33,   103,    38,     3,    47,    48,    49,    48,
      51,     9,    52,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    33,     5,     6,     7,    31,
      33,    29,    11,    47,    48,    49,     1,    51,    40,    33,
       5,     6,     7,    45,    46,    32,    11,    33,    52,    47,
      48,    49,    40,    51,    41,    12,    13,    14,    15,    16,
      42,    43,    44,    36,    35,    38,    42,    43,     8,     8,
       8,     8,     8,    39,    37,    34,     8,     4,     4,    53,
       3,    30,    32,    35,    26,    65,    70,    -1,    52,    74
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    55,    56,     0,     1,    57,     5,     6,     7,    11,
      58,    59,    61,    62,    64,     1,     8,    60,    12,    13,
      14,    15,    16,    63,    38,    65,    68,     8,    33,    33,
      33,    33,    33,    40,    67,    35,    65,     8,     8,     8,
       8,     8,    39,     1,     8,    69,    70,    64,     1,     3,
       9,    10,    37,    47,    48,    49,    51,    66,    71,    72,
      73,    74,    75,    76,    39,    41,    36,    71,    79,    72,
      37,    77,    34,    42,    43,    44,    72,    29,    75,    31,
      40,    45,    46,    70,     3,    48,    50,    77,     3,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    52,    78,    74,    42,     4,     4,    52,    53,    30,
      41,    32,    41,     3,     4,    30,     4,    32,    30,    32
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 143 "parse.y"
    { /* add default rule */
			int def_rule;

			pat = cclinit();
			cclnegate( pat );

			def_rule = mkstate( -pat );

			/* Remember the number of the default rule so we
			 * don't generate "can't match" warnings for it.
			 */
			default_rule = num_rules;

			finish_rule( def_rule, false, 0, 0, 0);

			for ( i = 1; i <= lastsc; ++i )
				scset[i] = mkbranch( scset[i], def_rule );

			if ( spprdflt )
				add_action(
				"YY_FATAL_ERROR( \"flex scanner jammed\" )" );
			else
				add_action( "ECHO" );

			add_action( ";\n\tYY_BREAK\n" );
			}
    break;

  case 3:
#line 172 "parse.y"
    { /* initialize for processing rules */

			/* Create default DFA start condition. */
			scinstal( "INITIAL", false );
			}
    break;

  case 7:
#line 183 "parse.y"
    { synerr( _("unknown error processing section 1") ); }
    break;

  case 8:
#line 187 "parse.y"
    {
			check_options();
			scon_stk = allocate_integer_array( lastsc + 1 );
			scon_stk_ptr = 0;
			}
    break;

  case 9:
#line 195 "parse.y"
    { xcluflg = false; }
    break;

  case 10:
#line 198 "parse.y"
    { xcluflg = true; }
    break;

  case 11:
#line 202 "parse.y"
    { scinstal( nmstr, xcluflg ); }
    break;

  case 12:
#line 205 "parse.y"
    { scinstal( nmstr, xcluflg ); }
    break;

  case 13:
#line 208 "parse.y"
    { synerr( _("bad start condition list") ); }
    break;

  case 17:
#line 219 "parse.y"
    {
			outfilename = copy_string( nmstr );
			did_outfilename = 1;
			}
    break;

  case 18:
#line 224 "parse.y"
    { prefix = copy_string( nmstr ); }
    break;

  case 19:
#line 226 "parse.y"
    { yyclass = copy_string( nmstr ); }
    break;

  case 20:
#line 228 "parse.y"
    { headerfilename = copy_string( nmstr ); }
    break;

  case 21:
#line 230 "parse.y"
    { tablesext = true; tablesfilename = copy_string( nmstr ); }
    break;

  case 22:
#line 234 "parse.y"
    { scon_stk_ptr = (yyvsp[(2) - (5)]); }
    break;

  case 23:
#line 236 "parse.y"
    { scon_stk_ptr = (yyvsp[(2) - (5)]); }
    break;

  case 25:
#line 241 "parse.y"
    {
			/* Initialize for a parse of one rule. */
			trlcontxt = variable_trail_rule = varlength = false;
			trailcnt = headcnt = rulelen = 0;
			current_state_type = STATE_NORMAL;
			previous_continued_action = continued_action;
			in_rule = true;

			new_rule();
			}
    break;

  case 26:
#line 254 "parse.y"
    {
			pat = (yyvsp[(2) - (2)]);
			finish_rule( pat, variable_trail_rule,
				headcnt, trailcnt , previous_continued_action);

			if ( scon_stk_ptr > 0 )
				{
				for ( i = 1; i <= scon_stk_ptr; ++i )
					scbol[scon_stk[i]] =
						mkbranch( scbol[scon_stk[i]],
								pat );
				}

			else
				{
				/* Add to all non-exclusive start conditions,
				 * including the default (0) start condition.
				 */

				for ( i = 1; i <= lastsc; ++i )
					if ( ! scxclu[i] )
						scbol[i] = mkbranch( scbol[i],
									pat );
				}

			if ( ! bol_needed )
				{
				bol_needed = true;

				if ( performance_report > 1 )
					pinpoint_message(
			"'^' operator results in sub-optimal performance" );
				}
			}
    break;

  case 27:
#line 290 "parse.y"
    {
			pat = (yyvsp[(1) - (1)]);
			finish_rule( pat, variable_trail_rule,
				headcnt, trailcnt , previous_continued_action);

			if ( scon_stk_ptr > 0 )
				{
				for ( i = 1; i <= scon_stk_ptr; ++i )
					scset[scon_stk[i]] =
						mkbranch( scset[scon_stk[i]],
								pat );
				}

			else
				{
				for ( i = 1; i <= lastsc; ++i )
					if ( ! scxclu[i] )
						scset[i] =
							mkbranch( scset[i],
								pat );
				}
			}
    break;

  case 28:
#line 314 "parse.y"
    {
			if ( scon_stk_ptr > 0 )
				build_eof_action();
	
			else
				{
				/* This EOF applies to all start conditions
				 * which don't already have EOF actions.
				 */
				for ( i = 1; i <= lastsc; ++i )
					if ( ! sceof[i] )
						scon_stk[++scon_stk_ptr] = i;

				if ( scon_stk_ptr == 0 )
					warn(
			"all start conditions already have <<EOF>> rules" );

				else
					build_eof_action();
				}
			}
    break;

  case 29:
#line 337 "parse.y"
    { synerr( _("unrecognized rule") ); }
    break;

  case 30:
#line 341 "parse.y"
    { (yyval) = scon_stk_ptr; }
    break;

  case 31:
#line 345 "parse.y"
    { (yyval) = (yyvsp[(2) - (4)]); }
    break;

  case 32:
#line 348 "parse.y"
    {
			(yyval) = scon_stk_ptr;

			for ( i = 1; i <= lastsc; ++i )
				{
				int j;

				for ( j = 1; j <= scon_stk_ptr; ++j )
					if ( scon_stk[j] == i )
						break;

				if ( j > scon_stk_ptr )
					scon_stk[++scon_stk_ptr] = i;
				}
			}
    break;

  case 33:
#line 365 "parse.y"
    { (yyval) = scon_stk_ptr; }
    break;

  case 36:
#line 373 "parse.y"
    { synerr( _("bad start condition list") ); }
    break;

  case 37:
#line 377 "parse.y"
    {
			if ( (scnum = sclookup( nmstr )) == 0 )
				format_pinpoint_message(
					"undeclared start condition %s",
					nmstr );
			else
				{
				for ( i = 1; i <= scon_stk_ptr; ++i )
					if ( scon_stk[i] == scnum )
						{
						format_warn(
							"<%s> specified twice",
							scname[scnum] );
						break;
						}

				if ( i > scon_stk_ptr )
					scon_stk[++scon_stk_ptr] = scnum;
				}
			}
    break;

  case 38:
#line 400 "parse.y"
    {
			if ( transchar[lastst[(yyvsp[(2) - (2)])]] != SYM_EPSILON )
				/* Provide final transition \now/ so it
				 * will be marked as a trailing context
				 * state.
				 */
				(yyvsp[(2) - (2)]) = link_machines( (yyvsp[(2) - (2)]),
						mkstate( SYM_EPSILON ) );

			mark_beginning_as_normal( (yyvsp[(2) - (2)]) );
			current_state_type = STATE_NORMAL;

			if ( previous_continued_action )
				{
				/* We need to treat this as variable trailing
				 * context so that the backup does not happen
				 * in the action but before the action switch
				 * statement.  If the backup happens in the
				 * action, then the rules "falling into" this
				 * one's action will *also* do the backup,
				 * erroneously.
				 */
				if ( ! varlength || headcnt != 0 )
					warn(
		"trailing context made variable due to preceding '|' action" );

				/* Mark as variable. */
				varlength = true;
				headcnt = 0;

				}

			if ( lex_compat || (varlength && headcnt == 0) )
				{ /* variable trailing context rule */
				/* Mark the first part of the rule as the
				 * accepting "head" part of a trailing
				 * context rule.
				 *
				 * By the way, we didn't do this at the
				 * beginning of this production because back
				 * then current_state_type was set up for a
				 * trail rule, and add_accept() can create
				 * a new state ...
				 */
				add_accept( (yyvsp[(1) - (2)]),
					num_rules | YY_TRAILING_HEAD_MASK );
				variable_trail_rule = true;
				}
			
			else
				trailcnt = rulelen;

			(yyval) = link_machines( (yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]) );
			}
    break;

  case 39:
#line 456 "parse.y"
    { synerr( _("trailing context used twice") ); }
    break;

  case 40:
#line 459 "parse.y"
    {
			headcnt = 0;
			trailcnt = 1;
			rulelen = 1;
			varlength = false;

			current_state_type = STATE_TRAILING_CONTEXT;

			if ( trlcontxt )
				{
				synerr( _("trailing context used twice") );
				(yyval) = mkstate( SYM_EPSILON );
				}

			else if ( previous_continued_action )
				{
				/* See the comment in the rule for "re2 re"
				 * above.
				 */
				warn(
		"trailing context made variable due to preceding '|' action" );

				varlength = true;
				}

			if ( lex_compat || varlength )
				{
				/* Again, see the comment in the rule for
				 * "re2 re" above.
				 */
				add_accept( (yyvsp[(1) - (2)]),
					num_rules | YY_TRAILING_HEAD_MASK );
				variable_trail_rule = true;
				}

			trlcontxt = true;

			eps = mkstate( SYM_EPSILON );
			(yyval) = link_machines( (yyvsp[(1) - (2)]),
				link_machines( eps, mkstate( '\n' ) ) );
			}
    break;

  case 41:
#line 502 "parse.y"
    {
			(yyval) = (yyvsp[(1) - (1)]);

			if ( trlcontxt )
				{
				if ( lex_compat || (varlength && headcnt == 0) )
					/* Both head and trail are
					 * variable-length.
					 */
					variable_trail_rule = true;
				else
					trailcnt = rulelen;
				}
			}
    break;

  case 42:
#line 520 "parse.y"
    {
			varlength = true;
			(yyval) = mkor( (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]) );
			}
    break;

  case 43:
#line 526 "parse.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 44:
#line 531 "parse.y"
    {
			/* This rule is written separately so the
			 * reduction will occur before the trailing
			 * series is parsed.
			 */

			if ( trlcontxt )
				synerr( _("trailing context used twice") );
			else
				trlcontxt = true;

			if ( varlength )
				/* We hope the trailing context is
				 * fixed-length.
				 */
				varlength = false;
			else
				headcnt = rulelen;

			rulelen = 0;

			current_state_type = STATE_TRAILING_CONTEXT;
			(yyval) = (yyvsp[(1) - (2)]);
			}
    break;

  case 45:
#line 558 "parse.y"
    {
			/* This is where concatenation of adjacent patterns
			 * gets done.
			 */
			(yyval) = link_machines( (yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]) );
			}
    break;

  case 46:
#line 566 "parse.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 47:
#line 569 "parse.y"
    {
			varlength = true;

			if ( (yyvsp[(3) - (6)]) > (yyvsp[(5) - (6)]) || (yyvsp[(3) - (6)]) < 0 )
				{
				synerr( _("bad iteration values") );
				(yyval) = (yyvsp[(1) - (6)]);
				}
			else
				{
				if ( (yyvsp[(3) - (6)]) == 0 )
					{
					if ( (yyvsp[(5) - (6)]) <= 0 )
						{
						synerr(
						_("bad iteration values") );
						(yyval) = (yyvsp[(1) - (6)]);
						}
					else
						(yyval) = mkopt(
							mkrep( (yyvsp[(1) - (6)]), 1, (yyvsp[(5) - (6)]) ) );
					}
				else
					(yyval) = mkrep( (yyvsp[(1) - (6)]), (yyvsp[(3) - (6)]), (yyvsp[(5) - (6)]) );
				}
			}
    break;

  case 48:
#line 597 "parse.y"
    {
			varlength = true;

			if ( (yyvsp[(3) - (5)]) <= 0 )
				{
				synerr( _("iteration value must be positive") );
				(yyval) = (yyvsp[(1) - (5)]);
				}

			else
				(yyval) = mkrep( (yyvsp[(1) - (5)]), (yyvsp[(3) - (5)]), INFINITE_REPEAT );
			}
    break;

  case 49:
#line 611 "parse.y"
    {
			/* The series could be something like "(foo)",
			 * in which case we have no idea what its length
			 * is, so we punt here.
			 */
			varlength = true;

			if ( (yyvsp[(3) - (4)]) <= 0 )
				{
				  synerr( _("iteration value must be positive")
					  );
				(yyval) = (yyvsp[(1) - (4)]);
				}

			else
				(yyval) = link_machines( (yyvsp[(1) - (4)]),
						copysingl( (yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]) - 1 ) );
			}
    break;

  case 50:
#line 633 "parse.y"
    {
			varlength = true;

			(yyval) = mkclos( (yyvsp[(1) - (2)]) );
			}
    break;

  case 51:
#line 640 "parse.y"
    {
			varlength = true;
			(yyval) = mkposcl( (yyvsp[(1) - (2)]) );
			}
    break;

  case 52:
#line 646 "parse.y"
    {
			varlength = true;
			(yyval) = mkopt( (yyvsp[(1) - (2)]) );
			}
    break;

  case 53:
#line 652 "parse.y"
    {
			varlength = true;

			if ( (yyvsp[(3) - (6)]) > (yyvsp[(5) - (6)]) || (yyvsp[(3) - (6)]) < 0 )
				{
				synerr( _("bad iteration values") );
				(yyval) = (yyvsp[(1) - (6)]);
				}
			else
				{
				if ( (yyvsp[(3) - (6)]) == 0 )
					{
					if ( (yyvsp[(5) - (6)]) <= 0 )
						{
						synerr(
						_("bad iteration values") );
						(yyval) = (yyvsp[(1) - (6)]);
						}
					else
						(yyval) = mkopt(
							mkrep( (yyvsp[(1) - (6)]), 1, (yyvsp[(5) - (6)]) ) );
					}
				else
					(yyval) = mkrep( (yyvsp[(1) - (6)]), (yyvsp[(3) - (6)]), (yyvsp[(5) - (6)]) );
				}
			}
    break;

  case 54:
#line 680 "parse.y"
    {
			varlength = true;

			if ( (yyvsp[(3) - (5)]) <= 0 )
				{
				synerr( _("iteration value must be positive") );
				(yyval) = (yyvsp[(1) - (5)]);
				}

			else
				(yyval) = mkrep( (yyvsp[(1) - (5)]), (yyvsp[(3) - (5)]), INFINITE_REPEAT );
			}
    break;

  case 55:
#line 694 "parse.y"
    {
			/* The singleton could be something like "(foo)",
			 * in which case we have no idea what its length
			 * is, so we punt here.
			 */
			varlength = true;

			if ( (yyvsp[(3) - (4)]) <= 0 )
				{
				synerr( _("iteration value must be positive") );
				(yyval) = (yyvsp[(1) - (4)]);
				}

			else
				(yyval) = link_machines( (yyvsp[(1) - (4)]),
						copysingl( (yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]) - 1 ) );
			}
    break;

  case 56:
#line 713 "parse.y"
    {
			if ( ! madeany )
				{
				/* Create the '.' character class. */
				anyccl = cclinit();
				ccladd( anyccl, '\n' );
				cclnegate( anyccl );

				if ( useecs )
					mkeccl( ccltbl + cclmap[anyccl],
						ccllen[anyccl], nextecm,
						ecgroup, csize, csize );

				madeany = true;
				}

			++rulelen;

			(yyval) = mkstate( -anyccl );
			}
    break;

  case 57:
#line 735 "parse.y"
    {
			if ( ! cclsorted )
				/* Sort characters for fast searching.  We
				 * use a shell sort since this list could
				 * be large.
				 */
				cshell( ccltbl + cclmap[(yyvsp[(1) - (1)])], ccllen[(yyvsp[(1) - (1)])], true );

			if ( useecs )
				mkeccl( ccltbl + cclmap[(yyvsp[(1) - (1)])], ccllen[(yyvsp[(1) - (1)])],
					nextecm, ecgroup, csize, csize );

			++rulelen;

			if (ccl_has_nl[(yyvsp[(1) - (1)])])
				rule_has_nl[num_rules] = true;

			(yyval) = mkstate( -(yyvsp[(1) - (1)]) );
			}
    break;

  case 58:
#line 756 "parse.y"
    {
			++rulelen;

			if (ccl_has_nl[(yyvsp[(1) - (1)])])
				rule_has_nl[num_rules] = true;

			(yyval) = mkstate( -(yyvsp[(1) - (1)]) );
			}
    break;

  case 59:
#line 766 "parse.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 60:
#line 769 "parse.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 61:
#line 772 "parse.y"
    {
			++rulelen;

			if ( caseins && (yyvsp[(1) - (1)]) >= 'A' && (yyvsp[(1) - (1)]) <= 'Z' )
				(yyvsp[(1) - (1)]) = clower( (yyvsp[(1) - (1)]) );

			if ((yyvsp[(1) - (1)]) == nlch)
				rule_has_nl[num_rules] = true;

			(yyval) = mkstate( (yyvsp[(1) - (1)]) );
			}
    break;

  case 62:
#line 786 "parse.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 63:
#line 789 "parse.y"
    {
			cclnegate( (yyvsp[(3) - (4)]) );
			(yyval) = (yyvsp[(3) - (4)]);
			}
    break;

  case 64:
#line 796 "parse.y"
    {

			if (caseins)
			  {
			    /* Squish the character range to lowercase only if BOTH
			     * ends of the range are uppercase.
			     */
			    if (isupper ((yyvsp[(2) - (4)])) && isupper ((yyvsp[(4) - (4)])))
			      {
				(yyvsp[(2) - (4)]) = tolower ((yyvsp[(2) - (4)]));
				(yyvsp[(4) - (4)]) = tolower ((yyvsp[(4) - (4)]));
			      }

			    /* If one end of the range has case and the other
			     * does not, or the cases are different, then we're not
			     * sure what range the user is trying to express.
			     * Examples: [@-z] or [S-t]
			     */
			    else if (has_case ((yyvsp[(2) - (4)])) != has_case ((yyvsp[(4) - (4)]))
				     || (has_case ((yyvsp[(2) - (4)])) && (b_islower ((yyvsp[(2) - (4)])) != b_islower ((yyvsp[(4) - (4)])))))
			      format_warn3 (
			      _("the character range [%c-%c] is ambiguous in a case-insensitive scanner"),
					    (yyvsp[(2) - (4)]), (yyvsp[(4) - (4)]));

			    /* If the range spans uppercase characters but not
			     * lowercase (or vice-versa), then should we automatically
			     * include lowercase characters in the range?
			     * Example: [@-_] spans [a-z] but not [A-Z]
			     */
			    else if (!has_case ((yyvsp[(2) - (4)])) && !has_case ((yyvsp[(4) - (4)])) && !range_covers_case ((yyvsp[(2) - (4)]), (yyvsp[(4) - (4)])))
			      format_warn3 (
			      _("the character range [%c-%c] is ambiguous in a case-insensitive scanner"),
					    (yyvsp[(2) - (4)]), (yyvsp[(4) - (4)]));
			  }

			if ( (yyvsp[(2) - (4)]) > (yyvsp[(4) - (4)]) )
				synerr( _("negative range in character class") );

			else
				{
				for ( i = (yyvsp[(2) - (4)]); i <= (yyvsp[(4) - (4)]); ++i )
					ccladd( (yyvsp[(1) - (4)]), i );

				/* Keep track if this ccl is staying in
				 * alphabetical order.
				 */
				cclsorted = cclsorted && ((yyvsp[(2) - (4)]) > lastchar);
				lastchar = (yyvsp[(4) - (4)]);
				}

			(yyval) = (yyvsp[(1) - (4)]);
			}
    break;

  case 65:
#line 850 "parse.y"
    {
			if ( caseins && (yyvsp[(2) - (2)]) >= 'A' && (yyvsp[(2) - (2)]) <= 'Z' )
				(yyvsp[(2) - (2)]) = clower( (yyvsp[(2) - (2)]) );

			ccladd( (yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]) );
			cclsorted = cclsorted && ((yyvsp[(2) - (2)]) > lastchar);
			lastchar = (yyvsp[(2) - (2)]);
			(yyval) = (yyvsp[(1) - (2)]);
			}
    break;

  case 66:
#line 861 "parse.y"
    {
			/* Too hard to properly maintain cclsorted. */
			cclsorted = false;
			(yyval) = (yyvsp[(1) - (2)]);
			}
    break;

  case 67:
#line 868 "parse.y"
    {
			cclsorted = true;
			lastchar = 0;
			currccl = (yyval) = cclinit();
			}
    break;

  case 68:
#line 875 "parse.y"
    { CCL_EXPR(isalnum); }
    break;

  case 69:
#line 876 "parse.y"
    { CCL_EXPR(isalpha); }
    break;

  case 70:
#line 877 "parse.y"
    { CCL_EXPR(IS_BLANK); }
    break;

  case 71:
#line 878 "parse.y"
    { CCL_EXPR(iscntrl); }
    break;

  case 72:
#line 879 "parse.y"
    { CCL_EXPR(isdigit); }
    break;

  case 73:
#line 880 "parse.y"
    { CCL_EXPR(isgraph); }
    break;

  case 74:
#line 881 "parse.y"
    { CCL_EXPR(islower); }
    break;

  case 75:
#line 882 "parse.y"
    { CCL_EXPR(isprint); }
    break;

  case 76:
#line 883 "parse.y"
    { CCL_EXPR(ispunct); }
    break;

  case 77:
#line 884 "parse.y"
    { CCL_EXPR(isspace); }
    break;

  case 78:
#line 885 "parse.y"
    {
				if ( caseins )
					CCL_EXPR(islower);
				else
					CCL_EXPR(isupper);
				}
    break;

  case 79:
#line 891 "parse.y"
    { CCL_EXPR(isxdigit); }
    break;

  case 80:
#line 895 "parse.y"
    {
			if ( caseins && (yyvsp[(2) - (2)]) >= 'A' && (yyvsp[(2) - (2)]) <= 'Z' )
				(yyvsp[(2) - (2)]) = clower( (yyvsp[(2) - (2)]) );

			if ( (yyvsp[(2) - (2)]) == nlch )
				rule_has_nl[num_rules] = true;

			++rulelen;

			(yyval) = link_machines( (yyvsp[(1) - (2)]), mkstate( (yyvsp[(2) - (2)]) ) );
			}
    break;

  case 81:
#line 908 "parse.y"
    { (yyval) = mkstate( SYM_EPSILON ); }
    break;


/* Line 1267 of yacc.c.  */
#line 2494 "parse.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 911 "parse.y"



/* build_eof_action - build the "<<EOF>>" action for the active start
 *                    conditions
 */

void build_eof_action()
	{
	register int i;
	char action_text[MAXLINE];

	for ( i = 1; i <= scon_stk_ptr; ++i )
		{
		if ( sceof[scon_stk[i]] )
			format_pinpoint_message(
				"multiple <<EOF>> rules for start condition %s",
				scname[scon_stk[i]] );

		else
			{
			sceof[scon_stk[i]] = true;
			sprintf( action_text, "case YY_STATE_EOF(%s):\n",
				scname[scon_stk[i]] );
			add_action( action_text );
			}
		}

	line_directive_out( (FILE *) 0, 1 );

	/* This isn't a normal rule after all - don't count it as
	 * such, so we don't have any holes in the rule numbering
	 * (which make generating "rule can never match" warnings
	 * more difficult.
	 */
	--num_rules;
	++num_eof_rules;
	}


/* format_synerr - write out formatted syntax error */

void format_synerr( msg, arg )
const char *msg, arg[];
	{
	char errmsg[MAXLINE];

	(void) sprintf( errmsg, msg, arg );
	synerr( errmsg );
	}


/* synerr - report a syntax error */

void synerr( str )
const char *str;
	{
	syntaxerror = true;
	pinpoint_message( str );
	}


/* format_warn - write out formatted warning */

void format_warn( msg, arg )
const char *msg, arg[];
	{
	char warn_msg[MAXLINE];

	(void) sprintf( warn_msg, msg, arg );
	warn( warn_msg );
	}


/* warn - report a warning, unless -w was given */

void warn( str )
const char *str;
	{
	line_warning( str, linenum );
	}

/* format_pinpoint_message - write out a message formatted with one string,
 *			     pinpointing its location
 */

void format_pinpoint_message( msg, arg )
const char *msg, arg[];
	{
	char errmsg[MAXLINE];

	(void) sprintf( errmsg, msg, arg );
	pinpoint_message( errmsg );
	}


/* pinpoint_message - write out a message, pinpointing its location */

void pinpoint_message( str )
const char *str;
	{
	line_pinpoint( str, linenum );
	}


/* line_warning - report a warning at a given line, unless -w was given */

void line_warning( str, line )
const char *str;
int line;
	{
	char warning[MAXLINE];

	if ( ! nowarn )
		{
		sprintf( warning, "warning, %s", str );
		line_pinpoint( warning, line );
		}
	}


/* line_pinpoint - write out a message, pinpointing it at the given line */

void line_pinpoint( str, line )
const char *str;
int line;
	{
	fprintf( stderr, "%s:%d: %s\n", infilename, line, str );
	}


/* yyerror - eat up an error message from the parser;
 *	     currently, messages are ignore
 */

void yyerror( msg )
const char *msg;
	{
	}

