export NEKI_LIB_PATH=$PWD/../../LibCPP
g++ classPackage_ClassA.cpp -o build/libDemoJNI.so \
    -I/usr/lib/jvm/java-11-openjdk-amd64/include \
    -I/usr/lib/jvm/java-11-openjdk-amd64/include/linux -shared -fPIC -std=c++11 -O3 \
    -I$NEKI_LIB_PATH/include  \
    -L$NEKI_LIB_PATH/build -lNekiLib 
