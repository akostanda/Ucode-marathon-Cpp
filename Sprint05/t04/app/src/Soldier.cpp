#include "Soldier.h"

Soldier::Soldier(std::string&& newName, int newHealth) {
    m_name = newName;
    m_health = newHealth;
    std::cout << "Soldier " << m_name << " was created" << "\n";
}

Soldier::~Soldier() {
    delete m_weapon;
    std::cout << "Soldier " << m_name << " was deleted" << "\n";
}

void Soldier::attack(Soldier& other) {
    int damage = (*m_weapon).getDamage();
    other.m_health -= damage;
    std::cout << m_name << " attacks " << other.m_name << " and deals " << damage << " damage" << "\n";
}

void Soldier::setWeapon(Weapon* weapon) {
    m_weapon = weapon;
}

int Soldier::getHealth() const {
    return m_health;
}
