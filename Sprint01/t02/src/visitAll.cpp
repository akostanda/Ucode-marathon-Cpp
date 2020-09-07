#include "visitAll.h"

bool isArgument (Towns& town, std::string arg, int index) {
    std::stringstream ss(arg);
    std::string line;

    getline(ss, town.name, ',');
    if (town.name.empty())
        return false;
    ss >> town.stamina;
    if (ss.peek() != ',')
        return false;
    else
        ss.ignore(1);
    ss >> town.distance;
    if (!ss.eof())
        return false;
    town.index = index;
    return true;
}

void allTowns(std::deque<Towns>& towns, int argc, char** arr) {
    for (int i = 1; i < argc; i++) {
        Towns town;
        if (isArgument(town, arr[i], i - 1))
            towns.push_back(town);
        else {
            std::cerr << "Argument " << arr[i]
                      << " is not valid" << std::endl;
            exit(EXIT_FAILURE);
        }
    }
}

void printTowns(const std::deque<Towns>& towns) {
    for (auto t : towns) {
        std::cout << t.index << ". " << t.name << std::endl;
    }
}

void visitAll(int argc, char** arr) {
    std::deque<Towns> towns;
    int stamina = 0;
    int distance = 0;

    allTowns(towns, argc, arr);
    for (int i = 0; i < argc - 1; i++) {
        for (int j = 0; j < argc; j++) {
            stamina += towns[j].stamina;
            distance += towns[j].distance;
            if (stamina < distance) {
                towns.push_back(towns[0]);
                towns.pop_front();
                break;
            }
            else if (j == argc - 1) {
                printTowns(towns);
                return;
            }
        }
        stamina = 0;
        distance = 0;
    }
    std::cerr << "Mission: Impossible" << std::endl;
}
