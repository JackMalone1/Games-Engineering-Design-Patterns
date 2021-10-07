#pragma once

#include "Brick.h"


class ClayBrick : public Brick
{
DrawAPI* api;
public:
    ClayBrick(DrawAPI* t_api) : api(t_api)
    {

    }

    void draw()
    {
        api->Draw();
    }
};