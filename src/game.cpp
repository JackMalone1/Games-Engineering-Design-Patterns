#include "../include/game.h"

Game::Game()
{
    printf("I love hanime women\n");
    if(SDL_Init(SDL_INIT_VIDEO) < 0)
    {
        std::cout << "SDL could not be initialised. Error: " << SDL_GetError();
    }
    else
    {
        window = SDL_CreateWindow("SDL_Tutorial", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);

        if(window == nullptr)
        {
            std::cout << "Failed to create window. Error: " << SDL_GetError();
        }
        else
        {
            screenSurface = SDL_GetWindowSurface(window);

        }
    }
}

bool Game::isRunning()
{
    return run;
}

void Game::handleEvents()
{
    while(SDL_PollEvent(&e) != 0)
    {
        if(e.type == SDL_QUIT)
        {
            run = false;
        }
    }
}

void Game::update()
{

}

void Game::render()
{
    SDL_FillRect( screenSurface, NULL, SDL_MapRGB( screenSurface->format, 0xFF, 0xFF, 0xFF ) );
            
    //Update the surface
    SDL_UpdateWindowSurface( window );

}

void Game::cleanup()
{
    SDL_DestroyWindow(window);
    SDL_Quit();
}