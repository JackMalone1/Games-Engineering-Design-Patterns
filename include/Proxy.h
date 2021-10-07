#pragma once
#include <iostream>

class IGraphic
{
public:
    IGraphic() = default;
    virtual void Draw() = 0;
};

class Graphic : public IGraphic
{
    std::string brickName;
    std::string apiName;
public:
    Graphic(std::string t_brickName, std::string t_apiName) : brickName(t_brickName), apiName(t_apiName){};
    ~Graphic(){};

    void Draw()
    {
        std::cout << "Drawing a " + brickName + " brick using the " + apiName + " draw api." << std::endl;
    }
};

class GraphicProxy : public IGraphic
{
    std::string brickName;
    std::string apiName;

    Graphic* graphic;
    Graphic* getInstance(void)
    {
        if(!graphic && brickName != "" && apiName != "")
        {
            graphic = new Graphic(brickName, apiName);
        }
        return graphic;
    }
public:
    GraphicProxy() {graphic = nullptr;};
    ~GraphicProxy() {if(graphic) delete graphic;};
    void Draw()
    {
        getInstance()->Draw();
    };
    void setBrickName(std::string t_brickName){brickName = t_brickName;}
    void setAPIName(std::string t_apiName){apiName = t_apiName;}
};