#pragma once

#include <iostream>
#include <string>

enum class LockpickDifficulty {
    None = 0,
    Novice = 25,
    Apprentice = 40,
    Adept = 60,
    Expert = 80,
    Master = 100
};

class IOpenable {
public:
    virtual ~IOpenable() {}
    virtual bool tryToOpen(LockpickDifficulty skill) = 0;
};

class ILockable {
public:
    virtual ~ILockable() {}
    virtual LockpickDifficulty lockDifficulty() const = 0;
    virtual bool isLocked() const = 0;
};

class Container : public ILockable, public IOpenable {
public:
    virtual ~Container() = default;
    Container(bool isLocked, const LockpickDifficulty difficulty);

    LockpickDifficulty lockDifficulty() const override;
    bool isLocked() const override;
    bool tryToOpen(LockpickDifficulty skill) override;

    virtual std::string name() const = 0;

private:
    bool m_isLocked{false};
    LockpickDifficulty m_difficulty;
};

class Barrel : public Container {
public:
    Barrel();
    virtual ~Barrel() = default;

    std::string name() const;
};

class Chest : public Container {
public:
    Chest(bool isLocked, const LockpickDifficulty difficulty);

    std::string name() const;
};

class Safe : public Container {
public:
    Safe(bool isLocked, const LockpickDifficulty difficulty);

    std::string name() const;
};

class Player final {
public:
    explicit Player(const std::string& name);
    void openContainer(Container* container);
    void setLockpickSkill(LockpickDifficulty skill);

private:
    LockpickDifficulty m_lockpickSkill{LockpickDifficulty::None};
    std::string m_name;
};
