#include "app.h"

int execute(t_sdl_game *game)
{
    while (1)
    {
        tick(game);
    }

    return 0;
}

void tick(t_sdl_game *game)
{
    SDL_Event event;

    while (SDL_PollEvent(&event))
    {
        on_event(game, &event);
    }
}

void on_event(t_sdl_game *game, SDL_Event *event)
{
}

int main(int argc, char *argv[])
{
    SDL_Init(SDL_INIT_VIDEO);
    
    t_sdl_game game;
    game.running = 1;
    game.window = SDL_CreateWindow(
            "SDL Game",
            SDL_WINDOWPOS_CENTERED,
            SDL_WINDOWPOS_CENTERED,
            VIDEO_WIDTH,
            VIDEO_HEIGHT,
            SDL_WINDOW_BORDERLESS | SDL_WINDOW_OPENGL);

    SDL_Delay(3000);

    SDL_DestroyWindow(game.window);

    SDL_Quit();
    return 0;
    // return execute(&game);
}
