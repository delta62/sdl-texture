#include "app.h"

int main(int argc, char *argv[])
{
    sn_app app;
    sn_app_init(&app);

    while (sn_app_status(&app) == SN_RUNNING)
    {
        sn_app_tick(&app);
    }

    return sn_app_exit(&app);
}
