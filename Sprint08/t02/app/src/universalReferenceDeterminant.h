#pragma once

#include <iostream>
#include <cxxabi.h>

namespace UniversalReferenceDeterminant {

template <typename T>
void determineReference(T&& obj) {
    std::cout << abi::__cxa_demangle(typeid(obj).name(), 0, 0, 0);
    if (std::is_rvalue_reference<decltype(obj)>::value)
        std::cout << " is r-value reference" << std::endl;
    else
        std::cout << " is l-value reference" << std::endl;
}

}
