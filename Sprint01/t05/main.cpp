#include "stdAlgoV2.h"

int main(int argc, char ** argv) {
    if (argc != 2) {
        std::cerr << "usage: ./stdAlgoV2 [file_name]" << std::endl;
        return 1;
    }
    else {
        std::forward_list<std::string> names;
        std::ifstream input(argv[1]);
        std::string line;
        int size = 0;
        if (input) {
            while (std::getline(input, line)) {
                names.push_front(line);
                size++;
            }
        }
        else {
            std::cerr << "error" << std::endl;
            return 1;
        }
        if (size == 0) {
            std::cerr << "error" << std::endl;
            return 1;
        }
        else {
            std::string fileName = argv[1];
            stdAlgoV2(names, fileName);
        }
    }
    return 0;
}
