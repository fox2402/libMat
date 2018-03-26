//
// Created by Hiryuu on 3/26/2018.
//

#ifndef LIBMAT_NUMERIC_TRAIT_HXX
#define LIBMAT_NUMERIC_TRAIT_HXX

#include <cstddef>
#include "Numeric_trait.h"

template<>
const int Numeric_trait<int>::identity_val() { return 1; }
template<>
const int Numeric_trait<int>::null_val() { return 0; }

template<>
const float Numeric_trait<float>::identity_val() { return 1f; }
template<>
const float Numeric_trait<float>::null_val() { return 0f; }

template<>
const double Numeric_trait<double>::identity_val() { return 1.; }
template<>
const double Numeric_trait<double>::null_val() { return 0.; }

template<>
const std::size_t Numeric_trait<std::size_t>::identity_val() { return 1; }
template<>
const std::size_t Numeric_trait<std::size_t>::null_val() { return 0; }

#endif //LIBMAT_NUMERIC_TRAIT_HXX
