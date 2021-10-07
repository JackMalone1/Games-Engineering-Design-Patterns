#pragma once

#include "Factory.h"
#include "WoodBrick.h"

class WoodBrickFactory : public Factory
{
public:
    std::vector<Brick*> getBricks(int t_numberOfBricks, DrawAPI* t_drawApi)
    {
        std::vector<Brick*> values;

        for(int i = 0; i < t_numberOfBricks; i++)
        {
            values.push_back(new WoodBrick(t_drawApi));
        }

        return values;
    }
};