#include "game_object.h"
#include "alloc.h"
#include "error.h"

sn_gameobject *sn_gameobject_create()
{
    sn_gameobject *obj = sn_alloc(sizeof(sn_gameobject));

    obj->x       = 0;
    obj->y       = 0;
    obj->surface = NULL;

    return obj;
}

void sn_gameobject_destroy(sn_gameobject **object)
{
    sn_free(*object);
    *object = NULL;
}

void sn_gameobject_load(sn_gameobject *object, const char *res)
{
    object->surface = SDL_LoadBMP(res);
    if (object->surface == NULL)
    {
        sn_sdl_error();
    }
}
