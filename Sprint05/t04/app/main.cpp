#include <string>
#include <regex>

#include "ImperialSoldier.h"
#include "StormcloakSoldier.h"
#include "Sword.h"
#include "Axe.h"

int main(int argc, char ** argv) {
    std::regex regular("([0-9]+)");
    if (argc != 3) {
        std::cerr << "usage: ./imperialVsStormcloak [dmgOfSword] [dmgOfAxe]" << std::endl;
        return 1;
    }
    else if (std::regex_match(argv[1], regular) == false || std::regex_match(argv[2], regular) == false
            || (std::stoi(argv[1]) < 10 || std::stoi(argv[1]) > 20)
            || (std::stoi(argv[2]) < 10 || std::stoi(argv[2]) > 20)) {
        std::cerr << "Damage has to be in a range of 10-20 points." << std::endl;
        return 1;
    }
    else {
        ImperialSoldier imperialSoldier;
        StormcloakSoldier stormcloakSoldier;
        imperialSoldier.setWeapon(new Sword(std::stoi(argv[1])));
        stormcloakSoldier.setWeapon(new Axe(std::stoi(argv[2])));
        std::cout << "\n";
        std::cout << "***The battle has begun!***" << "\n";
        std::cout << "\n";
        while (imperialSoldier.getHealth() > 0 && stormcloakSoldier.getHealth() > 0) {
            stormcloakSoldier.attack(imperialSoldier);
            if (imperialSoldier.getHealth() <= 0) {
                std::cout << "<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>" << "\n";
                std::cout << "Stormcloak has won!" << "\n";
                break;
            }
            imperialSoldier.attack(stormcloakSoldier);
            if (stormcloakSoldier.getHealth() <= 0) {
                std::cout << "<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>" << "\n";
                std::cout << "Imperial has won!" << "\n";
                break;
            }
            std::cout << "<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>" << "\n";
        }
        std::cout << "\n";
    }
    return 0;
}
