#include "vampireRabbits.h"

int rabbitsAmount(std::list<Rabbit>& rabbits, int trigger) {
    if (trigger == 0) {
        return count_if(begin(rabbits), end(rabbits), [](const Rabbit& rabit) {
            return rabit.gender == Gender::Male && !rabit.isVampire;});
    }
    else if (trigger == 1) {
        return count_if(begin(rabbits), end(rabbits), [](const Rabbit& rabit) {
            return rabit.gender == Gender::Female && !rabit.isVampire;});
    }
    else if (trigger == 2) {
        return count_if(begin(rabbits), end(rabbits), [](const Rabbit& rabit) {
            return rabit.gender == Gender::Female && rabit.isVampire;});
    }
    else {
        return count_if(begin(rabbits), end(rabbits), [](const Rabbit& rabit) {
            return rabit.isVampire;});
    }
}
