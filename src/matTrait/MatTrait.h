//
// Created by Hiryuu on 3/7/2018.
//

#ifndef LIBMAT_MATTRAIT_H
#define LIBMAT_MATTRAIT_H

template<typename T>
class MatTrait
{
public:
    MatTrait(T& value);
    T nullValue();
    T identityValue();
    MatTrait<T> operator+(MatTrait& rhs) const;
    MatTrait<T> operator-(MatTrait& rhs) const;
    MatTrait<T> operator*(MatTrait& rhs) const;
    MatTrait<T> operator/(MatTrait& rhs) const;
    T& getValue();
    const T& getValue() const;


private:
    T val_;
};

#include "MatTrait.hxx"

#endif //LIBMAT_MATTRAIT_H
