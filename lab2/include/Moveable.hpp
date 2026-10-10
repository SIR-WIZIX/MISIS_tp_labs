#pragma once

class Moveable {
public:
    virtual ~Moveable() = default;
    virtual void moveTo(int x, int y) = 0;
};
