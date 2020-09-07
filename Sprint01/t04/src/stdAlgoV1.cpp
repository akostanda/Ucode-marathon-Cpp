#include "stdAlgoV1.h"

bool isSubRich(std::forward_list<std::string>& names) {
    for (auto n : names) {
        if (n.find("rich", 0) != std::string::npos)
            return true;
    }
    return false;
}

bool isLenth(std::forward_list<std::string>& names) {
    for (auto n : names) {
        if (n.size() == 15)
            return true;
    }
    return false;
}

int subMelAmount(std::forward_list<std::string>& names, int size) {
    for (auto n : names) {
        if (n.find("mel", 0) != std::string::npos)
            size--;;
    }
    return size;
}

bool isSubVel(std::forward_list<std::string>& names) {
    bool sub = std::all_of(names.begin(), names.end(), [](const std::string& name){
        return std::string(name.end() - 3, name.end()) == "vel";
    });
    return sub;
}

void stdAlgoV1(std::forward_list<std::string>& names) {
    std:: cout << "size: " << list_size(names) << "\n";
        if (isSubRich(names))
            std:: cout << "contains 'rich': true" << "\n";
        else
            std:: cout << "contains 'rich': false" << "\n";
        if (isLenth(names))
            std:: cout << "none of lengths is 15: false" << "\n";
        else
            std:: cout << "none of lengths is 15: true" << "\n";
        if (isSubVel(names))
            std:: cout << "all end with'vel': true" << "\n";
        else
            std:: cout << "all end with'vel': false" << "\n";
        int subam = subMelAmount(names, list_size(names));
        std:: cout << "not contains 'mel': " << subam << "\n";
}