#include "Fort.hpp"
#include "Unit.hpp"

void Fort::attack(Unit& unit) {
    unit.receiveDamage(20);
}
