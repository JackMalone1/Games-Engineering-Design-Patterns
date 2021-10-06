#pragma once

#include <SDL2/SDL.h>
#include <iostream>
class Game
{
public:
    Game();
    bool isRunning();
    void handleEvents();
    void update();
    void render();
    void cleanup();
private:
    const int SCREEN_WIDTH = 640;
    const int SCREEN_HEIGHT = 480;

    SDL_Window* window = nullptr;
    SDL_Surface* screenSurface = nullptr;
    SDL_Event e;

    bool run = true;
};