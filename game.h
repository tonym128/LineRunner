#ifdef ARDUINO
#include "cross_arduino.h"
#else
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
typedef unsigned char byte;
#include "cross_sdl.h"
#endif

#include "fixpoint.h"

void gameSetup();
void gameLoop();
