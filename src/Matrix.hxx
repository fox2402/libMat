//
// Created by Hiryuu on 2/16/2018.
//
#include <stdexcept>
#include "Matrix.h"

template<typename T,unsigned int W, unsigned int H>
Matrix::Matrix<T, W, H>()
{
    for (std::size_t i = 0; i < W * H; i++)
        buff_.push_back(Numeric_trait<T>::null_val());
}

template<typename T,unsigned int W, unsigned int H>
bool Matrix::is_identity()
{
    for (std::size_t i = 0; i < W; i++)
    {
        for (std::size_t j = 0; j < H; j++)
        {
            if (i == j && at(i, j) != Numeric_trait<T>::identity_val())
                return false;
            if (i != j && at(i, j) != Numeric_trait<T>::null_val())
                return false;
        }
    }
    return true;
}

template<typename T,unsigned int W, unsigned int H>
std::size_t Matrix<T, W, H>::to_single_coordinate(unsigned int x, unsigned int y) const
{
    return y * W + x;
}

template<typename T,unsigned int W, unsigned int H>
T& Matrix<T, W, H>::at(unsigned int x, unsigned int y)
{
    return buff_.at(to_single_coordinate(x, y)).get_value();
}

template<typename T,unsigned int W, unsigned int H>
const T& Matrix<T, W, H>::at(unsigned int x, unsigned int y) const
{
    return buff_.at(to_single_coordinate(x, y)).get_value();
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
    Matrix<T, H1_, W2_> product;
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

template<typename T, unsigned int W, unsigned int H>
Matrix<T, H, W> Matrix<T, W, H>::transpose() const
{
    Matrix<T, H, W> res;
    for (std::size_t i = 0; i < W; i++)
    {
        for (std::size_t j = 0; j < H; j++)
        {
            res.at(j, i) = at(i, j);
        }
    }
    return res;
}

template<typename T, unsigned int W, unsigned int H>
Matrix<T, W, H> Matrix<T, W, H>::operator*(Numeric_trait<T>::const_ref val) const
{
    for (std::size_t i = 0; i < W; i++)
    {
        for (std::size_t j = 0; j < H; j++)
        {
            at(i, j) *= val;
        }
    }
}