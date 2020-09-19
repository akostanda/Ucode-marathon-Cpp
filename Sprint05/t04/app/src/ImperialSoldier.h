#pragma once

#include "Soldier.h"
// #include <iostream>

// #include "Weapon.h"
// #include "StormcloakSoldier.h"

// class StormcloakSoldier;

class ImperialSoldier final : public Soldier {
public:
    ImperialSoldier();
    ~ImperialSoldier();
    void consumeDamage(int amount);
};
