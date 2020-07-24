javac Demo.java
export NEKI_LIB_PATH=$HOME/JNI_Example-Principle/LibCPP
export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:$NEKI_LIB_PATH/build:$PWD/JNI/build
java Demo
