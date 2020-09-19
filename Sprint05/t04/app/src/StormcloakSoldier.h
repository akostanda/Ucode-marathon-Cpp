#pragma once

#include "Soldier.h"
// #include <iostream>

// #include "Axe.h"
// #include "ImperialSoldier.h"

// class ImperialSoldier;

class StormcloakSoldier final : public Soldier {
public:
    StormcloakSoldier();
    ~StormcloakSoldier();
    void consumeDamage(int amount);
};
