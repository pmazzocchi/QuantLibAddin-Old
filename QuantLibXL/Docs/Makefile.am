
EXTRA_DIST = \
    docs-QuantLibXL.vcxproj \
    doxygen.css \
    Makefile.vc \
    ql.css \
    qlxl_footer.html \
    qlxl_header.html \
    quantlibxl.doxy \
    robots.txt \
    tabs.css

FILENAME := QuantLibXL-docs-$(VERSION)-html
PROJECTNAME := quantlibxl
PROJECTINITIALS := qlxl
DOXYGEN_INPUT := $(wildcard pages/*.docs) \
                 $(wildcard ../../ObjectHandler/Docs/pages/*.docs) \
                 $(wildcard ../../QuantLibAddin/Docs/pages/*.docs) \
                 $(wildcard ../../QuantLibAddin/Docs/auto.pages/*.docs)
OH_DIR := ../../ObjectHandler

# From here on this file is identical for ObjectHandler, gensrc, QuantLibAddin, QuantLibXL

DOXYGEN_CONFIG := $(PROJECTNAME).doxy
DOXYGEN_CONFIG_TEMP := .$(DOXYGEN_CONFIG)
DOXYGEN_CUSTOM := doxygen.css tabs.css ql.css $(PROJECTINITIALS)_footer.html $(PROJECTINITIALS)_header.html
SCRIPT := $(OH_DIR)/Docs/preprocess_doxyfile.py

%.gz: %
	rm -f $@
	gzip --best $<
%.tar: %
	tar chf $@ $<
	rm $<

.PHONY: docs-all docs-html docs-clean
.PHONY: docs-dist docs-html-dist 

dist-hook:
	mkdir -p $(distdir)/auto.pages $(distdir)/pages $(distdir)/images
	cp -p $(srcdir)/auto.pages/*.docs $(distdir)/auto.pages
	cp -p $(srcdir)/pages/*.docs $(distdir)/pages
	cp -p $(srcdir)/images/*.ico $(srcdir)/images/*.jpg $(srcdir)/images/*.png $(distdir)/images

docs-all: docs-html
docs-dist: docs-html-dist

docs-html: .time-stamp-html
.time-stamp-html: $(DOXYGEN_CONFIG) $(DOXYGEN_CUSTOM) $(DOXYGEN_INPUT)
	$(PYTHON3) $(SCRIPT) $(DOXYGEN_CONFIG) $(DOXYGEN_CONFIG_TEMP)
	$(DOXYGEN) $(DOXYGEN_CONFIG_TEMP)
	rm $(DOXYGEN_CONFIG_TEMP)
	cp tabs.css html
	cp ql.css html
	mkdir -p html/images
	cp -f images/*.ico images/*.jpg images/*.png html/images
	touch .time-stamp-html

docs-html-dist: docs-html
	ln -s html $(FILENAME)
	tar czfvh $(FILENAME).tar.gz $(FILENAME)
	rm $(FILENAME)

docs-clean:
	rm -Rf html
	rm -f .time-stamp*


