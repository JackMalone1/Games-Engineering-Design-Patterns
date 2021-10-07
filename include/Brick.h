#pragma once
#include <iostream>
#include "DrawAPI.h"
class Brick
{
public:
    Brick(){};
    virtual ~Brick(){};
    virtual void draw() = 0;
};