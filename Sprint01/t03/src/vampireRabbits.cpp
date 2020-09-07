#include "vampireRabbits.h"

void yearsIncrease(std::list<Rabbit>& rabbits) {
    for (auto& r : rabbits) {
        r.age++;
    }
}

void killRabit(std::list<Rabbit>& rabbits) {
    rabbits.remove_if([](const Rabbit& rabit) {
        if ((rabit.age > 3 && rabit.isVampire == false)
            || (rabit.age > 8 && rabit.isVampire == true))
            return true;
        return false;
    });
}

void makeVampir(std::list<Rabbit>& rabbits) {
    int vam = rabbitsAmount(rabbits, 2);
    for (auto it = rabbits.begin(); it != rabbits.end(); it++) {
        if (!it->isVampire && vam > 0) {
            it->isVampire = true;
            it->gender = Gender::Male;
            vam--;
        }
        else if (vam <= 0)
            break;
    }
}

void vampireRabbits() {
    std::list<Rabbit> rabbits;

    rabbitsCreation(rabbits, 1);
    while (rabbits.size() != 0 && rabbits.size() < 1000) {
        yearsIncrease(rabbits);
        makeVampir(rabbits);
        rabbitsCreation(rabbits, 22);
        killRabit(rabbits);
        std::cout << "Males: " << rabbitsAmount(rabbits, 0) << "\n";
        std::cout << "Females: " << rabbitsAmount(rabbits, 1) << "\n";
        std::cout << "Vampires: " << rabbitsAmount(rabbits, 3) << "\n";
        std::cout << std::endl;
        sleep(1);
    }
}
