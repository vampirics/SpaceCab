#pragma once

#include "Arduboy2.h"
#include "../Utils/Constants.h"

const unsigned char PROGMEM ArrowImgs[] = {
// width, height,
8, 8,
0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00,   // U
0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x1f,   // UR
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7e,   // R
0x00, 0x00, 0x00, 0x40, 0x40, 0x40, 0x40, 0x7c,   // DR
0x00, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x00,   // D
0x7c, 0x40, 0x40, 0x40, 0x40, 0x00, 0x00, 0x00,   // DL 
0x7e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // L
0x1f, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00,   // UL
};

// const unsigned char PROGMEM ArrowMasks[] = {
// 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03,   // U
// 0x00, 0x00, 0x03, 0x03, 0x03, 0x03, 0x3f, 0x3f,   // UR
// 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff,   // R
// 0x00, 0x00, 0xe0, 0xe0, 0xe0, 0xe0, 0xfe, 0xfe,   // DR
// 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0,   // D
// 0xfe, 0xfe, 0xe0, 0xe0, 0xe0, 0xe0, 0x00, 0x00,   // DL
// 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // L
// 0x3f, 0x3f, 0x03, 0x03, 0x03, 0x03, 0x00, 0x00,   // UL
// };

const unsigned char PROGMEM ArrowMasks[] = {
0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05,   // U
0x00, 0x07, 0x07, 0x07, 0x07, 0x7f, 0x7f, 0x7f,   // UR
0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xff, 0xff,   // R
0x00, 0xf0, 0xf0, 0xf0, 0xf0, 0xff, 0xff, 0xff,   // DR
0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0,   // D
0xff, 0xff, 0xff, 0xf0, 0xf0, 0xf0, 0xf0, 0x00,   // DL
0xff, 0xff, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00,   // L
0x7f, 0x7f, 0x7f, 0x07, 0x07, 0x07, 0x07, 0x00,   // UL
};
