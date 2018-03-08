//
// Created by Hiryuu on 3/7/2018.
//

#ifndef LIBMAT_MATTRAIT_HXX
#define LIBMAT_MATTRAIT_HXX

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
MatTrait<T> MatTrait<T>::operator+(MatTrait &rhs)
{
    MatTrait<T> retVal(getValue() + rhs.getValue());
    return retVal;
}

template <typename T>
MatTrait<T> MatTrait<T>::operator-(MatTrait &rhs)
{
    MatTrait<T> retVal(getValue() - rhs.getValue());
    return retVal;
}

template <typename T>
MatTrait<T> MatTrait<T>::operator*(MatTrait &rhs)
{
    MatTrait<T> retVal(getValue() * rhs.getValue());
    return retVal;
}

template <typename T>
MatTrait<T> MatTrait<T>::operator/(MatTrait &rhs)
{
    MatTrait<T> retVal(getValue() / rhs.getValue());
    return retVal;
}

#endif //LIBMAT_MATTRAIT_HXX
