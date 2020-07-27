export NEKI_LIB_PATH=$PWD/../LibCPP
g++ -I$NEKI_LIB_PATH/include/ Demo.cpp -o build/Demo -L$NEKI_LIB_PATH/build/ -lNekiLib
