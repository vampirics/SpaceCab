#pragma once

#include "../Utils/Arduboy2Ext.h"
#include "../Utils/Constants.h"
#include "../Fonts/Font4x6.h"


//-------------------------------------------------------------------------------------
// Introduction ..
//-------------------------------------------------------------------------------------

#define LEVEL_0_WIDTH 16
#define LEVEL_0_HEIGHT 8

const uint8_t PROGMEM level0Map[] = {
0x66, 0x54, 0x66, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 
0x08, 0xA8, 0x41, 0xA1, 0x03, 0x33, 0x8A, 0x33, 
0x00
};

const uint8_t PROGMEM level0StartingPositions[4] = {
0, 0, 12, 6, 
};

const uint8_t PROGMEM level0EndingPositions[4] = {
0, 0, 11, 6, 
};


//-------------------------------------------------------------------------------------
// Level 1 - Underground
//-------------------------------------------------------------------------------------

char const level1Name[] PROGMEM = "Underground";

#define LEVEL_1_WIDTH   34
#define LEVEL_1_HEIGHT  15

const uint8_t PROGMEM level1Map[] = {
0x6F, 0x53, 0x6F, 0x61, 0x0F, 0x0F, 0x0F, 0x0F, 0x08, 0xA4, 0x41, 0xAA, 0x03, 0xA7, 0x41, 0xA2, 0x03, 
0xA3, 0x1F, 0x03, 0x1A, 0x33, 0x13, 0x8F, 0x03, 0x8F, 0x82, 0x08, 0x85, 0x05, 0x86, 0x08, 0x82, 0x09, 
0x84, 0x0F, 0x04, 0x82, 0x09, 0x84, 0x0D, 0xA2, 0x04, 0x82, 0xA1, 0x41, 0xA3, 0x05, 0x82, 0x0E, 0x82, 
0x04, 0x87, 0xA1, 0x0B, 0xA1, 0x03, 0xA2, 0x41, 0xA2, 0x82, 0x04, 0x88, 0x0B, 0x81, 0x03, 0x87, 0x04, 
0x88, 0x0B, 0x81, 0x01, 0xB1, 0x01, 0x87, 0x04, 0x88, 0xA5, 0x41, 0xA5, 0x81, 0x63, 0x87, 0xA1, 0x41, 
0xA2, 0x8F, 0x85, 0x63, 0x8C, 0x00};

const uint8_t PROGMEM level1StartingPositions[12] = {
3, 3,    1, 9,   11, 13,    24, 3,    23, 10,    29, 13,
};

const uint8_t PROGMEM level1EndingPositions[12] = {
4, 3,    2, 9,   12, 13,    25, 3,    24, 10,    30, 13,
};


//-------------------------------------------------------------------------------------
// Level 2 - Golden Arches
//-------------------------------------------------------------------------------------

char const level2Name[] PROGMEM = "Golden Arches";

#define LEVEL_2_WIDTH   34
#define LEVEL_2_HEIGHT  15

const uint8_t PROGMEM level2Map[] = {
0x6F, 0x54, 0x69, 0x01, 0xC1, 0x01, 0xC1, 0x01, 0x61, 0x0F, 0x0D, 0xC1, 0x01, 0xC1, 0x01, 0xC1, 0x0F, 
0x0E, 0xC1, 0x01, 0xC1, 0x01, 0xC1, 0x0C, 0xB1, 0x0F, 0xC1, 0x05, 0xC1, 0x02, 0xC1, 0x01, 0xC1, 0x05, 
0x63, 0x0D, 0x21, 0xC1, 0x25, 0xC1, 0x01, 0xC1, 0x01, 0xC1, 0x01, 0xC1, 0x0F, 0x05, 0x68, 0x01, 0xC1, 
0x01, 0xC1, 0x01, 0xC1, 0x0F, 0x0D, 0xC1, 0x05, 0xC1, 0x0F, 0x0C, 0xC1, 0x25, 0xC1, 0x21, 0x07, 0x21, 
0x41, 0x22, 0x07, 0x21, 0x41, 0x26, 0x68, 0x07, 0x64, 0x07, 0x68, 0x0F, 0x0F, 0x03, 0x61, 0x0F, 0x0F, 
0x03, 0x61, 0x21, 0x41, 0x26, 0x0F, 0x0A, 0x69, 0xAF, 0xA3, 0x25, 0x41, 0x21, 0x69, 0x1F, 0x13, 0x68, 
0x00};

const uint8_t PROGMEM level2StartingPositions[8] = {
0, 12,    15, 8,   26, 8,    30,13,
};

const uint8_t PROGMEM level2EndingPositions[8] = {
1, 12,    16, 8,   27, 8,    31,13,
};


//-------------------------------------------------------------------------------------
// Level 3 Shipwreck Rarr
//-------------------------------------------------------------------------------------

char const level3Name[] PROGMEM = "Shipwreck Rarr";

#define LEVEL_3_WIDTH   34
#define LEVEL_3_HEIGHT  15

const uint8_t PROGMEM level3Map[] = {
0x8F, 0x8F, 0x53, 0x81, 0x0F, 0x0F, 0x0F, 0x0F, 0x09, 0x24, 0x0F, 0x0F, 0x64, 0x09, 0x81, 0x0F, 0x0F, 
0x03, 0x81, 0x21, 0x41, 0x22, 0x0F, 0x0E, 0x85, 0x05, 0x22, 0xB1, 0x21, 0x0F, 0x23, 0x41, 0x21, 0x81, 
0xD4, 0x05, 0x64, 0x0F, 0x86, 0x0F, 0x0D, 0xD5, 0x81, 0x0F, 0x0F, 0x03, 0x81, 0x0F, 0x04, 0x81, 0x23, 
0x41, 0x29, 0x81, 0x21, 0x41, 0x2A, 0x81, 0x06, 0x31, 0x81, 0x9C, 0x81, 0x9B, 0x81, 0x37, 0x02, 0x8F, 
0x89, 0x08, 0xE3, 0x8F, 0x87, 0xE9, 0x00};

const uint8_t PROGMEM level3StartingPositions[8] = {
3, 11,    11, 7,    15, 5,    15, 11, 
};

const uint8_t PROGMEM level3EndingPositions[8] = {
4, 11,    12, 7,    16, 5,    16, 11, 
};


//-------------------------------------------------------------------------------------
// Level 4 - At The Beach
//-------------------------------------------------------------------------------------

char const level4Name[] PROGMEM = "At The Beach";

#define LEVEL_4_WIDTH   34
#define LEVEL_4_HEIGHT  15

const uint8_t PROGMEM level4Map[] = {
0x6F, 0x54, 0x6F, 0x0F, 0x0F, 0x05, 0x21, 0x41, 0x23, 0x0F, 0x0E, 0xC5, 0x0F, 0x25, 0x41, 0x21, 0x08, 
0xC3, 0x0F, 0x01, 0x82, 0x65, 0x0F, 0x0C, 0xD2, 0x81, 0x64, 0x09, 0x21, 0x0F, 0x04, 0xD1, 0x81, 0x63, 
0x09, 0x81, 0x21, 0x0F, 0x04, 0x82, 0x62, 0x0A, 0x81, 0x21, 0x0F, 0x03, 0x81, 0xD1, 0x82, 0x0B, 0x81, 
0x23, 0x41, 0x25, 0x09, 0x81, 0x01, 0xD2, 0x0C, 0x89, 0x09, 0x81, 0x0F, 0x81, 0x06, 0x81, 0x01, 0x82, 
0x07, 0x81, 0x0D, 0x22, 0x81, 0x26, 0x81, 0x23, 0x81, 0x24, 0xB1, 0x21, 0x81, 0x21, 0x41, 0x23, 0x04, 
0x34, 0xCF, 0xCB, 0x34, 0xE4, 0xCF, 0xCB, 0xE4, 0x00};

const uint8_t PROGMEM level4StartingPositions[8] = {
1, 2,    8, 9,    25, 3,    25,12, 
};

const uint8_t PROGMEM level4EndingPositions[8] = {
2, 2,    9, 9,    26, 3,    26,12, 
};


//-------------------------------------------------------------------------------------
// Level 5 - Got Spikes?
//-------------------------------------------------------------------------------------

char const level5Name[] PROGMEM = "Got Spikes?";

#define LEVEL_5_WIDTH   34
#define LEVEL_5_HEIGHT  15

const uint8_t PROGMEM level5Map[] = {
0x6F, 0x54, 0x6F, 0x61, 0x08, 0x62, 0xD3, 0x61, 0x04, 0x61, 0xDA, 0x65, 0x09, 0x61, 0x03, 0xD1, 0x04, 
0xD1, 0x0A, 0xD1, 0x64, 0x41, 0x24, 0x04, 0x61, 0x0F, 0x05, 0x69, 0x04, 0x62, 0x0F, 0x04, 0x64, 0x09, 
0x63, 0x09, 0x63, 0x06, 0x64, 0x09, 0x64, 0x37, 0x66, 0x05, 0x63, 0x08, 0x6F, 0x64, 0x04, 0x63, 0x03, 
0x67, 0xD9, 0x68, 0x04, 0x63, 0x0F, 0x05, 0x66, 0x05, 0x63, 0x0F, 0x0F, 0x64, 0x0E, 0xB1, 0x0E, 0x65, 
0xE9, 0x6A, 0x09, 0x6F, 0x6B, 0xE7, 0x6F, 0x6F, 0x6A, 0x00};

const uint8_t PROGMEM level5StartingPositions[2] = {
2, 3,
};

const uint8_t PROGMEM level5EndingPositions[2] = {
1, 3,
};


//-------------------------------------------------------------------------------------
// Level 6 - Floating Islands
//-------------------------------------------------------------------------------------

char const level6Name[] PROGMEM = "Floating Islands";

#define LEVEL_6_WIDTH   34
#define LEVEL_6_HEIGHT  15

const uint8_t PROGMEM level6Map[] = {
0x61, 0x54, 0x6F, 0x6F, 0x04, 0x61, 0x0F, 0x0D, 0xD1, 0x04, 0xD1, 0x0F, 0x0F, 0x0F, 0x07, 0xA4, 0x41, 
0xA3, 0x0E, 0xC1, 0x25, 0x41, 0xC1, 0x04, 0x18, 0x0D, 0xCA, 0x04, 0x86, 0x0F, 0x0E, 0x84, 0x04, 0xA1, 
0x41, 0xA3, 0x0F, 0x0E, 0x15, 0x06, 0xA5, 0x41, 0xA4, 0x0D, 0x84, 0x07, 0x8A, 0x0D, 0x83, 0x09, 0x88, 
0x06, 0xA1, 0xB1, 0xA2, 0x04, 0x81, 0x01, 0x81, 0x0A, 0x81, 0x04, 0x81, 0x07, 0x14, 0x04, 0x81, 0x31, 
0x81, 0x3A, 0x81, 0x34, 0x81, 0x37, 0x84, 0x34, 0x81, 0x01, 0x81, 0x0A, 0x81, 0x04, 0x81, 0x07, 0x81, 
0x02, 0x81, 0x04, 0x81, 0xE1, 0x81, 0xEA, 0x81, 0xE4, 0x81, 0xE7, 0x81, 0xE2, 0x81, 0xE4, 0x00};

const uint8_t PROGMEM level6StartingPositions[8] = {
0, 8,    17, 4,    15, 8,    29,3,
};

const uint8_t PROGMEM level6EndingPositions[8] = {
1, 8,    18, 4,    16, 8,    28,3,
};


//-------------------------------------------------------------------------------------
// Level 7 - The Forest
//-------------------------------------------------------------------------------------

char const level7Name[] PROGMEM = "The Forest";

#define LEVEL_7_WIDTH   34
#define LEVEL_7_HEIGHT  15

const uint8_t PROGMEM level7Map[] = {
0x69, 0x54, 0x6F, 0x66, 0x0F, 0x0F, 0x01, 0xA1, 0x0F, 0x0F, 0x02, 0xA1, 0x81, 0x07, 0xA1, 0x09, 0xA1, 
0x0E, 0x11, 0x81, 0xA2, 0x05, 0x11, 0x09, 0x81, 0xA1, 0x0E, 0x81, 0x12, 0x05, 0x81, 0xA2, 0x07, 0x81, 
0x11, 0x09, 0xA4, 0x41, 0x81, 0x05, 0xA2, 0x81, 0x12, 0x05, 0xA2, 0x81, 0xA3, 0x07, 0x15, 0x81, 0x05, 
0x12, 0x81, 0x07, 0x12, 0x81, 0x13, 0x0C, 0x81, 0x07, 0x81, 0x09, 0x81, 0x0F, 0x81, 0xA2, 0x05, 0x81, 
0x41, 0xA3, 0x02, 0xA3, 0x81, 0x0C, 0xA1, 0xB1, 0xA1, 0x81, 0x12, 0x01, 0xA3, 0x41, 0x81, 0x14, 0x02, 
0x13, 0x81, 0x41, 0xA4, 0x07, 0x13, 0x81, 0x03, 0x14, 0x81, 0x09, 0x81, 0x15, 0x0A, 0x81, 0x07, 0x81, 
0x09, 0x81, 0x0F, 0x81, 0x02, 0xA5, 0x81, 0xA9, 0x81, 0xAF, 0x81, 0xA2, 0x6F, 0x6F, 0x64, 0x00};

const uint8_t PROGMEM level7StartingPositions[8] = {
3, 10,    7, 9,    17, 10,    29, 5,
};

const uint8_t PROGMEM level7EndingPositions[8] = {
4, 10,    6, 9,    16, 10,    30, 5,
};

//-------------------------------------------------------------------------------------
// Level 8 - Friendly Invader
//-------------------------------------------------------------------------------------

char const level8Name[] PROGMEM = "Friendly Invader";

#define LEVEL_8_WIDTH   34
#define LEVEL_8_HEIGHT  15

const uint8_t PROGMEM level8Map[] = {
0x6F, 0x53, 0x6F, 0x62, 0x0F, 0x07, 0x6C, 0x0F, 0x08, 0x6B, 0x41, 0x25, 0x05, 0xC1, 0x05, 0xC1, 0x0B, 
0x6B, 0x06, 0xC1, 0x03, 0xC1, 0x0E, 0x63, 0xD6, 0x05, 0xC7, 0x0E, 0x62, 0x0A, 0xC2, 0x01, 0xC3, 0x01, 
0xC2, 0x0D, 0x62, 0x09, 0xCB, 0x04, 0x41, 0x24, 0x03, 0x62, 0x21, 0xB1, 0x21, 0x06, 0xC1, 0x01, 0xC7, 
0x01, 0xC1, 0x04, 0x65, 0x03, 0x65, 0x03, 0x61, 0x02, 0xC1, 0x01, 0xC1, 0x05, 0xC1, 0x01, 0xC1, 0x04, 
0x61, 0xD4, 0x03, 0x62, 0xD3, 0x03, 0x61, 0x05, 0xC2, 0x01, 0xC2, 0x07, 0x61, 0x07, 0x62, 0x06, 0x61, 
0x0F, 0x01, 0x62, 0x07, 0x62, 0x06, 0x62, 0x0D, 0x64, 0x07, 0x62, 0x21, 0x41, 0x24, 0x63, 0x2B, 0x65, 
0x21, 0x41, 0x25, 0x6F, 0x6F, 0x65, 0x00};

const uint8_t PROGMEM level8StartingPositions[8] = {
2, 3,    1, 13,    26, 7,    28, 13,
};

const uint8_t PROGMEM level8EndingPositions[8] = {
1, 3,    2, 13,    25, 7,    27, 13,
};

//-------------------------------------------------------------------------------------
// Level 9 Rock and Fly
//-------------------------------------------------------------------------------------

char const level9Name[] PROGMEM = "Rock and Fly";

#define LEVEL_9_WIDTH   34
#define LEVEL_9_HEIGHT  15

const uint8_t PROGMEM level9Map[] = {
0x8F, 0x8E, 0x54, 0x83, 0xD4, 0x81, 0x09, 0x81, 0x3A, 0x82, 0x04, 0x82, 0xD1, 0x0F, 0x8C, 0x04, 0x82, 
0x0F, 0x0B, 0x82, 0x04, 0x82, 0x05, 0xA1, 0x0F, 0x0B, 0x82, 0x04, 0xA1, 0x81, 0xA1, 0x03, 0x41, 0xA3, 
0x0F, 0x02, 0xA1, 0x82, 0x04, 0x83, 0x03, 0x14, 0x0F, 0x02, 0x83, 0x04, 0x83, 0x03, 0x84, 0x09, 0xA5, 
0x41, 0xA2, 0x83, 0xA1, 0x04, 0x82, 0xA1, 0x02, 0xD4, 0x03, 0xA1, 0x05, 0x18, 0x84, 0x05, 0x82, 0x09, 
0x81, 0x05, 0x8C, 0x05, 0x82, 0x09, 0x81, 0x05, 0xD7, 0x85, 0x05, 0x82, 0x61, 0x08, 0x81, 0xA1, 0x0C, 
0x84, 0x05, 0x82, 0x61, 0x21, 0xB1, 0x21, 0x05, 0x82, 0x0C, 0x84, 0xA4, 0x41, 0x82, 0x64, 0xA5, 0x82, 
0xA7, 0x41, 0xA3, 0x8F, 0x8F, 0x87, 0x00};

const uint8_t PROGMEM level9StartingPositions[8] = {
5, 13,    12, 5,    26, 13,    28, 7,
};

const uint8_t PROGMEM level9EndingPositions[8] = {
6, 13,    11, 5,    27, 13,    29, 7,
};


static const uint8_t MAX_NUMBER_OF_LEVELS       = 9;
const uint8_t *levelMaps[] =                    { level0Map, level1Map, level2Map, level3Map, level4Map, level5Map, level6Map, level7Map, level8Map, level9Map };
const uint8_t *levelStartingPositions[] =       { level0StartingPositions, level1StartingPositions, level2StartingPositions, level3StartingPositions, level4StartingPositions, level5StartingPositions, level6StartingPositions, level7StartingPositions, level8StartingPositions, level9StartingPositions };
const uint8_t *levelEndingPositions[] =         { level0EndingPositions, level1EndingPositions, level2EndingPositions, level3EndingPositions, level4EndingPositions, level5EndingPositions, level6EndingPositions, level7EndingPositions, level8EndingPositions, level9EndingPositions };
// const uint8_t levelPositionsCount[] =           { 2, 6, 4, 4, 4, 1, 4, 4, 4, 4 }; 

const int8_t levelInit[] = { 

// Level width   Level Height,   Level     Level     Player  Player   Fares      Name     Number Of
//                               X Offset  Y Offset  X Pos   Y Pos   Required   Offset    Positions
  LEVEL_0_WIDTH, LEVEL_0_HEIGHT,       0,        0,     28,     45,     0,         0,         2,
  LEVEL_1_WIDTH, LEVEL_1_HEIGHT,     -54,      -56,     56,     45,     0,        16,         6,
  LEVEL_2_WIDTH, LEVEL_2_HEIGHT,     -54,      -56,     56,     45,     0,        12,         4,
  LEVEL_3_WIDTH, LEVEL_3_HEIGHT,     128,     -56,     56,     29,     0,        10,         4,
  LEVEL_4_WIDTH, LEVEL_4_HEIGHT,     -32,      -56,     56,     13,     0,        12,         4,
  LEVEL_5_WIDTH, LEVEL_5_HEIGHT,     -54,      -56,     56,     45,     0,        16,         1,
  LEVEL_6_WIDTH, LEVEL_6_HEIGHT,     -54,      -56,     56,     45,     0,        10,         4,
  LEVEL_7_WIDTH, LEVEL_7_HEIGHT,     -54,      -56,     56,     45,     0,        16,         4,
  LEVEL_8_WIDTH, LEVEL_8_HEIGHT,     -54,      -56,     56,     45,     0,        10,         4,
  LEVEL_9_WIDTH, LEVEL_9_HEIGHT,     -54,      -56,     56,     45,     0,        16,         4,
};

char const * const levelNames[] PROGMEM = {
  level1Name,
  level2Name,
  level3Name,
  level4Name,
  level5Name,
  level6Name,
  level7Name,
  level8Name,
  level9Name,
};
