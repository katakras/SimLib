cmake_minimum_required(VERSION 3.8)
project(SimLib)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Graphs/Graph.cpp Graphs/Graph.h Tests/GraphTests.cpp Tests/GraphTests.h Tests/TestsGeneral.cpp Tests/TestsGeneral.h)
add_executable(SimLib ${SOURCE_FILES})