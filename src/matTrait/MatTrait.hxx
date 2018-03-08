//
// Created by Hiryuu on 3/7/2018.
//

#ifndef LIBMAT_MATTRAIT_HXX
#define LIBMAT_MATTRAIT_HXX

#include <cstddef>
#include "MatTrait.h"

/*
    MatTrait(T& value);
    T nullValue();
    T oneValue();
    MatTrait<T>& operator+(MatTrait& rhs);
    MatTrait<T>& operator-(MatTrait& rhs);
    MatTrait<T>& operator*(MatTrait& rhs);
    MatTrait<T>& operator/(MatTrait& rhs);
    T& getValue();
*/

template <typename T>
MatTrait<T>::MatTrait(T& value)
    : val_ (value)
{}

template <typename T>
MatTrait<T> MatTrait<T>::operator+(MatTrait &rhs) const
{
    MatTrait<T> retVal(getValue() + rhs.getValue());
    return retVal;
}

template <typename T>
MatTrait<T> MatTrait<T>::operator-(MatTrait &rhs) const
{
    MatTrait<T> retVal(getValue() - rhs.getValue());
    return retVal;
}

template <typename T>
MatTrait<T> MatTrait<T>::operator*(MatTrait &rhs) const
{
    MatTrait<T> retVal(getValue() * rhs.getValue());
    return retVal;
}

template <typename T>
MatTrait<T> MatTrait<T>::operator/(MatTrait &rhs) const
{
    MatTrait<T> retVal(getValue() / rhs.getValue());
    return retVal;
}

template <typename T>
const T& MatTrait<T>::getValue() const
{
    return val_;
}

template <typename T>
T& MatTrait<T>::getValue()
{
    return val_;
}

template<>
int MatTrait<int>::nullValue()
{
    return 0;
}

template<>
int MatTrait<int>::identityValue()
{
    return 1;
}

template<>
long MatTrait<long>::nullValue()
{
    return 0;
}

template<>
long MatTrait<long>::identityValue()
{
    return 1;
}

template<>
float MatTrait<float>::nullValue()
{
    return 0f;
}

template<>
float MatTrait<float>::identityValue()
{
    return 1f;
}

template<>
double MatTrait<double>::nullValue()
{
    return 0;
}

template<>
double MatTrait<double>::identityValue()
{
    return 1;
}

template<>
std::size_t MatTrait<std::size_t >::nullValue()
{
    return 0;
}

template<>
std::size_t MatTrait<std::size_t>::identityValue()
{
    return 1;
}















#endif //LIBMAT_MATTRAIT_HXX
