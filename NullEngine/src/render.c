#include "render.h"
#include <SDL2/SDL.h>
#include "error.h"
#include "game_object.h"

void sn_clear_screen(sn_app *app)
{
    int result;
    result = SDL_SetRenderDrawColor(app->renderer, 0, 60, 120, 255);
    if (result != 0)
    {
        sn_sdl_error();
    }

    result = SDL_RenderClear(app->renderer);
    if (result != 0)
    {
        sn_sdl_error();
    }

    SDL_RenderPresent(app->renderer);
}

void sn_render_sprite(sn_app *app, sn_gameobject *object)
{
    SDL_Texture *tex = SDL_CreateTextureFromSurface(
            app->renderer, 
            object->surface);

    if (tex == NULL)
    {
        sn_sdl_error();
    }

    int result = SDL_RenderCopy(
            app->renderer,
            tex,
            NULL,
            NULL);
    if (result != 0)
    {
        sn_sdl_error();
    }

    SDL_RenderPresent(app->renderer);
}
