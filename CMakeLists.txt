# cmake_minimum_required(VERSION <specify CMake version here>)
project(libMat)

set(CMAKE_CXX_STANDARD 17)

add_library(libMat SHARED library.cpp library.h)