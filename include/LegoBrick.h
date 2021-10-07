#pragma once
#include "Brick.h"

class LegoBrick : public Brick
{
    DrawAPI* api;
public:
    LegoBrick(DrawAPI* t_api) : api(t_api){};

    void draw()
    {
        api->Draw();
    }
} ;