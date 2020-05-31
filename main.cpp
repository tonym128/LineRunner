#ifndef ARDUINO
#include "game.h"

int main(int argc, char*argv[])
{
  gameSetup();
  while (1)
    gameLoop();
}
#endif