#pragma once

#include <string>

class GameObject {
private:
    int id;
    std::string name;
    int x;
    int y;

protected:
    void setPosition(int newX, int newY);

public:
    GameObject(int id, std::string name, int x, int y);

    virtual ~GameObject() = default;

    int getId() const;
    std::string getName() const;
    int getX() const;
    int getY() const;
};
