#ifndef _APP_
#define _APP_

#include <SDL2/SDL.h>

#define VIDEO_WIDTH 640
#define VIDEO_HEIGHT 480
#define VIDEO_DEPTH 32

typedef struct {
    int         running;
    SDL_Window *window;
} t_sdl_game;

int execute(t_sdl_game *game);

void tick(t_sdl_game *game);

void on_event(t_sdl_game *game, SDL_Event *event);

#endif
