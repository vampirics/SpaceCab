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
  // EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, 
  // EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, 
  // EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, 
  // EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, 
  // EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, 
  // EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, 
  // EMPTY, EMPTY, EMPTY, GRASS, GRASS, GRASS, GRASS, GRASS, GRASS, GRASS, GRASS, SIGN1, GRASS, EMPTY, EMPTY, EMPTY, 
  // WATER, WATER, WATER, PLAT1, PLAT1, PLAT1, PLAT1, PLAT1, PLAT1, PLAT1, PLAT1, PLAT1, PLAT1, WATER, WATER, WATER, 

0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0,
0, 10, 170, 170, 170, 164, 160, 0,
51, 49, 17, 17, 17, 17, 19, 51,
};

const uint8_t PROGMEM level0StartingPositions[4] = {
0, 0, 12, 6, 
};

const uint8_t PROGMEM level0EndingPositions[4] = {
0, 0, 11, 6, 
};


//-------------------------------------------------------------------------------------
// Level 1 ..
//-------------------------------------------------------------------------------------

#define LEVEL_1_WIDTH   34
#define LEVEL_1_HEIGHT  15

const unsigned char PROGMEM level1Map[LEVEL_1_HEIGHT * LEVEL_1_WIDTH / 2] = {

102	,	102	,	102	,	102	,	102	,	102	,	102	,	101	,	85	,	102	,	102	,	102	,	102	,	102	,	102	,	102	,	102	,
0	,	0	,	0	,	0	,	0	,	0	,	0	,	0	,	0	,	0	,	0	,	0	,	0	,	0	,	0	,	0	,	0	,
0	,	0	,	0	,	0	,	0	,	0	,	0	,	0	,	0	,	0	,	0	,	0	,	0	,	0	,	0	,	0	,	0	,
170	,	170	,	74	,	170	,	170	,	170	,	170	,	160	,	0	,	170	,	170	,	170	,	164	,	170	,	0	,	10	,	170	,
17	,	17	,	17	,	17	,	17	,	17	,	17	,	16	,	0	,	17	,	17	,	17	,	17	,	17	,	51	,	49	,	17	,
136	,	136	,	136	,	136	,	136	,	136	,	136	,	128	,	0	,	136	,	136	,	136	,	136	,	136	,	136	,	136	,	136	,
128	,	0	,	0	,	0	,	8	,	136	,	136	,	0	,	0	,	8	,	136	,	136	,	128	,	0	,	0	,	0	,	8	,
128	,	0	,	0	,	0	,	0	,	136	,	136	,	0	,	0	,	0	,	0	,	0	,	0	,	0	,	0	,	0	,	8	,
128	,	0	,	0	,	0	,	0	,	136	,	136	,	0	,	0	,	0	,	0	,	0	,	0	,	10	,	160	,	0	,	8	,
138	,	74	,	170	,	0	,	0	,	8	,	128	,	0	,	0	,	0	,	0	,	0	,	0	,	8	,	128	,	0	,	8	,
136	,	136	,	136	,	160	,	0	,	0	,	0	,	0	,	0	,	160	,	0	,	170	,	74	,	168	,	128	,	0	,	8	,
136	,	136	,	136	,	128	,	0	,	0	,	0	,	0	,	0	,	128	,	0	,	136	,	136	,	136	,	128	,	0	,	8	,
136	,	136	,	136	,	128	,	0	,	0	,	0	,	0	,	0	,	128	,	176	,	136	,	136	,	136	,	128	,	0	,	8	,
136	,	136	,	136	,	138	,	170	,	170	,	74	,	170	,	170	,	134	,	102	,	136	,	136	,	136	,	138	,	74	,	168	,
136	,	136	,	136	,	136	,	136	,	136	,	136	,	136	,	136	,	134	,	102	,	136	,	136	,	136	,	136	,	136	,	136	,

};

const uint8_t PROGMEM level1StartingPositions[12] = {
3, 3,    1, 9,   11, 13,    24, 3,    23, 10,    29, 13,
};

const uint8_t PROGMEM level1EndingPositions[12] = {
4, 3,    2, 9,   12, 13,    25, 3,    24, 10,    30, 13,
};

//-------------------------------------------------------------------------------------
// Level 2 ..
//-------------------------------------------------------------------------------------

#define LEVEL_2_WIDTH   34
#define LEVEL_2_HEIGHT  15

const unsigned char PROGMEM level2Map[LEVEL_2_HEIGHT * LEVEL_2_WIDTH / 2] = {

102	,	102	,	102	,	102	,	102	,	102	,	102	,	101	,	85	,	86	,	102	,	102	,	102	,	102	,	12	,	12	,	6	,
0	,	0	,	0	,	0	,	0	,	0	,	0	,	0	,	0	,	0	,	0	,	0	,	0	,	0	,	192	,	192	,	192	,
0	,	0	,	0	,	0	,	0	,	0	,	0	,	0	,	0	,	0	,	0	,	0	,	0	,	0	,	192	,	192	,	192	,
0	,	0	,	0	,	0	,	0	,	11	,	0	,	0	,	0	,	0	,	0	,	0	,	0	,	12	,	0	,	0	,	12	,
0	,	192	,	192	,	0	,	0	,	102	,	96	,	0	,	0	,	0	,	0	,	0	,	0	,	44	,	34	,	34	,	44	,
12	,	12	,	12	,	0	,	0	,	0	,	0	,	0	,	0	,	0	,	0	,	0	,	0	,	102	,	102	,	102	,	102	,
12	,	12	,	12	,	0	,	0	,	0	,	0	,	0	,	0	,	0	,	0	,	0	,	0	,	0	,	0	,	0	,	0	,
192	,	0	,	0	,	192	,	0	,	0	,	0	,	0	,	0	,	0	,	0	,	0	,	0	,	0	,	0	,	0	,	0	,
194	,	34	,	34	,	194	,	0	,	0	,	0	,	2	,	66	,	32	,	0	,	0	,	0	,	36	,	34	,	34	,	34	,
102	,	102	,	102	,	102	,	0	,	0	,	0	,	6	,	102	,	96	,	0	,	0	,	0	,	102	,	102	,	102	,	102	,
0	,	0	,	0	,	0	,	0	,	0	,	0	,	0	,	0	,	0	,	0	,	0	,	0	,	0	,	0	,	0	,	6	,
0	,	0	,	0	,	0	,	0	,	0	,	0	,	0	,	0	,	0	,	0	,	0	,	0	,	0	,	0	,	0	,	6	,
36	,	34	,	34	,	34	,	0	,	0	,	0	,	0	,	0	,	0	,	0	,	0	,	0	,	0	,	0	,	0	,	6	,
102	,	102	,	102	,	102	,	170	,	170	,	170	,	170	,	170	,	170	,	170	,	170	,	170	,	34	,	34	,	36	,	38	,
102	,	102	,	102	,	102	,	17	,	17	,	17	,	17	,	17	,	17	,	17	,	17	,	17	,	102	,	102	,	102	,	102	,

};

const uint8_t PROGMEM level2StartingPositions[8] = {
0, 12,    15, 8,   26, 8,    30,13,
};

const uint8_t PROGMEM level2EndingPositions[8] = {
1, 12,    16, 8,   27, 8,    31,13,
};

//-------------------------------------------------------------------------------------
// Level 3 ..
//-------------------------------------------------------------------------------------

#define LEVEL_3_WIDTH   34
#define LEVEL_3_HEIGHT  15

const unsigned char PROGMEM level3Map[LEVEL_3_HEIGHT * LEVEL_3_WIDTH / 2] = {

136	,	136	,	136	,	136	,	136	,	136	,	136	,	136	,	136	,	136	,	136	,	136	,	136	,	136	,	136	,	85	,	88	,
0	,	0	,	0	,	0	,	0	,	0	,	0	,	0	,	0	,	0	,	0	,	0	,	0	,	0	,	0	,	0	,	0	,
0	,	0	,	0	,	0	,	0	,	0	,	0	,	0	,	0	,	0	,	0	,	0	,	0	,	0	,	0	,	0	,	0	,
2	,	34	,	32	,	0	,	0	,	0	,	0	,	0	,	0	,	0	,	0	,	0	,	0	,	0	,	0	,	0	,	0	,
6	,	102	,	96	,	0	,	0	,	0	,	0	,	128	,	0	,	0	,	0	,	0	,	0	,	0	,	0	,	0	,	0	,
0	,	0	,	0	,	0	,	0	,	0	,	0	,	130	,	66	,	32	,	0	,	0	,	0	,	0	,	0	,	0	,	0	,
0	,	0	,	0	,	0	,	0	,	0	,	0	,	136	,	136	,	128	,	0	,	0	,	34	,	178	,	0	,	0	,	0	,
0	,	0	,	0	,	0	,	0	,	34	,	66	,	141	,	221	,	208	,	0	,	0	,	102	,	102	,	0	,	0	,	0	,
0	,	0	,	0	,	0	,	0	,	136	,	136	,	128	,	0	,	0	,	0	,	0	,	0	,	0	,	0	,	0	,	0	,
0	,	0	,	0	,	0	,	0	,	0	,	0	,	128	,	0	,	0	,	0	,	0	,	0	,	0	,	0	,	0	,	0	,
0	,	0	,	0	,	0	,	0	,	0	,	0	,	128	,	0	,	0	,	0	,	0	,	0	,	0	,	0	,	0	,	0	,
130	,	34	,	66	,	34	,	34	,	34	,	34	,	130	,	66	,	34	,	34	,	34	,	34	,	40	,	0	,	0	,	0	,
56	,	153	,	153	,	153	,	153	,	153	,	153	,	137	,	153	,	153	,	153	,	153	,	153	,	131	,	51	,	51	,	51	,
0	,	136	,	136	,	136	,	136	,	136	,	136	,	136	,	136	,	136	,	136	,	136	,	136	,	0	,	0	,	0	,	0	,
0	,	8	,	136	,	136	,	136	,	136	,	136	,	136	,	136	,	136	,	136	,	136	,	128	,	0	,	0	,	0	,	0	, 
};

const uint8_t PROGMEM level3StartingPositions[8] = {
3, 11,    11, 7,    15, 5,    15, 11, 
};

const uint8_t PROGMEM level3EndingPositions[8] = {
4, 11,    12, 7,    16, 5,    16, 11, 
};


//-------------------------------------------------------------------------------------
// Level 4 ..
//-------------------------------------------------------------------------------------

#define LEVEL_4_WIDTH   34
#define LEVEL_4_HEIGHT  20

const unsigned char PROGMEM level4Map[LEVEL_4_HEIGHT * LEVEL_4_WIDTH / 2] = {
//0      1      2      3      4      5      6      7      8      9,     10     11     12     13     14     15     16     17     18     19,    20     21     22     23     24     25     26     27     28     29,    30     31     32     33  
  // ROCKS, ROCKS, ROCKS, ROCKS, ROCKS, ROCKS, GATE1, GATE1, GATE1, ROCKS, ROCKS, ROCKS, ROCKS, ROCKS, ROCKS, ROCKS, ROCKS, ROCKS, ROCKS, ROCKS, ROCKS, ROCKS, ROCKS, ROCKS, ROCKS, ROCKS, ROCKS, ROCKS, ROCKS, ROCKS, ROCKS, ROCKS, ROCKS, ROCKS,
  // ROCKS, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, ROCKS,
  // EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY,
  // EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY,
  // EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EDGE1, EDGE1, EDGE1, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY,
  // EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, ROCKS, ROCKS, ROCKS, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY,
  // EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, ROCKS, ROCKS, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY,
  // EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, ROCKS, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY,
  // EMPTY, EMPTY, EMPTY, EDGE1, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EDGE1, EDGE1, SIGN1, ROCKS, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY,
  // EMPTY, EMPTY, EMPTY, ROCKS, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, BRICK, BRICK, BRICK, ROCKS, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY,
  // EMPTY, EMPTY, EMPTY, ROCKS, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, ROCKS, ROCKS, ROCKS, ROCKS, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY,
  // EMPTY, EMPTY, EMPTY, ROCKS, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, ROCKS, ROCKS, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY,
  // EMPTY, EMPTY, EMPTY, ROCKS, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, ROCKS, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY,
  // EMPTY, EMPTY, EMPTY, ROCKS, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, ROCKS, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY,
  // EMPTY, EMPTY, EMPTY, ROCKS, EDGE1, EDGE1, EMPTY, EMPTY, EMPTY, EMPTY, ROCKS, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY,
  // EMPTY, EMPTY, EMPTY, ROCKS, ROCKS, ROCKS, EDGE1, EMPTY, EMPTY, EMPTY, ROCKS, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY,
  // EMPTY, EMPTY, EMPTY, ROCKS, ROCKS, ROCKS, ROCKS, EMPTY, EMPTY, EMPTY, ROCKS, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY,
  // EDGE1, EDGE1, SIGN1, ROCKS, ROCKS, ROCKS, ROCKS, EMPTY, EMPTY, EMPTY, ROCKS, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY,
  // BRICK, BRICK, BRICK, ROCKS, ROCKS, ROCKS, ROCKS, WATER, WATER, WATER, ROCKS, WATER, WATER, WATER, ROCKS, EDGE1, EDGE1, EDGE1, EDGE1, EDGE1, EDGE1, EDGE1, EDGE1, EDGE1, EDGE1, EDGE1, EDGE1, EDGE1, EDGE1, EDGE1, EDGE1, EDGE1, EDGE1, EDGE1,
  // PLAT1, PLAT1, PLAT1, PLAT1, PLAT1, PLAT1, PLAT1, PLAT1, PLAT1, PLAT1, PLAT1, PLAT1, PLAT1, PLAT1, PLAT1, PLAT1, PLAT1, PLAT1, PLAT1, PLAT1, PLAT1, PLAT1, PLAT1, PLAT1, PLAT1, PLAT1, PLAT1, PLAT1, PLAT1, PLAT1, PLAT1, PLAT1, PLAT1, PLAT1,

136, 136, 136, 136, 136, 136, 136, 136, 101, 85, 104, 136, 136, 136, 136, 136, 136, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 
102, 0, 0, 0, 38, 32, 0, 4, 34, 34, 34, 0, 0, 0, 0, 10, 136, 
221, 0, 0, 0, 102, 96, 0, 6, 102, 102, 102, 0, 0, 0, 0, 8, 136, 
0, 0, 0, 0, 136, 128, 0, 160, 0, 0, 0, 160, 0, 0, 6, 102, 102, 
0, 10, 0, 0, 0, 0, 0, 131, 51, 51, 51, 128, 0, 0, 13, 221, 221, 
0, 8, 0, 0, 0, 0, 0, 136, 136, 136, 136, 128, 0, 0, 0, 0, 0, 
0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 8, 160, 0, 10, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 164, 
0, 8, 138, 0, 9, 153, 0, 0, 0, 0, 160, 0, 10, 0, 14, 230, 102, 
0, 8, 136, 0, 8, 136, 0, 0, 0, 10, 138, 0, 8, 160, 6, 102, 102, 
170, 72, 136, 0, 0, 0, 0, 0, 170, 72, 136, 0, 8, 138, 160, 0, 0, 
153, 152, 136, 164, 170, 170, 170, 170, 153, 152, 136, 51, 56, 136, 131, 51, 51, 
136, 136, 136, 129, 17, 17, 17, 17, 136, 136, 136, 17, 17, 17, 17, 17, 17, 
};

const uint8_t PROGMEM level4StartingPositions[8] = {
1, 2,    4, 5,    6, 6,    14,8, 
};

const uint8_t PROGMEM level4EndingPositions[8] = {
1, 2,    4, 5,    6, 6,    14,8, 
};


const uint8_t *levelMaps[] =                    { level0Map, level1Map, level2Map, level3Map, level4Map };
const uint8_t *levelStartingPositions[] =       { level0StartingPositions, level1StartingPositions, level2StartingPositions, level3StartingPositions, level4StartingPositions };
const uint8_t *levelEndingPositions[] =         { level0EndingPositions, level1EndingPositions, level2EndingPositions, level3EndingPositions, level4EndingPositions };
const uint8_t levelPositionsCount[] =           { 2, 6, 4, 4 }; 

const int8_t levelInit[] = { 

// Level width   Level Height,   Level     Level     Player  Player  Required
//                               X Offset  Y Offset  X Pos   Y Pos    Score
  LEVEL_0_WIDTH, LEVEL_0_HEIGHT,       0,        0,     28,     45,     0,
  LEVEL_1_WIDTH, LEVEL_1_HEIGHT,     -54,      -56,     56,     45,     20,
  LEVEL_2_WIDTH, LEVEL_2_HEIGHT,     -54,      -56,     56,     45,     80,
  LEVEL_3_WIDTH, LEVEL_3_HEIGHT,     -54,      -56,     16,     24,     140,
  LEVEL_4_WIDTH, LEVEL_4_HEIGHT,     -32,      -32,     56,     45,     200
};
