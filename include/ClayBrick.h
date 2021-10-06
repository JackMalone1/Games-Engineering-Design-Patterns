#pragma once

#include "Brick.h"

class ClayBrick : public Brick
{
public:
    void draw()
    {
        std::cout << "Draw Clay Brick" << std::endl;
    }
};