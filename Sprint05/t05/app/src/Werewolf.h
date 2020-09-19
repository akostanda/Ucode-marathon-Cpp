#pragma once

#include <iostream>

class Creature {
public:
    Creature();
    virtual ~Creature();
};

class Wolf : virtual public Creature {
public:
    Wolf() = default;
    ~Wolf() = default;
};

class Human : virtual public Creature {
public:
    Human() = default ;
    ~Human() = default;
};

class Werewolf : virtual public Wolf, virtual public Human {
public:
    Werewolf();
    virtual ~Werewolf();
};
