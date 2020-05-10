cmake_minimum_required(VERSION 3.8)

project(cpp_ds_algorithms)

set(CMAKE_CXX_STANDARD 14)

#Add the google test subdirectory
add_subdirectory(include/googletest)

#include googletest/include dir
include_directories(include/googletest/include)

#include the googlemock/include dir
include_directories(include/googlemock/include)

set(SOURCE_FILES src/main.cpp src/main2.cpp
        src/graph/topologicalsort/Graph.cpp
        src/graph/topologicalsort/Graph.h
        src/graph/topologicalsort/TopologicalSort.cpp
        src/graph/topologicalsort/TopologicalSort.h src/sample_test.cpp )

add_executable(cpp_ds_algorithms ${SOURCE_FILES})

#Link with GoogleTest
target_link_libraries(cpp_ds_algorithms gtest gtest_main)

#Link with GoogleMock
target_link_libraries(cpp_ds_algorithms gmock gmock_main)