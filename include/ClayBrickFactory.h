#pragma once

#include "Factory.h"
#include "ClayBrick.h"
#include "DrawAPI.h"

class ClayBrickFactory : public Factory
{
public:
    std::vector<Brick*> getBricks(int t_numberOfBricks, DrawAPI* t_drawApi)
    {
        std::vector<Brick*> values;

        for(int i = 0; i < t_numberOfBricks; i++)
        {
            values.push_back(new ClayBrick(t_drawApi));
        }

        return values;
    }
};