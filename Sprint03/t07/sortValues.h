#pragma once

#include <iterator>
#include <algorithm>
#include <iostream>

template <class RandomAccessIterator>
RandomAccessIterator sortValues(RandomAccessIterator begin, RandomAccessIterator end) {
    RandomAccessIterator i = begin;
    for (; i != end; i++) {
        for (RandomAccessIterator j = begin; j != end - 1; j++) {
            if (*j > *(j + 1)) {
                iter_swap(j, j + 1);
            }
        }
    }
    return begin;
}
