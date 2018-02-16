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

    void set_cell(unsigned int x, unsigned int y, double val);
    double get_cell(unsigned int x, unsigned int y);


private:

    std::size_t to_single_coordinate(unsigned int x, unsigned int y);

    std::vector<double> buff_;

    unsigned int width_ = W;
    unsigned int height_ = H;
};
