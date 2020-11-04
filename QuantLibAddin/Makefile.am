
SUBDIRS = \
    gensrc \
    qlo/conversions \
    qlo/enumerations/constructors \
    qlo/enumerations/factories \
    qlo/enumerations/register \
    qlo/indexes \
    qlo/indexes/ibor \
    qlo/indexes/swap \
    qlo/loop \
    qlo/serialization/create \
    qlo/serialization/register \
    qlo/serialization \
    qlo/valueobjects \
    qlo \
    Addins/Cpp \
    Clients/Cpp \
    Clients/CppInstrumentIn \
    Clients/CppSwapOut \
    Docs

EXTRA_DIST = \
    Announce.txt \
    Authors.txt \
    autogen.sh \
    Contributors.txt \
    LICENSE.TXT \
    NEWS.txt \
    QuantLibAddin.nsi \
    QuantLibAddin.sln \
    QuantLibObjects.vcxproj \
    QuantLibObjects.vcxproj.filters \
    QuantLibObjects2.vcxproj \
    QuantLibObjects2.vcxproj.filters \
    QuantLibObjects3.vcxproj \
    QuantLibObjects3.vcxproj.filters \
    QuantLibObjects4.vcxproj \
    QuantLibObjects4.vcxproj.filters \
    README.txt \
    todo.txt

.PHONY: docs docs-online docs-dist docs-clean
BASEPATH = @abs_top_srcdir@
docs:
	$(MAKE) -C gensrc
	BASEPATH=$(BASEPATH) $(MAKE) -C Docs docs-all
docs-dist:
	$(MAKE) -C gensrc
	BASEPATH=$(BASEPATH) $(MAKE) -C Docs docs-dist
docs-online:
	$(MAKE) -C gensrc
	BASEPATH=$(BASEPATH) $(MAKE) -C Docs docs-online
docs-online-dist:
	$(MAKE) -C gensrc
	BASEPATH=$(BASEPATH) $(MAKE) -C Docs docs-online-dist
docs-clean:
	$(MAKE) -C gensrc clean
	$(MAKE) -C Docs docs-clean

