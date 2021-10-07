#define SDL_MAIN_HANDLED
#include <iostream>
#include "../include/game.h"
#include <SDL2/SDL.h>
#include <vector>

#include "../include/WoodBrickFactory.h"
#include "../include/ClayBrickFactory.h"
#include "../include/LegoBrickFactory.h"

#include "../include/BasicDrawImpl.h"
#include "../include/OpenGLDraw.h"
#include "../include/VulkanDraw.h"

void drawBricks(std::vector<Brick*> t_bricks)
{
    for(Brick* brick : t_bricks)
    {
        brick->draw();
    }
}

void createBricks()
{
    Factory* factory = new WoodBrickFactory();
    std::vector<Brick*> bricks = factory->getBricks(5, new BasicDrawImpl("Wood"));
    drawBricks(bricks);
    factory = new ClayBrickFactory();
    bricks = factory->getBricks(5, new OpenGLDraw("Clay"));
    drawBricks(bricks);
    factory = new LegoBrickFactory();
    bricks = factory->getBricks(5, new VulkanDraw("Lego"));
    drawBricks(bricks);
}

int main(int argv, char** args)
{
    createBricks();

    Game *game = new Game();

    while(game->isRunning())
    {
        game->handleEvents();
        game->update();
        game->render();
    }

    game->cleanup();
    return 0;
}