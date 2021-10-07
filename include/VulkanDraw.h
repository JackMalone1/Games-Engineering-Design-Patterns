#pragma once

#include "DrawAPI.h"
#include <string>
#include <iostream>

class VulkanDraw : public DrawAPI
{
    std::string m_typeofBrick;
public:
    VulkanDraw(std::string t_brickName) : m_typeofBrick(t_brickName)
    {

    }


    void Draw()
    {
        std::cout << "Draw" + m_typeofBrick + " brick with vulkan" << std::endl;
    }
};