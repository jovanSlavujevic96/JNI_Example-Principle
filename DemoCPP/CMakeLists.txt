cmake_minimum_required (VERSION 2.8.11)
project (Demo)

set(NEKI_LIB_PATH "/home/jovan/Workspace/LibCPP")
set(CMAKE_CXX_FLAGS "-std=c++11 -O3 -ggdb")

add_executable(Demo Demo.cpp)

include_directories(${NEKI_LIB_PATH}/include)
target_link_libraries (Demo "-L${NEKI_LIB_PATH}/build" NekiLib)
