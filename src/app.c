#include <stdlib.h>
#include "app.h"
#include "event.h"

void sn_app_init(sn_app *app)
{
    int flags = SDL_INIT_VIDEO;
    if (SDL_Init(flags) != 0)
    {
        fprintf(stderr, "Unable to init SDL: %s\n", SDL_GetError());
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
        fprintf(stderr, "Unable to create a window: %s\n", SDL_GetError());
    }

    app->window = window;
    app->status = SN_RUNNING;
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
