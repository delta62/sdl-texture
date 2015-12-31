#include "app.h"
#include "render.h"
#include "game_object.h"

int main(int argc, char *argv[])
{
    sn_app app;
    sn_app_init(&app);
    sn_clear_screen(&app);

    sn_gameobject *mario = sn_gameobject_create();
    sn_gameobject_load(mario, "res/mario.bmp");

    sn_render_sprite(&app, mario);

    while (sn_app_status(&app) == SN_RUNNING)
    {
        sn_app_tick(&app);
    }

    return sn_app_exit(&app);
}
