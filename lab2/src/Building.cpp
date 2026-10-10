#include "Building.hpp"

Building::Building(int id, std::string name, int x, int y, bool built)
    : GameObject(id, name, x, y), built(built) {}

bool Building::isBuilt() const {
    return built;
}
