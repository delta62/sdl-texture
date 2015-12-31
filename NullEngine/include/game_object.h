#ifndef SN_GAME_OBJECT_H
#define SN_GAME_OBJECT_H

#include <SDL2/SDL.h>

typedef struct {
    int         x;
    int         y;
    SDL_Surface *surface;
} sn_gameobject;

sn_gameobject *sn_gameobject_create();

void sn_gameobject_destroy(sn_gameobject **object);

void sn_gameobject_load(sn_gameobject *object, const char *res);

#endif
