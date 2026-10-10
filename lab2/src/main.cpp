#include "Archer.hpp"
#include "Fort.hpp"
#include "MobileHouse.hpp"

#include <iostream>

int main() {
    Archer archer(1, "Archer", 0, 0);
    Unit target(2, "Target", 5, 5);
    Fort fort(3, "Fort", 10, 10);
    MobileHouse house(4, "House", 2, 2);

    Attacker& attacker = archer;
    attacker.attack(target);
    Attacker& fortAttacker = fort;
    fortAttacker.attack(target);

    Moveable& movingArcher = archer;
    movingArcher.moveTo(3, 4);
    Moveable& movingHouse = house;
    movingHouse.moveTo(6, 7);

    std::cout << target.getName() << " HP: " << target.getHp() << '\n';
    std::cout << archer.getName() << ": " << archer.getX()
              << ", " << archer.getY() << '\n';
    std::cout << house.getName() << ": " << house.getX()
              << ", " << house.getY() << '\n';
}
