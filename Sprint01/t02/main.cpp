#include "visitAll.h"

int main(int argc, char** argv) {
    if (argc < 2) {
        std::cerr << "usage: ./visitAll [[name,stamina,distance] ...]" << std::endl;
        return 1;
    }
    else
        visitAll(argc, argv);
    return 0;
}