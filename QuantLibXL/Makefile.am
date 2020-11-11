
SUBDIRS = \
    Docs

EXTRA_DIST = \
    Authors.txt \
    Contributors.txt \
    LICENSE.TXT \
    NEWS.txt \
    QuantLibAllDynamic.sln \
    QuantLibXL_basic.sln \
    QuantLibXL-bin.nsi \
    QuantLibXL_full.sln \
    QuantLibXL.nsi \
    QuantLibXL-src.nsi \
    README.txt \
    todo.txt

.PHONY: docs docs-dist docs-clean
BASEPATH = @abs_top_srcdir@
docs:
	BASEPATH=$(BASEPATH) $(MAKE) -C Docs docs-all
docs-dist:
	BASEPATH=$(BASEPATH) $(MAKE) -C Docs docs-dist
docs-clean:
	$(MAKE) -C Docs docs-clean

