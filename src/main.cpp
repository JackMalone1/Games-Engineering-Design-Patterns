#define SDL_MAIN_HANDLED
#include <iostream>
#include "../include/game.h"
#include <SDL2/SDL.h>


int main(int argv, char** args)
{
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