#pragma once

#include "Constants.h"

const unsigned char PROGMEM tiles[18][8] =
{
  {0x0d, 0x9f, 0x2d, 0x97, 0x0d, 0x9f, 0x2d, 0x97 },
  {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },
  {0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40 },
  {0x0a, 0x01, 0x01, 0x12, 0x12, 0x01, 0x01, 0x0a },
  {0x40, 0x40, 0x4f, 0x09, 0xed, 0x09, 0x4f, 0x40 },
  {0x05, 0x02, 0x05, 0x02, 0x05, 0x02, 0x05, 0x02 },
  {0xa5, 0x42, 0x99, 0xb5, 0xa5, 0x99, 0x42, 0xa5 },
  {0x5a, 0x87, 0x39, 0xd6, 0xd6, 0x39, 0x87, 0x5a },
  {0x5a, 0x87, 0x39, 0xd6, 0xd6, 0x39, 0x87, 0x5a },
  {0x82, 0x5a, 0x9a, 0x42, 0x98, 0x5a, 0x9a, 0x58 },
  {0x40, 0x50, 0x40, 0x60, 0x40, 0x50, 0x40, 0x60 },
  {0x5a, 0x83, 0x01, 0x88, 0xbc, 0x01, 0x81, 0x5a },
  {0x5a, 0x83, 0x01, 0xa4, 0xb4, 0x29, 0x81, 0x5a },
  {0x5a, 0x83, 0x01, 0xa4, 0xac, 0x3d, 0x81, 0x5a },
  {0x5a, 0x83, 0x01, 0x8c, 0x88, 0x3d, 0x81, 0x5a },
  {0x5a, 0x83, 0x01, 0xac, 0xb4, 0x35, 0x81, 0x5a },
  {0x5a, 0x83, 0x01, 0xbc, 0xa8, 0x39, 0x81, 0x5a },
  {0x5a, 0x83, 0x01, 0x84, 0xb4, 0x0d, 0x81, 0x5a }
};


//-------------------------------------------------------------------------------------
// Introduction ..
//-------------------------------------------------------------------------------------

#define LEVEL_0_WIDTH 16
#define LEVEL_0_HEIGHT 8

const unsigned char PROGMEM level0Map[LEVEL_0_HEIGHT * LEVEL_0_WIDTH] = {
//0      1      2      3      4      5      6      7      8      9,     10     11     12     13     14     15     
  EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, 
  EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, 
  EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, 
  EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, 
  EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, 
  EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, 
  EDGE1, EDGE1, EDGE1, EDGE1, EDGE1, EDGE1, EDGE1, EDGE1, EDGE1, EDGE1, EDGE1, SIGN1, EDGE1, EDGE1, EDGE1, EDGE1, 
  PLAT1, PLAT1, PLAT1, PLAT1, PLAT1, PLAT1, PLAT1, PLAT1, PLAT1, PLAT1, PLAT1, PLAT1, PLAT1, PLAT1, PLAT1, PLAT1, 
};

const uint8_t PROGMEM level0StartingPositions[2] = {
12, 6, 
};

//-------------------------------------------------------------------------------------
// Level 1 ..
//-------------------------------------------------------------------------------------

#define LEVEL_1_WIDTH   34
#define LEVEL_1_HEIGHT  15

const unsigned char PROGMEM level1Map[LEVEL_1_HEIGHT * LEVEL_1_WIDTH] = {
//0      1      2      3      4      5      6      7      8      9,     10     11     12     13     14     15     16     17     18     19,    20     21     22     23     24     25     26     27     28     29,    30     31     32     33  
  ROOF2, ROOF2, ROOF2, ROOF2, ROOF2, ROOF2, ROOF2, ROOF2, ROOF2, ROOF2, ROOF2, ROOF2, ROOF2, ROOF2, ROOF2, ROOF2, METAL, GATE1, GATE1, GATE1, METAL, ROOF2, ROOF2, ROOF2, ROOF2, ROOF2, ROOF2, ROOF2, ROOF2, ROOF2, ROOF2, ROOF2, ROOF2, ROOF2,
  EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, ROOF2,
  EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, GRASS, ROOF2,
  EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EDGE1, METAL, EDGE1, EMPTY, EMPTY, EMPTY, EMPTY, SIGN1, EDGE1, EDGE1, EDGE1, EDGE1, EDGE1, EDGE1, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, GRASS, ROOF2, ROOF2,
  EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, METAL, METAL, METAL, EMPTY, EMPTY, EMPTY, EMPTY, METAL, METAL, METAL, METAL, METAL, METAL, METAL, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, ROOF2, ROOF2, ROOF2,
  EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, ROOF2, ROOF2, ROOF2, EMPTY, EMPTY, EMPTY, GRASS, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, GRASS, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, ROOF2, ROOF2, ROOF2,
  EMPTY, EMPTY, EMPTY, GRASS, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, ROOF2, WATER, WATER, WATER, WATER, WATER, WATER, WATER, ROOF2, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY,
  EMPTY, EMPTY, EMPTY, ROOF2, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, ROOF2, ROOF2, ROOF2, ROOF2, ROOF2, ROOF2, ROOF2, ROOF2, ROOF2, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY,
  EMPTY, EMPTY, EMPTY, ROOF2, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY,
  EMPTY, EMPTY, EMPTY, ROOF2, GRASS, EMPTY, EMPTY, EMPTY, EMPTY, GRASS, GRASS, SIGN1, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, GRASS, GRASS, GRASS, SIGN1,
  EMPTY, EMPTY, EMPTY, ROOF2, ROOF2, GRASS, EMPTY, EMPTY, EMPTY, BRICK, BRICK, BRICK, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, GRASS, EMPTY, EMPTY, EMPTY, EMPTY, GRASS, EMPTY, EMPTY, EMPTY, EMPTY, BRICK, BRICK, BRICK, BRICK,
  EMPTY, EMPTY, EMPTY, ROOF2, ROOF2, ROOF2, EMPTY, EMPTY, EMPTY, ROOF2, ROCK2, ROOF2, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, GRASS, ROOF2, GRASS, EMPTY, EMPTY, EMPTY, ROOF2, GRASS, EMPTY, EMPTY, EMPTY, ROOF2, ROCK6, ROOF2, ROOF2,
  GRASS, GRASS, SIGN1, ROOF2, ROOF2, ROOF2, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, GRASS, GRASS, SIGN1, ROOF2, ROOF2, ROOF2, EMPTY, EMPTY, EMPTY, ROOF2, ROOF2, GRASS, GRASS, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY,
  BRICK, BRICK, BRICK, ROOF2, ROOF2, ROOF2, GRASS, SIGN1, GRASS, GRASS, GRASS, GRASS, GRASS, GRASS, GRASS, GRASS, BRICK, BRICK, BRICK, ROOF2, ROOF2, ROOF2, WATER, WATER, WATER, ROOF2, ROOF2, ROOF2, ROOF2, WATER, WATER, WATER, WATER, WATER,
  ROOF2, ROCK1, ROOF2, ROOF2, ROOF2, ROOF2, ROOF2, PLAT1, PLAT1, PLAT1, PLAT1, PLAT1, PLAT1, PLAT1, PLAT1, PLAT1, ROOF2, ROCK5, ROOF2, ROOF2, ROOF2, ROOF2, PLAT1, PLAT1, PLAT1, PLAT1, PLAT1, PLAT1, PLAT1, PLAT1, PLAT1, PLAT1, PLAT1, PLAT1,
};

const uint8_t PROGMEM level1StartingPositions[10] = {
1, 12,    10, 9,    8, 13,    16, 3,    32, 9,    
};


//-------------------------------------------------------------------------------------
// Level 2 ..
//-------------------------------------------------------------------------------------

#define LEVEL_2_WIDTH   34
#define LEVEL_2_HEIGHT  20

const unsigned char PROGMEM level2Map[LEVEL_2_HEIGHT * LEVEL_2_WIDTH] = {
//0      1      2      3      4      5      6      7      8      9,     10     11     12     13     14     15     16     17     18     19,    20     21     22     23     24     25     26     27     28     29,    30     31     32     33  
  ROOF2, ROOF2, ROOF2, ROOF2, ROOF2, ROOF2, GATE1, GATE1, GATE1, ROOF2, ROOF2, ROOF2, ROOF2, ROOF2, ROOF2, ROOF2, ROOF2, ROOF2, ROOF2, ROOF2, ROOF2, ROOF2, ROOF2, ROOF2, ROOF2, ROOF2, ROOF2, ROOF2, ROOF2, ROOF2, ROOF2, ROOF2, ROOF2, ROOF2,
  ROOF2, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, ROOF2,
  EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY,
  EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY,
  EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EDGE1, EDGE1, EDGE1, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY,
  EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, ROOF2, ROOF2, ROOF2, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY,
  EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, ROOF2, ROOF2, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY,
  EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, ROOF2, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY,
  EMPTY, EMPTY, EMPTY, EDGE1, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EDGE1, EDGE1, SIGN1, ROOF2, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY,
  EMPTY, EMPTY, EMPTY, ROOF2, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, BRICK, BRICK, BRICK, ROOF2, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY,
  EMPTY, EMPTY, EMPTY, ROOF2, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, ROOF2, ROOF2, ROOF2, ROOF2, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY,
  EMPTY, EMPTY, EMPTY, ROOF2, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, ROOF2, ROOF2, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY,
  EMPTY, EMPTY, EMPTY, ROOF2, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, ROOF2, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY,
  EMPTY, EMPTY, EMPTY, ROOF2, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, ROOF2, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY,
  EMPTY, EMPTY, EMPTY, ROOF2, EDGE1, EDGE1, EMPTY, EMPTY, EMPTY, EMPTY, ROOF2, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY,
  EMPTY, EMPTY, EMPTY, ROOF2, ROOF2, ROOF2, EDGE1, EMPTY, EMPTY, EMPTY, ROOF2, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY,
  EMPTY, EMPTY, EMPTY, ROOF2, ROOF2, ROOF2, ROOF2, EMPTY, EMPTY, EMPTY, ROOF2, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY,
  EDGE1, EDGE1, SIGN1, ROOF2, ROOF2, ROOF2, ROOF2, EMPTY, EMPTY, EMPTY, ROOF2, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY,
  BRICK, BRICK, BRICK, ROOF2, ROOF2, ROOF2, ROOF2, WATER, WATER, WATER, ROOF2, WATER, WATER, WATER, ROOF2, EDGE1, EDGE1, EDGE1, EDGE1, EDGE1, EDGE1, EDGE1, EDGE1, EDGE1, EDGE1, EDGE1, EDGE1, EDGE1, EDGE1, EDGE1, EDGE1, EDGE1, EDGE1, EDGE1,
  PLAT1, PLAT1, PLAT1, PLAT1, PLAT1, PLAT1, PLAT1, PLAT1, PLAT1, PLAT1, PLAT1, PLAT1, PLAT1, PLAT1, PLAT1, PLAT1, PLAT1, PLAT1, PLAT1, PLAT1, PLAT1, PLAT1, PLAT1, PLAT1, PLAT1, PLAT1, PLAT1, PLAT1, PLAT1, PLAT1, PLAT1, PLAT1, PLAT1, PLAT1,
};

const uint8_t PROGMEM level2StartingPositions[8] = {
1, 2,    4, 5,    6, 6,    14,8, 
};


const uint8_t *levelMaps[] =                    { level0Map, level1Map, level2Map };
const uint8_t *levelStartingPositions[] =       { level0StartingPositions, level1StartingPositions, level2StartingPositions };
const uint8_t levelStartingPositionsCount[] =   { 1, 5, 4 }; 

const int8_t levelInit[] = { 

// Level width   Level Height,   Level     Level     Player  Player
//                               X Offset  Y Offset  X Pos   Y Pos
  LEVEL_0_WIDTH, LEVEL_0_HEIGHT,       0,        0,     17,     47, 
  LEVEL_1_WIDTH, LEVEL_1_HEIGHT,     -56,      -56,     40,     47,
  LEVEL_2_WIDTH, LEVEL_2_HEIGHT,     -32,      -32,     56,     47 
};
