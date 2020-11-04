 
QLADemo_CPPFLAGS = -I${top_srcdir}
QLADemo_LDADD = ../../qlo/libQuantLibAddin.la ../../Addins/Cpp/libQuantLibAddinCpp.la
QLADemo_LDFLAGS = -lObjectHandler -lQuantLib -lboost_filesystem -lboost_serialization -lboost_system -lboost_regex

EXTRA_DIST = \
    ClientCppDemo.vcxproj

QLADemo_SOURCES = qlademo.cpp

if BUILD_CPP
noinst_PROGRAMS = QLADemo
else
EXTRA_PROGRAMS = QLADemo
endif

