
Linux
=======

# Create a directory for your work:

mkdir /home/erik/reposit

# Set the REPOSIT_DIR environment variable equal to the new directory:

export REPOSIT_DIR=/home/erik/reposit
#export PATH=$PATH:$REPOSIT_DIR/install/bin

boost
=====

# Download boost_1_52_0.tar.gz to $REPOSIT_DIR.

cd $REPOSIT_DIR
tar xzvf boost_1_52_0.tar.gz
cd $REPOSIT_DIR/boost_1_52_0
./bootstrap.sh --prefix=$REPOSIT_DIR/install
./b2 install

ObjectHandler
=============

cd $REPOSIT_DIR

# This repo contains a version of ObjectHandler that has no dependency on gensrc.

git clone -b reposit https://github.com/eehlers/quantlib.git

# Configure and build ObjectHandler.

cd $REPOSIT_DIR/quantlib/ObjectHandler
./autogen.sh
./configure --without-log4cxx \
    --prefix=$REPOSIT_DIR/install \
    CPPFLAGS=-I$REPOSIT_DIR/install/include \
    LDFLAGS=-L$REPOSIT_DIR/install/lib
make install

# Test.

cd $REPOSIT_DIR/quantlib/ObjectHandler/Examples/C++
./ExampleCpp

pcre
====

# Download pcre-8.35.tar.gz to $REPOSIT_DIR.

cd $REPOSIT_DIR
tar xzvf pcre-8.35.tar.gz
cd $REPOSIT_DIR/pcre-8.35
./configure --prefix=$REPOSIT_DIR/install
make install

SWIG
====

cd $REPOSIT_DIR

git clone --depth 1 https://github.com/eehlers/swig.git

cd $REPOSIT_DIR/swig

./autogen.sh

./configure --prefix=$REPOSIT_DIR/install \
    PCRE_CONFIG=$REPOSIT_DIR/install/bin/pcre-config \
    CPPFLAGS=-I$REPOSIT_DIR/install/include \
    LDFLAGS=-L$REPOSIT_DIR/install/lib
make
#make install

# Build & run the examples.

cd $REPOSIT_DIR/swig/Examples/reposit/simple
export LD_LIBRARY_PATH=$REPOSIT_DIR/install/lib:$REPOSIT_DIR/swig/Examples/reposit/simple/lib
make SWIG
make
cd $REPOSIT_DIR/swig/Examples/simple/Main
./mainSimpleLibAddin

cd $REPOSIT_DIR/swig/Examples/reposit/complex
export LD_LIBRARY_PATH=$REPOSIT_DIR/install/lib:$REPOSIT_DIR/swig/Examples/reposit/complex/lib
make SWIG
make
cd $REPOSIT_DIR/swig/Examples/reposit/complex/ComplexLibAddin/Main
./mainComplexLibAddin

QuantLib
========

cd $REPOSIT_DIR/quantlib/QuantLib
./autogen.sh
./configure --prefix=$REPOSIT_DIR/install \
    --with-boost-include=$REPOSIT_DIR/install/include \
    --with-boost-lib=$REPOSIT_DIR/install/lib
make install

QuantLibAddin
=============

cd $REPOSIT_DIR/quantlib/QuantLibAddin2
./autogen.sh
./configure --prefix=$REPOSIT_DIR/install \
    --with-boost-include=$REPOSIT_DIR/install/include \
    --with-boost-lib=$REPOSIT_DIR/install/lib \
    --with-swig=$REPOSIT_DIR/swig
export LD_LIBRARY_PATH=$REPOSIT_DIR/install/lib
make SWIG
make

# Test.

cd $REPOSIT_DIR/reposit/QuantLibAddin/Main

Windows
=======

C:\reposit

boost
=====

ObjectHandler
=============
# This repo contains a version of ObjectHandler that has no dependency on gensrc.

git clone -b reposit https://github.com/eehlers/quantlib.git

SWIG
====
git clone https://github.com/eehlers/swig.git
C:\share\reposit\swig\Examples\reposit\simple

# Mount the windows partition from linux and do
cd /mnt/hgfs/share/reposit/swig/Examples/reposit/simple
export REPOSIT_DIR=/home/erik/reposit
export LD_LIBRARY_PATH=$REPOSIT_DIR/install/lib
$REPOSIT_DIR/swig/preinst-swig -prefix sl -c++ -reposit simple.i

# Open with VC9
C:\share\reposit\swig\Examples\reposit\simple\simple.sln

# Start Excel and load
C:\share\reposit\swig\Examples\reposit\simple\Release\AddinXl.xll
C:\share\reposit\swig\Examples\reposit\simple\AddinXl\AddinXl.xlsx

# Mount the windows partition from linux and do
cd /mnt/hgfs/share/reposit/swig/Examples/reposit/complex/ComplexLibAddin/swig
export REPOSIT_DIR=/home/erik/reposit
export LD_LIBRARY_PATH=$REPOSIT_DIR/install/lib
$REPOSIT_DIR/swig/preinst-swig -c++ -reposit -prefix fl complex.i

# Start Excel and load
C:\share\reposit\swig\Examples\reposit\complex\Release\AddinXl.xll
C:\share\reposit\swig\Examples\reposit\complex\AddinXl\AddinXl.xlsx

QuantLib
========

QuantLibAddin/QuantLibXL
========================
# Mount the windows partition from linux and do
cd /mnt/hgfs/share/reposit/quantlib/QuantLibAddin2/swig
export REPOSIT_DIR=/home/erik/reposit
export LD_LIBRARY_PATH=$REPOSIT_DIR/install/lib
$REPOSIT_DIR/swig/preinst-swig -c++ -reposit -prefix ql quantlib.i

# Start Excel and load
C:\share\reposit\QuantLibAddin\Release\AddinXl.xll
C:\share\reposit\QuantLibAddin\AddinXl\AddinXl.xlsx

