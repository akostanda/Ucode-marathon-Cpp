#include "tesLibrary.h"

void tesLibrary(std::multimap<std::string, std::string> library) {
    auto it = begin(library);
    std::string tempstr = (*it).first;
    int line = 1;
    std::cout << tempstr << ":\n";
    for (auto& l : library) {
        if (l.first == tempstr) {
            std::cout << " " << line << ": " << l.second << "\n";
            line++;
        }
        else {
            line = 1;
            std::cout << l.first << ":\n";
            std::cout << " " << line << ": " << l.second << "\n";
            tempstr = l.first;
            line++;
        }
    }
}
