#ifndef _STRUCTS_H_
#define _STRUCTS_H_
#include "fixpoint.h"

struct Vec3 {
  FIXPOINT x,y;
  FIXPOINT direction;
  FIXPOINT force;
  FIXPOINT time;
};

struct Player {
  FIXPOINT X,Y;
  double rotation;
  Vec3 acceleration;
};

constexpr uint16_t saveStartAddress = 600;
constexpr uint16_t GAMENO = 1295;
constexpr uint16_t SAVEVER = 1;
constexpr uint8_t LEVELS = 10; // 10 Levels

struct SaveData
{
	int GameNo = GAMENO; // Random Game No
	int SaveVer = SAVEVER; // Save Version
    bool sound = false;
};

struct GameState {
  // Game
  bool paused;
  Player player1;

  // Menu handling
  bool enter;
  uint8_t mode = 0;
  uint8_t lastmode = -1;
  uint8_t menuItem = 0;

  // Debounce
  int timeout;
};

#endif
