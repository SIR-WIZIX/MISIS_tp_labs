#pragma once

#include "Building.hpp"
#include "Attacker.hpp"

class Fort : public Building, public Attacker {
public:
    using Building::Building;

    void attack(Unit& unit) override;
};
