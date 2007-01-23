info_TEXINFOS =	flex.texi
dist_man_MANS = flex.1

MAINTAINERCLEANFILES = \
	flex.1

CLEANFILES = \
	flex.hks \
	flex.ops

flex.1: $(top_srcdir)/src/main.c
	$(HELP2MAN) --name='fast lexical analyzer generator' --section=1 ../src/flex > flex.1
