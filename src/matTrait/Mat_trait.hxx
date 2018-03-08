//
// Created by Hiryuu on 3/7/2018.
//

#ifndef LIBMAT_MATTRAIT_HXX
#define LIBMAT_MATTRAIT_HXX

#include <cstddef>
#include "Mat_trait.h"

/*
    Mat_trait(T& value);
    T null_value();
    T oneValue();
    Mat_trait<T>& operator+(Mat_trait& rhs);
    Mat_trait<T>& operator-(Mat_trait& rhs);
    Mat_trait<T>& operator*(Mat_trait& rhs);
    Mat_trait<T>& operator/(Mat_trait& rhs);
    T& get_value();
*/

template <typename T>
Mat_trait<T>::Mat_trait(T& value)
    : val_ (value)
{}

template <typename T>
Mat_trait<T> Mat_trait<T>::operator+(Mat_trait &rhs) const
{
    Mat_trait<T> retVal(get_value() + rhs.get_value());
    return retVal;
}

template <typename T>
Mat_trait<T> Mat_trait<T>::operator-(Mat_trait &rhs) const
{
    Mat_trait<T> retVal(get_value() - rhs.get_value());
    return retVal;
}

template <typename T>
Mat_trait<T> Mat_trait<T>::operator*(Mat_trait &rhs) const
{
    Mat_trait<T> retVal(get_value() * rhs.get_value());
    return retVal;
}

template <typename T>
Mat_trait<T> Mat_trait<T>::operator/(Mat_trait &rhs) const
{
    Mat_trait<T> retVal(get_value() / rhs.get_value());
    return retVal;
}

template <typename T>
const T& Mat_trait<T>::get_value() const
{
    return val_;
}

template <typename T>
T& Mat_trait<T>::get_value()
{
    return val_;
}

template<>
int Mat_trait<int>::null_value()
{
    return 0;
}

template<>
int Mat_trait<int>::identity_value()
{
    return 1;
}

template<>
long Mat_trait<long>::null_value()
{
    return 0;
}

template<>
long Mat_trait<long>::identity_value()
{
    return 1;
}

template<>
float Mat_trait<float>::null_value()
{
    return 0f;
}

template<>
float Mat_trait<float>::identity_value()
{
    return 1f;
}

template<>
double Mat_trait<double>::null_value()
{
    return 0;
}

template<>
double Mat_trait<double>::identity_value()
{
    return 1;
}

template<>
std::size_t Mat_trait<std::size_t >::null_value()
{
    return 0;
}

template<>
std::size_t Mat_trait<std::size_t>::identity_value()
{
    return 1;
}















#endif //LIBMAT_MATTRAIT_HXX
