#include "alloc.h"
#include "error.h"
#include <stdlib.h>
#include <stdio.h>

#include <SDL2/SDL.h>

void sn_abort(const char *reason)
{
    // TODO:
    // 1: should not be allocating memory in an error handler
    // 2: should not be blindly using a 1024 character buffer for the error message
    // 3: should not be repeating this for both error handlers
    char *message = sn_alloc(SN_ERROR_BUFFER_LENGTH * sizeof(char));
    snprintf(message, SN_ERROR_BUFFER_LENGTH, "Critical failure: %s\n", reason);
    sn_show_error(message);
    sn_free(message);
    abort();
}

void sn_sdl_error()
{
    char *message = sn_alloc(SN_ERROR_BUFFER_LENGTH * sizeof(char));
    snprintf(message, SN_ERROR_BUFFER_LENGTH, "SDL Error: %s\n", SDL_GetError());
    sn_show_error(message);
    sn_free(message);
    abort();
}

static void sn_show_error(const char *message)
{
    int result = SDL_ShowSimpleMessageBox(
            SDL_MESSAGEBOX_ERROR,
            "Error",
            message,
            NULL);

    if (result != 0)
    {
        fputs(message, stderr);
    }
}
