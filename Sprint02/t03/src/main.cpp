#include "tesLibrary.h"

int main(int argc, char ** argv) {
    if (argc != 2) {
        std::cerr << "usage: ./tesLibrary [file_name]" << std::endl;
        return 1;
    }
    else {
        std::multimap<std::string, std::string> library;
        std::ifstream input(argv[1]);
        std::string line;
        std::smatch result;
        std::regex regular("\\s*\"([^\"]+)\"\\s*:\\s*\"([^\"]+)\"\\s*");
        if (input) {
            int count = 1;
            while (std::getline(input, line)) {
                if (line.size() != 0) {
                    if (std::regex_match(line, result, regular)) {
                        library.insert(std::pair<std::string, std::string>(result[1], result[2]));
                    }
                    else {
                        std::cerr << "Line " << count << " is invalid" << std::endl;
                        return 1;
                    }
                    count++;
                }
            }
        }
        else {
            std::cerr << "error" << std::endl;
            return 1;
        }
        if (library.size() == 0) {
            std::cerr << "error" << std::endl;
            return 1;
        }
        else {
            tesLibrary(library);
        }
    }
    return 0;
}
