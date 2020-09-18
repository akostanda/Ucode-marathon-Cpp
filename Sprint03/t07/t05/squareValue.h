#pragma once

#include<iostream>
#include <iterator>

template <typename Container>
void squareValue(Container& container) {
    for (auto& it : container)
        it *= it;
    // auto it = container;
    // typename Container <typename Container::value_type>::iterator empt;
    // while (it != empt) {
    //     *it *= *it;
    //     it++;
    // } что нужно сделать чтобы работало??
}
