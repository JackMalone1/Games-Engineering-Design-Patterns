#pragma once

#include "DrawAPI.h"
#include <string>
#include <iostream>

class BasicDrawImpl : public DrawAPI
{
    std::string m_typeofBrick;
    GraphicProxy m_proxy;
public:
    BasicDrawImpl(std::string t_brickName) : m_typeofBrick(t_brickName)
    {
        m_proxy.setBrickName(m_typeofBrick);
        m_proxy.setAPIName("Basic");
    }


    void Draw()
    {
        m_proxy.Draw();
    }
};