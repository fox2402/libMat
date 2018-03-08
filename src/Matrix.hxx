//
// Created by Hiryuu on 2/16/2018.
//
#include <stdexcept>
#include "Matrix.h"

template<typename T,unsigned int W, unsigned int H>
Matrix::Matrix<T, W, H>()
{
    for (std::size_t i = 0; i < W * H; i++)
        buff_.push_back(0);
}

template<typename T,unsigned int W, unsigned int H>
std::size_t Matrix<T, W, H>::to_single_coordinate(unsigned int x, unsigned int y) const
{
    return y * W + x;
}

template<typename T,unsigned int W, unsigned int H>
double& Matrix<T, W, H>::at(unsigned int x, unsigned int y)
{
    return buff_.at(to_single_coordinate(x, y));
}

template<typename T,unsigned int W, unsigned int H>
const double& Matrix<T, W, H>::at(unsigned int x, unsigned int y) const
{
    return buff_.at(to_single_coordinate(x, y));
}

template<typename T,unsigned int W, unsigned int H>
Matrix<T, W, H> Matrix<T, W, H>::operator+(const Matrix<T, W, H>& rhs) const {
    Matrix<T, W, H> sum;

    for (std::size_t i = 0; i < buff_.size(); i++)
    {
        sum.buff_.at(i) = buff_.at(i) + rhs.buff_.at(i);
    }
    return sum;
}

template<typename T, unsigned int W1_, unsigned int H1_, unsigned int W2_, unsigned int H2_>
Matrix<T, H1_, W2_> operator*(const Matrix<T, W1_, H1_> &mat1, const Matrix<T, W2_, H2_> &mat2)
{
    if (H1_ != W2_)
    {
        throw std::invalid_argument("Dimensions of matrix doesn't allow multiplications");
    }
    Matrix<H1_, W2_> product;
    for (std::size_t i = 0; i < H1_; i++)
    {
        for (std::size_t j = 0; j < W2_; j++)
        {
            double sum = 0;
            for (std::size_t k = 0; k < W2_; k++)
            {
                sum += mat1.at(i, k) * mat2.at(k, j);
            }
            product.at(i, j) = sum;
        }
    }
    return product;
}