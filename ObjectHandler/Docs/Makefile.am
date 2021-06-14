
EXTRA_DIST = \
    docs.vcxproj \
    docs.vcxproj.filters \
    Makefile.vc \
    objecthandler.doxy \
    oh_footer.html \
    oh_header.html \
    doxygen.css \
    tabs.css \
    ql.css \
    preprocess_doxyfile.py

FILENAME := ObjectHandler-docs-$(VERSION)-html
PROJECTNAME := objecthandler
PROJECTINITIALS := oh
DOXYGEN_INPUT := $(shell find ${top_srcdir} -name *.hpp) \
                 $(shell find ${top_srcdir}/Examples -name *.cpp) \
                 $(wildcard auto.pages/*.docs) \
                 $(wildcard pages/*.docs)
OH_DIR := ..

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

