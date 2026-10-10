#pragma once

#include "Unit.hpp"
#include "Attacker.hpp"
#include "Moveable.hpp"

class Archer : public Unit, public Attacker, public Moveable {
public:
    using Unit::Unit;

    void attack(Unit& unit) override;
    void moveTo(int x, int y) override;
};
