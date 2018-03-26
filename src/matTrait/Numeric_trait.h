//
// Created by Hiryuu on 3/26/2018.
//

#ifndef LIBMAT_NUMERIC_TRAIT_H
#define LIBMAT_NUMERIC_TRAIT_H

template<typename T>
class Numeric_trait
{
public:
    typedef T type;
    typedef T* pointer;
    typedef T& ref;
    typedef const T const_type;
    typedef const T& const_ref;

    static const T null_val();
    static const T identity_val();

};


#endif //LIBMAT_NUMERIC_TRAIT_H
