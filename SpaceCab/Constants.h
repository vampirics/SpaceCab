#pragma once

#define PLAYER_WIDTH 17
#define PLAYER_WIDTH_HALF PLAYER_WIDTH / 2
#define PLAYER_HEIGHT 8
#define PLAYER_HEIGHT_HALF PLAYER_HEIGHT / 2

#define CUSTOMER_WIDTH 7
#define CUSTOMER_HEIGHT 8

#define LEVEL_WIDTH 34
#define LEVEL_HEIGHT 12
#define PLAT1 0
#define EMPTY 1
#define EDGE1 2
#define ROCK1 3
#define SIGN1 4
#define GATE1 5
#define ROCK2 6
#define SHADE 7
#define ROOF2 8
#define BRICK 9
#define TILE_SIZE 8
#define NO_TILE 255


#define ARROW_FLASH 40

enum class GameState : uint8_t {

  VSBoot,
  SplashScreen_Init,
  SplashScreen,
  PlayGame_Init,
  PlayGame,
  GameOver

};