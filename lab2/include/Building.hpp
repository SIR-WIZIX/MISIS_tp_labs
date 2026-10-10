#pragma once

#include "GameObject.hpp"

class Building : public GameObject {
private:
    bool built;

public:
    Building(int id, std::string name, int x, int y, bool built = true);

    bool isBuilt() const;
};
