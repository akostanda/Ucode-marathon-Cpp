#pragma once

#include <chrono>
#include <iostream>
#include <list>
#include <unistd.h>
#include <random>

enum class Gender {
    Male,
    Female
};

struct Rabbit {
    Gender gender;
    bool isVampire;
    int age;
    Rabbit(Gender new_gender, bool new_isVampire, int new_age) {
        gender = new_gender;
        isVampire = new_isVampire;
        age = new_age;
    }
};

// struct Randomizer {
//     // std::mt19937 gen{std::chrono::steady_clock::now().time_since_epoch().count()};
//     std::default_random_engine dre;
//     std::uniform_int_distribution<int> uid_v{0, 99};
//     std::uniform_int_distribution<int> uid_g{0, 1};
// };

void vampireRabbits();
int rabbitsAmount(std::list<Rabbit>& rabbits, int gender);
void rabbitsCreation(std::list<Rabbit>& rabbits, int trigger);
