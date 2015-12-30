#include "error.h"
#include <stdlib.h>
#include <stdio.h>

#include <SDL2/SDL.h>

void sn_abort(const char *reason)
{
    fprintf(stderr, "Critical failure: %s\n", reason);
    abort();
}

void sn_sdl_error()
{
    fprintf(stderr, "SDL Error: %s\n", SDL_GetError());
    abort();
}
