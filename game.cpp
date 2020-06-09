#include "game.h"

void gameSetup()
{
    cross_setup();
    cross_loop_end();
}

void gameLoop()
{
    if (!cross_loop_start())
        return;

    cross_loop_end();
    cross_clear_screen();
}
