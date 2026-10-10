#pragma once

#include "Building.hpp"
#include "Moveable.hpp"

class MobileHouse : public Building, public Moveable {
public:
    using Building::Building;

    void moveTo(int x, int y) override;
};
