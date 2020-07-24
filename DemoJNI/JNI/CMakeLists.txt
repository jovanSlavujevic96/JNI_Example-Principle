cmake_minimum_required (VERSION 2.8.11)
project (DemoJNI)

set(NEKI_LIB_PATH "$ENV{HOME}/Workspace/LibCPP")
set(JNI_PATH "/usr/lib/jvm/java-11-openjdk-amd64/include;/usr/lib/jvm/java-11-openjdk-amd64/include/linux")
set(CMAKE_CXX_FLAGS "-std=c++11 -O3 -ggdb")

add_library (DemoJNI SHARED classPackage_ClassA.cpp)
target_include_directories (DemoJNI PUBLIC ${NEKI_LIB_PATH}/include ${JNI_PATH} )

set(CMAKE_CXX_FLAGS "-fPIC -std=c++11 -O3 -ggdb")