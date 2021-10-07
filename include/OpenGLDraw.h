#pragma once

#include "DrawAPI.h"
#include <string>
#include <iostream>

class OpenGLDraw : public DrawAPI
{
    std::string m_typeofBrick;
public:
    OpenGLDraw(std::string t_brickName) : m_typeofBrick(t_brickName)
    {

    }


    void Draw()
    {
        std::cout << "Draw" + m_typeofBrick + " brick with opengl" << std::endl;
    }
};