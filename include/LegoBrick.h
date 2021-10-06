#pragma once
#include "Brick.h"

class LegoBrick : public Brick
{
public:
    void draw()
    {
        std::cout << "Draw Lego Brick" << std::endl;
    }
} ;