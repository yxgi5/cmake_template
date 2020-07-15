# prepare
mkdir build
cd build

# generate Makefile
cmake ..
或者
cmake -DDEBUG_FLAG=1 ..

# make target
make VERBOSE=1

# clear all
cd ..
rm build/* -rf
cd build
