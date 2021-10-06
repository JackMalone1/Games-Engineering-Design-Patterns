#pragma once

#include "Brick.h"
#include "LegoBrick.h"
#include "ClayBrick.h"
#include "WoodBrick.h"

class Factory
{
public:
    virtual Brick* createLegoBrick() = 0;
    virtual Brick* createWoodBrick() = 0;
    virtual Brick* createClayBrick() = 0;
};