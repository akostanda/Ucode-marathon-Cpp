#include "Player.h"
#include "Map.h"
#include "MoveManag.h"

int main(int argc, char ** argv) {
    std::regex regular("([0-9]+)");
    std::regex regular2("([udlre])");
    if (argc != 3 || !std::regex_match(argv[1], regular) || !std::regex_match(argv[2], regular)) {
        std::cerr << "usage: ./smartPointers [width] [height]" << std::endl;
        return 1;
    }
    try {
        size_t width = std::stol(argv[1]);
        size_t height = std::stol(argv[2]);
        if (width < 5 || width > 20 || height < 5 || height > 20)
            throw(1);
        Player* player = new Player;
        std::shared_ptr<Player> p_player(player);
        Map* map = new Map(width, height, p_player);
        std::shared_ptr<Map> p_map(map);
        MoveManager* mover = new MoveManager(p_player, p_map);
        while(true) {
            map->outputMap();
            std::string command;
            std::getline(std::cin, command);
            if (!std::regex_match(command, regular2))
                std::cerr << "Invalid input" << std::endl;
            else {
                mover->processInputAndMove(command);
            }
        }
    }
    catch (...) {
        std::cerr << "Invalid map size" << std::endl;
        return 1;
    }

    return 0;
}
