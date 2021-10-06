#define SDL_MAIN_HANDLED
#include <iostream>
#include "../include/game.h"
#include <SDL2/SDL.h>
#include <vector>

#include "../include/BrickFactory.h"

void createBricks()
{
    Factory* factory = new BrickFactory();
    std::vector<Brick*> bricks;
    bricks.push_back(factory->createClayBrick());
    bricks.push_back(factory->createLegoBrick());
    bricks.push_back(factory->createWoodBrick());

    for(Brick* brick : bricks)
    {
        brick->draw();
    }
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