.DEFAULT_GOAL = all
BUILDDIR := build


$(BUILDDIR):
	mkdir $@

all: | $(BUILDDIR)
	@[ -e $(BUILDDIR)/CMakeCache.txt ] || cmake -B $(BUILDDIR) -S .
	make -C $(BUILDDIR) all

%: | $(BUILDDIR)
	make -C $(BUILDDIR) $*

clean: | $(BUILDDIR)
	make -C $(BUILDDIR) clean


.PHONY: pre_build all clean
