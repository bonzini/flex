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

bin_PROGRAMS = flex
lib_LIBRARIES = libfl.a

flex_SOURCES = \
	ccl.c \
	dfa.c \
	ecs.c \
	gen.c \
	main.c \
	misc.c \
	nfa.c \
	parse.y \
	scan.l \
	sym.c \
	tblcmp.c \
	yylex.c \
	options.c \
	scanopt.c \
	buf.c \
	tables.c \
	tables_shared.c \
	filter.c \
	regex.c

libfl_a_SOURCES = \
	libmain.c \
	libyywrap.c

noinst_HEADERS = \
	flexdef.h \
	flexint.h \
	version.h \
	options.h \
	scanopt.h \
	tables.h \
	tables_shared.h

include_HEADERS = \
	FlexLexer.h

localedir = $(datadir)/locale
AM_CPPFLAGS = -DLOCALEDIR=\"$(localedir)\" -I@includedir@ -I$(top_srcdir)/intl \
	-DPKGDATADIR=\"$(pkgdatadir)\"
LIBS = @LIBINTL@ @LIBS@
