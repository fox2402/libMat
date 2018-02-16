//
// Created by Hiryuu on 2/16/2018.
//
#include <vector>

#pragma once

template <unsigned int W, unsigned int H>
class Matrix
{
public:
    Matrix();

    double& at(unsigned int x, unsigned int y);
    const double& at(unsigned int x, unsigned int y) const;

    Matrix<W, H> operator+(const Matrix<W, H>& rhs) const;

private:

    std::size_t to_single_coordinate(unsigned int x, unsigned int y) const;

    std::vector<double> buff_;
};

template<unsigned int W1_, unsigned int H1_, unsigned int W2_, unsigned int H2_>
Matrix<H1_, W2_> operator* (const Matrix<W1_, H1_>& mat1, const Matrix<W2_, H2_>& mat2);

#include "Matrix.hxx"