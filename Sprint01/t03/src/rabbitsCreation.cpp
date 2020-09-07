#include "vampireRabbits.h"

void rabbitsBirth(std::list<Rabbit>& rabbits) {
    std::mt19937 dre(std::chrono::steady_clock::now().time_since_epoch().count());
    std::uniform_int_distribution<int> uid_v(0, 99),uid_g(0, 1);
    int vamp = uid_v(dre);
    rabbits.emplace_back(static_cast<Gender>(vamp == 7 ? 1 : uid_g(dre)), vamp == 7, 0);
}

void firstrabbitsCreation(std::list<Rabbit>& rabbits) {
    for (int i = 0; i < 10; i++)
        rabbitsBirth(rabbits);
}

void nextrabbitsCreation(std::list<Rabbit>& rabbits) {
    int newborn = 0;
    rabbitsAmount(rabbits, 0) <= rabbitsAmount(rabbits, 1)
                                ? newborn = rabbitsAmount(rabbits, 0)
                                : newborn = rabbitsAmount(rabbits, 1);
    for (int i = 0; i < newborn; i++)
        rabbitsBirth(rabbits);
}

void rabbitsCreation(std::list<Rabbit>& rabbits, int trigger) {
    if (trigger == 1)
        firstrabbitsCreation(rabbits);
    else
        nextrabbitsCreation(rabbits);
}
