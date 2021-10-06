#pragma once
#include "Factory.h"

class BrickFactory : public Factory
{
public:
    Brick* createClayBrick()
    {
        return new ClayBrick();
    }

    Brick* createLegoBrick()
    {
        return new LegoBrick();
    }

    Brick* createWoodBrick()
    {
        return new WoodBrick();
    }
};