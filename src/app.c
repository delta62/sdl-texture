#include <stdlib.h>
#include "app.h"
#include "event.h"
#include "error.h"

void sn_app_init(sn_app *app)
{
    int flags = SDL_INIT_VIDEO;
    if (SDL_Init(flags) != 0)
    {
        sn_sdl_error();
    }

    SDL_Window *window = SDL_CreateWindow(
        "Window Title",
        SDL_WINDOWPOS_CENTERED,
        SDL_WINDOWPOS_CENTERED,
        640,
        480,
        SDL_WINDOW_OPENGL
    );

    if (window == NULL)
    {
        sn_sdl_error();
    }

    SDL_Renderer *renderer = SDL_CreateRenderer(window, -1, 0);
    if (renderer == NULL)
    {
        sn_sdl_error();
    }

    app->window   = window;
    app->renderer = renderer;
    app->status   = SN_RUNNING;
}

sn_status sn_app_status(sn_app *app)
{
    return app->status;
}

void sn_app_tick(sn_app *app)
{
    sn_process_events();
}

int sn_app_exit(sn_app *app)
{
    SDL_DestroyWindow(app->window);
    SDL_Quit();
    return 0;
}
