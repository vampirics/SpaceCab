#pragma once

#define _DEBUG


// --------------------------------------------------------------------------

constexpr uint8_t PLAYER_WIDTH = 17;
constexpr uint8_t PLAYER_WIDTH_HALF = PLAYER_WIDTH / 2;
constexpr uint8_t PLAYER_HEIGHT = 8;
constexpr uint8_t PLAYER_HEIGHT_HALF = PLAYER_HEIGHT / 2;

constexpr uint8_t CUSTOMER_WIDTH = 7;
constexpr uint8_t CUSTOMER_WIDTH_HALF = CUSTOMER_WIDTH / 2;
constexpr uint8_t CUSTOMER_HEIGHT = 8;

constexpr uint8_t EMPTY = 0;
constexpr uint8_t PLAT1 = 1;
constexpr uint8_t EDGE1 = 2;
constexpr uint8_t WATER = 3;
constexpr uint8_t SIGN1 = 4;
constexpr uint8_t GATE1 = 5;
constexpr uint8_t METAL = 6;
constexpr uint8_t SHADE = 7;
constexpr uint8_t ROCKS = 8;
constexpr uint8_t BRICK = 9;
constexpr uint8_t GRASS = 10;
constexpr uint8_t FUEL1 = 11;
constexpr uint8_t SAND1 = 12;
constexpr uint8_t SPIKU = 13;
constexpr uint8_t SPIKD = 14;

constexpr uint8_t TILE_COUNT = 15;
constexpr uint8_t TILE_SIZE = 8;
constexpr uint8_t NO_TILE = 255;

constexpr uint8_t DOLLARS_COUNT_MULT = 8;
constexpr uint8_t DOLLARS_COUNT_MAX = (DOLLARS_COUNT_MULT * 5) - 1;

constexpr uint8_t MAX_NUMBER_OF_SCORES         = 5;
constexpr uint8_t DO_NOT_EDIT_SLOT             = 255;
constexpr uint8_t GAME_TIME_MAX                = 10;
constexpr uint8_t FLASH_MAX                    = 40;
constexpr uint8_t ARROW_DO_NOT_SHOW            = 255;
constexpr uint8_t RANDOM_START_POSITION        = 255;
constexpr uint8_t RANDOM_END_POSITION          = 255;
constexpr uint8_t GO_TO_GATE                   = 254;

constexpr uint16_t PLAYER_FUEL_MAX             = 200;
constexpr uint16_t PLAYER_FUEL_MIN_BLINK       = 20; 
constexpr uint8_t PLAYER_NUMBER_OF_LIVES_MAX   = 3;
constexpr uint8_t PLAYER_RETRACT_LANDING_GEAR  = 20;

constexpr uint16_t FARE_X_FRAMES               = 15;
constexpr uint16_t FARE_COUNT                  = 10;
constexpr uint16_t FARE_MIN                    = 10;
constexpr uint16_t FARE_MAX                    = 30;

constexpr uint8_t CUSTOMER_NO_STARTING_POS     = 255;
constexpr uint8_t CUSTOMER_PICKUP_RANGE        = 8;

constexpr uint8_t GOTO_COUNTER_MAX             = 120;
constexpr uint8_t OUCH_COUNTER_MAX             = 120;

constexpr uint8_t FUEL_TILES_MAX               = 5;
constexpr uint8_t GATE_TILES_MAX               = 5;
constexpr uint8_t FUEL_MIN                     = 40;
constexpr uint8_t FUEL_MAX                     = 80;
constexpr uint8_t INIT_RECORD_SIZE             = 9;

enum class GameState : uint8_t {

  VSBoot,
  SplashScreen_Init,
  SplashScreen,
  PlayGame_InitGame,
  PlayGame_LevelIntroduction_Init,
  PlayGame_LevelIntroduction,
  PlayGame_InitLevel,
  PlayGame_FlashingCar,
  PlayGame,
  GameOver,
  SaveScore,
  HighScore

};

struct LevelDefinition {
  uint8_t levelWidth;
  uint8_t levelHeight;
  int16_t levelXOffset;
  int16_t levelYOffset;
  uint8_t playerXOffset;
  uint8_t playerYOffset;
  uint8_t faresRequired;
  uint8_t levelNameOffset;
  uint8_t numberOfPositions;
};

enum class PlayerStatus : uint8_t {

  Active,
  Inactive,
  OutOfFuel_End,
  OutOfFuel_Min,
  OutOfFuel_Blank_01,
  OutOfFuel_Blank_02,
  OutOfFuel_Blank_03,
  OutOfFuel_Blank_04,
  OutOfFuel_Blank_05,
  OutOfFuel_Blank_06,
  OutOfFuel_Blank_07,
  OutOfFuel_Blank_08,
  OutOfFuel_Blank_09,
  OutOfFuel_Blank_10,
  OutOfFuel_Blank_11,
  OutOfFuel_Blank_12,
  OutOfFuel_Blank_13,
  OutOfFuel_Blank_14,
  OutOfFuel_Blank_15,
  OutOfFuel_Blank_16,
  OutOfFuel_Blank_17,
  OutOfFuel_Blank_18,
  OutOfFuel_Blank_19,
  OutOfFuel_Blank_20,
  OutOfFuel_Img1_Start,
  OutOfFuel_Img1_1,
  OutOfFuel_Img1_2,
  OutOfFuel_Img1_3,
  OutOfFuel_Img1_4,
  OutOfFuel_Img1_5,
  OutOfFuel_Img1_End,
  OutOfFuel_Img2_Start,
  OutOfFuel_Img2_1,
  OutOfFuel_Img2_2,
  OutOfFuel_Img2_3,
  OutOfFuel_Img2_4,
  OutOfFuel_Img2_5,
  OutOfFuel_Img2_End,
  OutOfFuel_Img3_Start,
  OutOfFuel_Img3_1,
  OutOfFuel_Img3_2,
  OutOfFuel_Img3_3,
  OutOfFuel_Img3_4,
  OutOfFuel_Img3_5,
  OutOfFuel_Img3_End,
  OutOfFuel_Img4_Start,
  OutOfFuel_Img4_1,
  OutOfFuel_Img4_2,
  OutOfFuel_Img4_3,
  OutOfFuel_Img4_4,
  OutOfFuel_Img4_5,
  OutOfFuel_Img4_End,
  OutOfFuel_Max = OutOfFuel_Img4_End

};

enum class Direction : uint8_t {

  Up,
  UpRight,
  Right,
  DownRight,
  Down,
  DownLeft,
  Left,
  UpLeft

};

enum class CustomerStatus : uint8_t {

  Dead,
  Alive,
  BoardingCab

};


inline PlayerStatus operator++( PlayerStatus & c ) {

  c = static_cast<PlayerStatus>( static_cast<uint16_t>(c) + 1 );
  return c;

}

inline PlayerStatus operator++( PlayerStatus & c, int ) {

  PlayerStatus result = c;
  ++c;
  return result;

}

inline PlayerStatus operator--( PlayerStatus & c ) {
 
  c = static_cast<PlayerStatus>( static_cast<uint16_t>(c) - 1 );
  return c;

}

inline PlayerStatus operator--( PlayerStatus & c, int ) {

  PlayerStatus result = c;
  --c;
  return result;

}

