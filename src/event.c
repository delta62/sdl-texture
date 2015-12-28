#include "event.h"
#include <stdio.h>
#include <SDL2/SDL.h>

void sn_process_events()
{
    printf("Processing events\n");

    SDL_Event event;

    while (SDL_PollEvent(&event))
    {
        printf("Event get\n");
    }
}
