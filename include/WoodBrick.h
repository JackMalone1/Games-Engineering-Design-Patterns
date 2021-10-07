#pragma once

#include "Brick.h"

class WoodBrick : public Brick
{
    DrawAPI* api;
public:
    WoodBrick(DrawAPI* t_api) : api(t_api){};

    void draw()
    {
        api->Draw();
    }
};