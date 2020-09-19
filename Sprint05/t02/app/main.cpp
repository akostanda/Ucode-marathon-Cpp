#include "draugr.h"

int main(int argc, char ** argv) {
    std::regex regular1("([0-9]+)");
    std::regex regular2("(\\d+)(\\.\\d+)?");
    std::regex regular3("(\\w+),(\\w+)");
    std::cmatch result;
    if (argc != 4 && argc != 5) {
        std::cerr << "usage: ./draugr [shoutNumber] [name1,name2] [health] [frostResist]" << std::endl;
        return 1;
    }
    try {
        if (argc == 4) {
            if (std::regex_match(argv[1], regular1) == false || std::stoi(argv[1]) < 0 || std::stoi(argv[1]) > 8) {
                std::cerr << "Invalid shoutNumber" << std::endl;
                return 1;
            }
            else if (std::regex_match(argv[2], result, regular3) == false) {
                std::cerr << "Invalid names" << std::endl;
                return 1;
            }
            else if (std::regex_match(argv[3], regular2) == false || std::stoi(argv[3]) < 0 || std::stoi(argv[3]) > 100) {
                throw(1);
            }
            else {
                Draugr draurg(std::stod(argv[3]));
                draurg.setName(result.str(1).c_str());
                draurg.shoutPhrase(std::stoi(argv[1]));
                Draugr draurg2(draurg);
                draurg2.setName(result.str(2).c_str());
                draurg2.shoutPhrase(std::stoi(argv[1]));
            }
        }
        else if (argc == 5) {
            if (std::regex_match(argv[1], regular1) == false || std::stoi(argv[1]) < 0 || std::stoi(argv[1]) > 8) {
                std::cerr << "Invalid shoutNumber" << std::endl;
                return 1;
            }
            else if (std::regex_match(argv[2], result, regular3) == false) {
                std::cerr << "Invalid names" << std::endl;
                return 1;
            }
            else if (std::regex_match(argv[3], regular2) == false || std::regex_match(argv[4], regular1) == false
                || std::stod(argv[3]) < 0 || std::stod(argv[3]) > 100
                || std::stoi(argv[4]) < 0 || std::stoi(argv[4]) > 100) {
                throw(1);
            }
            else {
                Draugr draurg(std::stod(argv[3]), std::stoi(argv[4]));
                draurg.setName(result.str(1).c_str());
                draurg.shoutPhrase(std::stoi(argv[1]));
                Draugr draurg2(std::move(draurg));
                draurg2.setName(result.str(2).c_str());
                draurg2.shoutPhrase(std::stoi(argv[1]));
            }
        }
    }
    catch (...) {
        std::cerr << "Error" << std::endl;
        return 1;
    }
    return 0;
}
