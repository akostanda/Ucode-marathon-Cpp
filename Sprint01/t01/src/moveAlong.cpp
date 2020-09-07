#include "moveAlong.h"

bool findSubName(std::string name) {
    std::transform(name.begin(), name.end(), name.begin(), ::tolower);
    if (name.find("merce", 0) != std::string::npos)
        return true;
    if (name.find("emer", 0) != std::string::npos)
        return true;
    if (name.find("jim", 0) != std::string::npos)
        return true;
    return false;
}

void moveAlong(int argc, char** arr) {
    std::vector<std::string> names;

    for (int i = 1; i < argc; i++)
        names.push_back(arr[i]);
    std::vector<std::string>::iterator it = names.begin();
    while (it != names.end()) {
        it = find_if(it, names.end(), findSubName);
        if (it != names.end()) {
            std::cout << *it << ", move along!" << std::endl;
            it++;
        }
    }
}