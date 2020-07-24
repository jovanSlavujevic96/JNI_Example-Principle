cmake_minimum_required (VERSION 2.8.11)
project (NekiLib)

add_library (NekiLib SHARED src/NekiLib.cpp)
target_include_directories (NekiLib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

set(CMAKE_CXX_FLAGS "-fPIC -std=c++11 -O3 -ggdb")