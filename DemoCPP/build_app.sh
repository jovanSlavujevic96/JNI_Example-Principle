export NEKI_LIB_PATH=/home/jovan/Workspace/LibCPP
g++ -I$NEKI_LIB_PATH/include/ Demo.cpp -o build/Demo -L$NEKI_LIB_PATH/build/ -lNekiLib
