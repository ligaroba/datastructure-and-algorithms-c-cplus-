cmake_minimum_required(VERSION 3.16)
project(Cplusplus_Algorithms)

set(CMAKE_CXX_STANDARD 17)

add_executable(C___Algorithms main.cpp graph/Graph.cpp graph/Graph.h graph/TopologicalSort.cpp graph/TopologicalSort.h)