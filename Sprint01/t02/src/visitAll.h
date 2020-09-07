#pragma once

#include <iostream>
#include <deque>
#include <sstream>
#include <string>

struct Towns {
    std::string name;
    int stamina;
    int distance;
    int index;
};

void visitAll(int argc, char** arr);
