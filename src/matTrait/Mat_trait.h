//
// Created by Hiryuu on 3/7/2018.
//

#ifndef LIBMAT_MATTRAIT_H
#define LIBMAT_MATTRAIT_H

template<typename T>
class Mat_trait
{
public:
    static T null_value();
    static T identity_value();

    Mat_trait(T& value);
    Mat_trait<T> operator+(Mat_trait& rhs) const;
    Mat_trait<T> operator-(Mat_trait& rhs) const;
    Mat_trait<T> operator*(Mat_trait& rhs) const;
    Mat_trait<T> operator/(Mat_trait& rhs) const;
    T& get_value();
    const T& get_value() const;


private:
    T val_;
};

#include "Mat_trait.hxx"

#endif //LIBMAT_MATTRAIT_H
