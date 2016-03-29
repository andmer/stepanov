cmake_minimum_required(VERSION 3.4)
project(lecture3)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")

set(SOURCE_FILES
    count_operations.cpp
    #count_operations_normalized.cpp
    instrumented.cpp
    singleton.h
    concepts.h
    count_operations.h
    functorized.h
    instrumented.h
    iota.h
    setsort.h
    table_util.h
    )

add_executable(lecture3 ${SOURCE_FILES})