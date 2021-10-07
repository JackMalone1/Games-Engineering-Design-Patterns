#pragma once

#include "DrawAPI.h"
#include <string>
#include <iostream>


class VulkanDraw : public DrawAPI
{
    std::string m_typeofBrick;
    GraphicProxy m_proxy;
public:
    VulkanDraw(std::string t_brickName) : m_typeofBrick(t_brickName)
    {
        m_proxy.setBrickName(m_typeofBrick);
        m_proxy.setAPIName("Vulkan");
    }


    void Draw()
    {
        m_proxy.Draw();
    }
};