#include "lockpicking.h"

Container::Container(bool isLocked, const LockpickDifficulty difficulty)
                    : m_isLocked(isLocked), m_difficulty(difficulty) {}

LockpickDifficulty Container::lockDifficulty() const {
    return m_difficulty;
}

bool Container::isLocked() const {
    return m_isLocked;
}

bool Container::tryToOpen(LockpickDifficulty skill) {
    if (!m_isLocked || skill >=  m_difficulty) {
        m_isLocked = false;
        return true
    }
    return false;
}

Barrel::Barrel() : Container(false, LockpickDifficulty::None) {}

std::string Barrel::name() const {
    return "Barrel";
}

Chest::Chest(bool isLocked, const LockpickDifficulty difficulty) : Container(isLocked, difficulty) {}

std::string Chest::name() const {
    return "Chest";
}

Safe::Safe(bool isLocked, const LockpickDifficulty difficulty) : Container(isLocked, difficulty) {}

std::string Safe::name() const {
    return "Safe";
}

Player::Player(const std::string& name) : m_name(name) {}

void Player::openContainer(Container* container) {
    if (container->tryToOpen(m_lockpickSkill))
        std::cout << m_name << " successfully opened " << container->name() << "\n";
    else
        std::cout << m_name << " skill is too low to open " << container->name() << "\n";
}

void Player::setLockpickSkill(LockpickDifficulty skill) {
    m_lockpickSkill = skill;
}
