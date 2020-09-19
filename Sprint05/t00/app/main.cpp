#include "draugr.h"

int main(int argc, char ** argv) {
    std::regex regular("([0-9]+)");
    if (argc != 2) {
        std::cerr << "usage: ./draugr [shoutNumber]" << std::endl;
        return 1;
    }
    else if (std::regex_match(argv[1], regular) == false) {
        std::cerr << "Invalid shoutNumber" << std::endl;
        return 1;
    }
    else {
        Draugr draurg;
        if (std::stoi(argv[1]) >= 0 && std::stoi(argv[1]) <= 8)
            draurg.shoutPhrase(std::stoi(argv[1]));
        else {
            std::cerr << "Invalid shoutNumber" << std::endl;
            return 1;
        }
    }
    return 0;
}
