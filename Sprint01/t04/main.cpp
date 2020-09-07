#include "stdAlgoV1.h"

int main(int argc, char ** argv) {
    if (argc != 2) {
        std::cerr << "usage: ./stdAlgoV1 [file_name]" << std::endl;
        return 1;
    }
    else {
        std::forward_list<std::string> names;
        std::ifstream input(argv[1]);
        std::string line;
        if (input) {
            while (std::getline(input, line)) {
                names.push_front(line);
            }
        }
        else {
            std::cerr << "error" << std::endl;
            return 1;
        }
        if (list_size(names) == 0) {
            std::cerr << "error" << std::endl;
            return 1;
        }
        else
            stdAlgoV1(names);
    }
    return 0;
}
