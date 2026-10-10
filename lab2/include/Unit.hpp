#pragma once

#include "GameObject.hpp"

class Unit : public GameObject {
private:
    float hp;

public:
    Unit(int id, std::string name, int x, int y, float hp = 100);

    bool isAlive() const;
    float getHp() const;
    void receiveDamage(float damage);
};
