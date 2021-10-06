#pragma once

#include "Brick.h"

class WoodBrick : public Brick
{
public:
void draw()
{
    std::cout << "Draw Wood Brick" << std::endl;
}
};