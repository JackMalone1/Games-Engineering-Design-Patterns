#pragma once

#include "DrawAPI.h"
#include <string>
#include <iostream>

class BasicDrawImpl : public DrawAPI
{
    std::string m_typeofBrick;
public:
    BasicDrawImpl(std::string t_brickName) : m_typeofBrick(t_brickName)
    {

    }


    void Draw()
    {
        std::cout << "Draw " + m_typeofBrick + " brick with basic draw" << std::endl;
    }
};