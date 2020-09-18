#pragma once

#include<iostream>
#include <iterator>

template <typename BidirectionalIterator>
bool isPalindrome(BidirectionalIterator begin, BidirectionalIterator end) {
    BidirectionalIterator new_end = end - 1;
    while (begin != end) {
        if (*begin != *new_end)
            return false;
        begin++;
        if (begin == new_end)
            return true;
        new_end--;
    }
    return true;
}
