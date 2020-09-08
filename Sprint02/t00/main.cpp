#include "uniqueWords.h"

int main(int argc, char ** argv) {
    if (argc != 2) {
        std::cerr << "usage: ./uniqueWords [file_name]" << std::endl;
        return 1;
    }
    else {
        std::set<std::string> words;
        std::ifstream input(argv[1]);
        std::string line;
        std::cmatch result;
        std::regex regular("([\\w'-]+)");
        if (input) {
            while (std::getline(input, line)) {
                while (std::regex_search(line.c_str(), result, regular)) {
                    words.insert(result[0]);
                    line = result.suffix();
                }
            }
        }
        else {
            std::cerr << "error" << std::endl;
            return 1;
        }
        if (words.size() == 0) {
            std::cerr << "error" << std::endl;
            return 1;
        }
        else {
            std::string fileName = argv[1];
            uniqueWords(words, fileName);
        }
    }
    return 0;
}
