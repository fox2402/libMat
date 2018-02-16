//
// Created by Hiryuu on 2/16/2018.
//
#include "Matrix.h"

Matrix::Matrix()
{
    for (std::size_t i = 0; i < width_ * height_; i++)
        buff_.push_back(0);
}

void Matrix::set_cell(unsigned int x, unsigned int y, double val)
{
    buff_.at(to_single_coordinate(x, y)) = val;
}

double Matrix::get_cell(unsigned int x, unsigned int y)
{
    return buff_.at(to_single_coordinate(x, y));
}

std::size_t Matrix::to_single_coordinate(unsigned int x, unsigned int y)
{
    return y * width_ + x;
}