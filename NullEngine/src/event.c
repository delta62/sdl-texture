#include "event.h"
#include <stdio.h>
#include <SDL2/SDL.h>

void sn_process_events()
{
    SDL_Event event;

    while (SDL_PollEvent(&event))
    {
        printf("Event get\n");
    }
}
