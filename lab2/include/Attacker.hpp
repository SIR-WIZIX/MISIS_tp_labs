#pragma once

class Unit;

class Attacker {
public:
    virtual ~Attacker() = default;
    virtual void attack(Unit& unit) = 0;
};
