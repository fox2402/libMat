# cmake_minimum_required(VERSION <specify CMake version here>)
project(libMat)

set(CMAKE_CXX_STANDARD 17)

add_library(libMat SHARED src/library.cpp src/library.h src/Matrix.h src/Matrix.hxx src/matTrait/Mat_trait.h src/matTrait/Mat_trait.hxx src/matTrait/Numeric_trait.h)