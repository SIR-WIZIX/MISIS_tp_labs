#include "Unit.hpp"

#include <algorithm>

Unit::Unit(int id, std::string name, int x, int y, float hp)
    : GameObject(id, name, x, y), hp(hp) {}

bool Unit::isAlive() const {
    return hp > 0;
}

float Unit::getHp() const {
    return hp;
}

void Unit::receiveDamage(float damage) {
    hp = std::max(0.0f, hp - damage);
}
