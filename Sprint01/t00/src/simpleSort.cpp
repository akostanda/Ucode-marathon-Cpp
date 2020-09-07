#include "simpleSort.h"

void simpleSort(char** arr) {
    std::array<std::string, 5> newArr;
    int j =1;

    for (int i = 0; i < 5; i++) {
        newArr[i] = arr[j];
        j++;
    }
    std::sort(newArr.begin(), newArr.end());
    for (int i = 0; i < 5; i++) {
        std::cout << newArr[i];
        if (i != 4)
            std::cout << " ";
    }
    std::cout << std::endl;
}