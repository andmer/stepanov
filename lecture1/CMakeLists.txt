cmake_minimum_required(VERSION 3.4)
project(lecture1)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")

set(SOURCE_FILES
    concepts.h
    count_operations.cpp
    count_operations.h
#    count_operations_normalized.cpp
    functorized.h
    iota.h
    setsort.h
    table_util.h
    instrumented.h
    instrumented.cpp)

add_executable(count_operations ${SOURCE_FILES})