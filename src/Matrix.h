//
// Created by Hiryuu on 2/16/2018.
//
#include <vector>
#include "matTrait/MatTrait.h"

#pragma once

template <typename T, unsigned int W, unsigned int H>
class Matrix
{
public:
    Matrix();

    T& at(unsigned int x, unsigned int y);
    const T& at(unsigned int x, unsigned int y) const;

    Matrix<T, W, H> operator+(const Matrix<T, W, H>& rhs) const;

private:

    std::size_t to_single_coordinate(unsigned int x, unsigned int y) const;
    std::vector<MatTrait<T>> buff_;
};

template<typename T, unsigned int W1_, unsigned int H1_, unsigned int W2_, unsigned int H2_>
Matrix<T, H1_, W2_> operator* (const Matrix<T, W1_, H1_>& mat1, const Matrix<T, W2_, H2_>& mat2);

#include "Matrix.hxx"