#pragma once

#include "../Utils/Arduboy2Ext.h"
#include "../Utils/Constants.h"


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
  EMPTY, EMPTY, EMPTY, GRASS, GRASS, GRASS, GRASS, GRASS, GRASS, GRASS, GRASS, SIGN1, GRASS, EMPTY, EMPTY, EMPTY, 
  WATER, WATER, WATER, PLAT1, PLAT1, PLAT1, PLAT1, PLAT1, PLAT1, PLAT1, PLAT1, PLAT1, PLAT1, WATER, WATER, WATER, 
};

const uint8_t PROGMEM level0StartingPositions[2] = {
12, 6, 
};

const uint8_t PROGMEM level0EndingPositions[2] = {
11, 6, 
};


//-------------------------------------------------------------------------------------
// Level 1 ..
//-------------------------------------------------------------------------------------

#define LEVEL_1_WIDTH   34
#define LEVEL_1_HEIGHT  15

const unsigned char PROGMEM level1Map[LEVEL_1_HEIGHT * LEVEL_1_WIDTH] = {
//0      1      2      3      4      5      6      7      8      9,     10     11     12     13     14     15     16     17     18     19,    20     21     22     23     24     25     26     27     28     29,    30     31     32     33  
  ROCKS, ROCKS, ROCKS, ROCKS, ROCKS, ROCKS, ROCKS, ROCKS, ROCKS, ROCKS, ROCKS, ROCKS, ROCKS, ROCKS, ROCKS, ROCKS, METAL, GATE1, GATE1, GATE1, METAL, ROCKS, ROCKS, ROCKS, ROCKS, ROCKS, ROCKS, ROCKS, ROCKS, ROCKS, ROCKS, ROCKS, ROCKS, ROCKS,
  EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY,
  FUEL1, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, GRASS, ROCKS,
  METAL, METAL, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EDGE1, METAL, EDGE1, EMPTY, EMPTY, EMPTY, EMPTY, SIGN1, EDGE1, EDGE1, EDGE1, EDGE1, EDGE1, EDGE1, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, GRASS, ROCKS, ROCKS,
  SPIKU, SPIKU, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, METAL, METAL, METAL, EMPTY, EMPTY, EMPTY, EMPTY, METAL, METAL, METAL, METAL, METAL, METAL, METAL, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, ROCKS, ROCKS, ROCKS,
  EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, ROCKS, ROCKS, ROCKS, EMPTY, EMPTY, EMPTY, GRASS, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, GRASS, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, METAL, METAL, METAL, METAL, METAL,
  EMPTY, EMPTY, EMPTY, GRASS, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, ROCKS, WATER, WATER, WATER, WATER, WATER, WATER, WATER, ROCKS, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, SPIKU, SPIKU, SPIKU, SPIKU, SPIKU,
  EMPTY, EMPTY, EMPTY, ROCKS, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, ROCKS, ROCKS, ROCKS, ROCKS, ROCKS, ROCKS, ROCKS, ROCKS, ROCKS, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY,
  EMPTY, EMPTY, EMPTY, ROCKS, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY,
  EMPTY, EMPTY, EMPTY, ROCKS, GRASS, EMPTY, EMPTY, EMPTY, EMPTY, GRASS, GRASS, SIGN1, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, GRASS, GRASS, SIGN1,
  EMPTY, EMPTY, EMPTY, ROCKS, ROCKS, GRASS, EMPTY, EMPTY, EMPTY, BRICK, BRICK, BRICK, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, GRASS, EMPTY, EMPTY, EMPTY, EMPTY, GRASS, EMPTY, EMPTY, EMPTY, SPIKD, SPIKD, METAL, METAL, METAL,
  EMPTY, EMPTY, EMPTY, ROCKS, ROCKS, ROCKS, EMPTY, EMPTY, EMPTY, ROCKS, ROCKS, ROCKS, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, GRASS, ROCKS, GRASS, EMPTY, EMPTY, EMPTY, ROCKS, GRASS, EMPTY, EMPTY, METAL, METAL, METAL, METAL, METAL,
  GRASS, GRASS, SIGN1, ROCKS, ROCKS, ROCKS, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, GRASS, GRASS, SIGN1, ROCKS, ROCKS, ROCKS, EMPTY, EMPTY, EMPTY, ROCKS, ROCKS, GRASS, GRASS, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY,
  BRICK, BRICK, BRICK, ROCKS, ROCKS, ROCKS, GRASS, SIGN1, GRASS, GRASS, GRASS, GRASS, GRASS, GRASS, GRASS, GRASS, BRICK, BRICK, BRICK, ROCKS, ROCKS, ROCKS, WATER, WATER, WATER, ROCKS, ROCKS, ROCKS, ROCKS, WATER, WATER, WATER, WATER, WATER,
  ROCKS, ROCKS, ROCKS, ROCKS, ROCKS, ROCKS, ROCKS, PLAT1, PLAT1, PLAT1, PLAT1, PLAT1, PLAT1, PLAT1, PLAT1, PLAT1, ROCKS, ROCKS, ROCKS, ROCKS, ROCKS, ROCKS, PLAT1, PLAT1, PLAT1, PLAT1, PLAT1, PLAT1, PLAT1, PLAT1, PLAT1, PLAT1, PLAT1, PLAT1,
};

const uint8_t PROGMEM level1StartingPositions[12] = {
1, 12,    10, 9,    8, 13,    16, 3,    17, 12,    32, 9,    
};

const uint8_t PROGMEM level1EndingPositions[12] = {
2, 12,    11, 9,    7, 13,    15, 3,    18, 12,    33, 9,    
};


//-------------------------------------------------------------------------------------
// Level 2 ..
//-------------------------------------------------------------------------------------

#define LEVEL_2_WIDTH   34
#define LEVEL_2_HEIGHT  20

const unsigned char PROGMEM level2Map[LEVEL_2_HEIGHT * LEVEL_2_WIDTH] = {
//0      1      2      3      4      5      6      7      8      9,     10     11     12     13     14     15     16     17     18     19,    20     21     22     23     24     25     26     27     28     29,    30     31     32     33  
  ROCKS, ROCKS, ROCKS, ROCKS, ROCKS, ROCKS, GATE1, GATE1, GATE1, ROCKS, ROCKS, ROCKS, ROCKS, ROCKS, ROCKS, ROCKS, ROCKS, ROCKS, ROCKS, ROCKS, ROCKS, ROCKS, ROCKS, ROCKS, ROCKS, ROCKS, ROCKS, ROCKS, ROCKS, ROCKS, ROCKS, ROCKS, ROCKS, ROCKS,
  ROCKS, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, ROCKS,
  EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY,
  EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY,
  EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EDGE1, EDGE1, EDGE1, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY,
  EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, ROCKS, ROCKS, ROCKS, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY,
  EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, ROCKS, ROCKS, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY,
  EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, ROCKS, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY,
  EMPTY, EMPTY, EMPTY, EDGE1, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EDGE1, EDGE1, SIGN1, ROCKS, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY,
  EMPTY, EMPTY, EMPTY, ROCKS, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, BRICK, BRICK, BRICK, ROCKS, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY,
  EMPTY, EMPTY, EMPTY, ROCKS, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, ROCKS, ROCKS, ROCKS, ROCKS, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY,
  EMPTY, EMPTY, EMPTY, ROCKS, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, ROCKS, ROCKS, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY,
  EMPTY, EMPTY, EMPTY, ROCKS, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, ROCKS, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY,
  EMPTY, EMPTY, EMPTY, ROCKS, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, ROCKS, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY,
  EMPTY, EMPTY, EMPTY, ROCKS, EDGE1, EDGE1, EMPTY, EMPTY, EMPTY, EMPTY, ROCKS, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY,
  EMPTY, EMPTY, EMPTY, ROCKS, ROCKS, ROCKS, EDGE1, EMPTY, EMPTY, EMPTY, ROCKS, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY,
  EMPTY, EMPTY, EMPTY, ROCKS, ROCKS, ROCKS, ROCKS, EMPTY, EMPTY, EMPTY, ROCKS, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY,
  EDGE1, EDGE1, SIGN1, ROCKS, ROCKS, ROCKS, ROCKS, EMPTY, EMPTY, EMPTY, ROCKS, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY,
  BRICK, BRICK, BRICK, ROCKS, ROCKS, ROCKS, ROCKS, WATER, WATER, WATER, ROCKS, WATER, WATER, WATER, ROCKS, EDGE1, EDGE1, EDGE1, EDGE1, EDGE1, EDGE1, EDGE1, EDGE1, EDGE1, EDGE1, EDGE1, EDGE1, EDGE1, EDGE1, EDGE1, EDGE1, EDGE1, EDGE1, EDGE1,
  PLAT1, PLAT1, PLAT1, PLAT1, PLAT1, PLAT1, PLAT1, PLAT1, PLAT1, PLAT1, PLAT1, PLAT1, PLAT1, PLAT1, PLAT1, PLAT1, PLAT1, PLAT1, PLAT1, PLAT1, PLAT1, PLAT1, PLAT1, PLAT1, PLAT1, PLAT1, PLAT1, PLAT1, PLAT1, PLAT1, PLAT1, PLAT1, PLAT1, PLAT1,
};

const uint8_t PROGMEM level2StartingPositions[8] = {
1, 2,    4, 5,    6, 6,    14,8, 
};

const uint8_t PROGMEM level2EndingPositions[8] = {
1, 2,    4, 5,    6, 6,    14,8, 
};


//-------------------------------------------------------------------------------------
// Level 3 ..
//-------------------------------------------------------------------------------------

#define LEVEL_3_WIDTH   34
#define LEVEL_3_HEIGHT  20

const unsigned char PROGMEM level3Map[LEVEL_3_HEIGHT * LEVEL_3_WIDTH] = {
//0      1      2      3      4      5      6      7      8      9,     10     11     12     13     14     15     16     17     18     19,    20     21     22     23     24     25     26     27     28     29,    30     31     32     33  
  ROCKS, ROCKS, ROCKS, ROCKS, ROCKS, ROCKS, GATE1, GATE1, GATE1, ROCKS, ROCKS, ROCKS, ROCKS, ROCKS, ROCKS, ROCKS, ROCKS, ROCKS, ROCKS, ROCKS, ROCKS, ROCKS, ROCKS, ROCKS, ROCKS, ROCKS, ROCKS, ROCKS, ROCKS, ROCKS, ROCKS, ROCKS, ROCKS, ROCKS,
  ROCKS, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, ROCKS,
  EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY,
  EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY,
  EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EDGE1, EDGE1, EDGE1, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY,
  EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, ROCKS, ROCKS, ROCKS, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY,
  EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, ROCKS, ROCKS, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY,
  EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, ROCKS, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY,
  EMPTY, EMPTY, EMPTY, EDGE1, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EDGE1, EDGE1, SIGN1, ROCKS, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY,
  EMPTY, EMPTY, EMPTY, ROCKS, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, BRICK, BRICK, BRICK, ROCKS, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY,
  EMPTY, EMPTY, EMPTY, ROCKS, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, ROCKS, ROCKS, ROCKS, ROCKS, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY,
  EMPTY, EMPTY, EMPTY, ROCKS, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, ROCKS, ROCKS, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY,
  EMPTY, EMPTY, EMPTY, ROCKS, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, ROCKS, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY,
  EMPTY, EMPTY, EMPTY, ROCKS, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, ROCKS, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY,
  EMPTY, EMPTY, EMPTY, ROCKS, EDGE1, EDGE1, EMPTY, EMPTY, EMPTY, EMPTY, ROCKS, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY,
  EMPTY, EMPTY, EMPTY, ROCKS, ROCKS, ROCKS, EDGE1, EMPTY, EMPTY, EMPTY, ROCKS, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY,
  EMPTY, EMPTY, EMPTY, ROCKS, ROCKS, ROCKS, ROCKS, EMPTY, EMPTY, EMPTY, ROCKS, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY,
  EDGE1, EDGE1, SIGN1, ROCKS, ROCKS, ROCKS, ROCKS, EMPTY, EMPTY, EMPTY, ROCKS, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY,
  BRICK, BRICK, BRICK, ROCKS, ROCKS, ROCKS, ROCKS, WATER, WATER, WATER, ROCKS, WATER, WATER, WATER, ROCKS, EDGE1, EDGE1, EDGE1, EDGE1, EDGE1, EDGE1, EDGE1, EDGE1, EDGE1, EDGE1, EDGE1, EDGE1, EDGE1, EDGE1, EDGE1, EDGE1, EDGE1, EDGE1, EDGE1,
  PLAT1, PLAT1, PLAT1, PLAT1, PLAT1, PLAT1, PLAT1, PLAT1, PLAT1, PLAT1, PLAT1, PLAT1, PLAT1, PLAT1, PLAT1, PLAT1, PLAT1, PLAT1, PLAT1, PLAT1, PLAT1, PLAT1, PLAT1, PLAT1, PLAT1, PLAT1, PLAT1, PLAT1, PLAT1, PLAT1, PLAT1, PLAT1, PLAT1, PLAT1,
};

const uint8_t PROGMEM level3StartingPositions[8] = {
1, 2,    4, 5,    6, 6,    14,8, 
};

const uint8_t PROGMEM level3EndingPositions[8] = {
1, 2,    4, 5,    6, 6,    14,8, 
};



const uint8_t *levelMaps[] =                    { level0Map, level1Map, level2Map, level3Map };
const uint8_t *levelStartingPositions[] =       { level0StartingPositions, level1StartingPositions, level2StartingPositions, level3StartingPositions };
const uint8_t *levelEndingPositions[] =         { level0EndingPositions, level1EndingPositions, level2EndingPositions, level3EndingPositions };
const uint8_t levelPositionsCount[] =           { 1, 6, 4 }; 

const int8_t levelInit[] = { 

// Level width   Level Height,   Level     Level     Player  Player
//                               X Offset  Y Offset  X Pos   Y Pos
  LEVEL_0_WIDTH, LEVEL_0_HEIGHT,       0,        0,     28,     48, 
  LEVEL_1_WIDTH, LEVEL_1_HEIGHT,     -54,      -56,     56,     48,
  LEVEL_2_WIDTH, LEVEL_2_HEIGHT,     -32,      -32,     56,     48, 
  LEVEL_3_WIDTH, LEVEL_3_HEIGHT,     -32,      -32,     56,     48 
};
