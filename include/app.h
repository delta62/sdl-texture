#ifndef SN_APP_H
#define SN_APP_H

#include <SDL2/SDL.h>

typedef enum {
    SN_HALTED,
    SN_RUNNING
} sn_status;

typedef struct {
    SDL_Window   *window;
    SDL_Renderer *renderer;
    sn_status    status;
} sn_app;

void sn_app_init(sn_app *app);

sn_status sn_app_status(sn_app *app);

void sn_app_tick(sn_app *app);

int sn_app_exit(sn_app *app);

#endif
