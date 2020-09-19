#include "src/draugr.h"

int main(int argc, char ** argv) {
    std::regex regular1("([0-9]+)");
    std::regex regular2("([0-9]+)(\\.[0-9]+)?");
    if (argc < 2 || argc > 4 ) {
        std::cerr << "usage: ./draugr [shoutNumber] [health] [frostResist]" << std::endl;
        return 1;
    }
    else if (argc == 2)
        if (std::regex_match(argv[1], regular1) == false || std::stoi(argv[1]) < 0 || std::stoi(argv[1]) > 8) {
            std::cerr << "Invalid shoutNumber" << std::endl;
            return 1;
        }
        else {
            Draugr draurg;
            draurg.shoutPhrase(std::stoi(argv[1]));
        }
    else if (argc == 3) {
        if (std::regex_match(argv[1], regular1) == false || std::stoi(argv[1]) < 0 || std::stoi(argv[1]) > 8) {
            std::cerr << "Invalid shoutNumber" << std::endl;
            return 1;
        }
        else if (std::regex_match(argv[2], regular2) == false || std::stoi(argv[2]) < 0 || std::stoi(argv[2]) > 100) {
            std::cerr << "Error" << std::endl;
            return 1;
        }
        else {
            Draugr draurg(std::stod(argv[2]));
            draurg.shoutPhrase(std::stoi(argv[1]));
            if (std::regex_match(argv[2], regular1) == true) {
                Draugr draurg2(std::stoi(argv[2]));
                draurg2.shoutPhrase(std::stoi(argv[1]));
            }
        }
    }
    else if (argc == 4) {
        if (std::regex_match(argv[1], regular1) == false || std::stoi(argv[1]) < 0 || std::stoi(argv[1]) > 8) {
            std::cerr << "Invalid shoutNumber" << std::endl;
            return 1;
        }
        else if (std::regex_match(argv[2], regular2) == false || std::regex_match(argv[3], regular1) == false
            || std::stoi(argv[2]) < 0 || std::stoi(argv[2]) > 100
            || std::stoi(argv[3]) < 0 || std::stoi(argv[3]) > 100) {
            std::cerr << "Error" << std::endl;
            return 1;
        }
        else {
            Draugr draurg(std::stod(argv[2]), std::stoi(argv[3]));
            draurg.shoutPhrase(std::stoi(argv[1]));
        }
    }
    return 0;
}
