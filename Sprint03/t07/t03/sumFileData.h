#pragma once

#include <fstream>
#include <iterator>

template<class T>
T sumFileData(const std::string& fileName) {
    T count = 0;
    std::ifstream input(fileName);
    std::istream_iterator<T> beginning(input);
    std::istream_iterator<T> last;
    while (beginning != last)
        count += *beginning++;
    return count;
}