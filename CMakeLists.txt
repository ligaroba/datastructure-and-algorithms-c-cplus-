cmake_minimum_required(VERSION 3.8)

project(cpp_ds_algorithms)

set(CMAKE_CXX_STANDARD 14)


set(SOURCE_FILES src/main.cpp
        src/graph/topologicalsort/Graph.cpp
        src/graph/topologicalsort/Graph.h
        src/graph/topologicalsort/TopologicalSort.cpp
        src/graph/topologicalsort/TopologicalSort.h)

add_executable(cpp_ds_algorithms ${SOURCE_FILES})