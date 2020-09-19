#include "dragonborn.h"

int main(int argc, char ** argv) {
    if (argc != 2) {
        std::cerr << "usage: ./dragonborn [action]" << std::endl;
        return 1;
    }
    else {
        Dragonborn db;
        // Dragonborn::Actions action;
        std::map<std::string, Dragonborn::Actions> com {
            {"shout", Dragonborn::Actions::Shout},
            {"magic", Dragonborn::Actions::Magic},
            {"weapon", Dragonborn::Actions::Weapon}
        };
        try {
            // action = com.at(argv[1]);
            db.executeAction(com.at(argv[1]));
        }
        catch (...){
            std::cerr << "Invalid action" << std::endl;
            return 1;
        }
        // db.executeAction(action);
    }
    return 0;
}
