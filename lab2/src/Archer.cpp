#include "Archer.hpp"

void Archer::attack(Unit& unit) {
    unit.receiveDamage(10);
}

void Archer::moveTo(int x, int y) {
    setPosition(x, y);
}
