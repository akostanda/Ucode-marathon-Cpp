#include "stdAlgoV2.h"

void removeName(std::forward_list<std::string>& names) {
    names.remove_if([](const std::string& name) {
        if (name.find("c", 0) != std::string::npos)
            return true;
        else if (name.find("b", 0) != std::string::npos)
            return true;
        else if (name.find("l", 0) != std::string::npos)
            return true;
        return false;
    });
}

void stdAlgoV2(std::forward_list<std::string>& names, std::string& fileName) {
    removeName(names);
    for (auto& n : names) {
        if (n.size() < 4)
            n = "Short one";
        else if (n.size() > 10)
            n = "Long one";
    }
    names.sort(std::greater<>{});
    names.unique();
    fileName.erase(fileName.find(".txt", 0));
    std::ofstream output (fileName + "_mod.txt");
    for (auto& n : names) {
        output << n << "\n";
    }
}
