#pragma once

#include "Arduboy2.h"

const unsigned char PROGMEM SpaceTaxi[] = {
17, 8,

//facing right frame0
0x00, 0x70, 0x18, 0x6e, 0x1e, 0x5e, 0x12, 0x72, 0x76, 0x7c, 0x18, 0x6a, 0x1e, 0x5a, 0x10, 0x60, 0x00, 

//facing left frame1
0x00, 0x60, 0x10, 0x5a, 0x1e, 0x6a, 0x18, 0x7c, 0x76, 0x72, 0x12, 0x5e, 0x1e, 0x6e, 0x18, 0x70, 0x00, 
};

const unsigned char PROGMEM SpaceTaxi_Mask[] = {

//facing right frame0
0x70, 0xf8, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xfe, 0xff, 0xff, 0xff, 0xfa, 0xf0, 0x60,  

//facing left frame1
0x60, 0xf0, 0xfa, 0xff, 0xff, 0xff, 0xfe, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xf8, 0x70,
};

const unsigned char PROGMEM SpaceTaxi_LandingGear[] = {
17, 11,
0x00, 0x70, 0x18, 0x6e, 0x1e, 0xde, 0x12, 0x72, 0x76, 0x7c, 0x18, 0x6a, 0x1e, 0xda, 0x10, 0x60, 0x00, 
0x00, 0x00, 0x00, 0x02, 0x03, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x03, 0x02, 0x00, 

0x00, 0x60, 0x10, 0xda, 0x1e, 0x6a, 0x18, 0x7c, 0x76, 0x72, 0x12, 0xde, 0x1e, 0x6e, 0x18, 0x70, 0x00, 
0x00, 0x02, 0x03, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x03, 0x02, 0x00, 0x00, 0x00, 
};

const unsigned char PROGMEM SpaceTaxi_LandingGear_Mask[] = {

//facing right frame0
0x70, 0xf8, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xfe, 0xff, 0xff, 0xff, 0xfa, 0xf0, 0x60, 
0x00, 0x00, 0x02, 0x07, 0x07, 0x07, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x07, 0x07, 0x07, 0x02, 

//facing left frame1
0x60, 0xf0, 0xfa, 0xff, 0xff, 0xff, 0xfe, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xf8, 0x70, 
0x02, 0x07, 0x07, 0x07, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x07, 0x07, 0x07, 0x02, 0x00, 0x00, 
};


const unsigned char PROGMEM SpaceTaxi_OutOfFuel_1[] = {
27, 18,
0x08, 0x00, 0x02, 0x00, 0x20, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x02, 0x40, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x44, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x04, 0x00, 0x00, 0x10, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

// 0x00, 0x00, 0x00, 0x40, 0x02, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x20, 0x00, 0x02, 0x00, 0x08, 
// 0x00, 0x00, 0x10, 0x00, 0x00, 0x04, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x44, 0x00, 0x00, 
// 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

const unsigned char PROGMEM SpaceTaxi_OutOfFuel_1_Mask[] = {
0x00, 0x00, 0xe0, 0xe7, 0xe7, 0x07, 0x00, 0x00, 0x0e, 0x0e, 0x0e, 0x07, 0x07, 0x07, 0x00, 0x00, 0x00, 0x0e, 0x0e, 0x0e, 0x00, 0x70, 0x70, 0x77, 0x07, 0x1f, 0x1c, 
0x00, 0x38, 0x38, 0x38, 0x0e, 0xce, 0xce, 0xc0, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0xee, 0xee, 0xee, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x03, 0x03, 0x03, 0x00, 0x00, 0x00, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x00, 0x00, 0x00, 0x00, 

// 0x1c, 0x1f, 0x07, 0x77, 0x70, 0x70, 0x00, 0x0e, 0x0e, 0x0e, 0x00, 0x00, 0x00, 0x07, 0x07, 0x07, 0x0e, 0x0e, 0x0e, 0x00, 0x00, 0x07, 0xe7, 0xe7, 0xe0, 0x00, 0x00, 
// 0x00, 0xee, 0xee, 0xee, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0xc0, 0xce, 0xce, 0x0e, 0x38, 0x38, 0x38, 0x00, 
// 0x00, 0x00, 0x00, 0x00, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x00, 0x00, 0x00, 0x03, 0x03, 0x03, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

const unsigned char PROGMEM SpaceTaxi_OutOfFuel_2[] = {
27, 18,
0x08, 0x00, 0x00, 0x01, 0x40, 0x60, 0x0c, 0x18, 0x00, 0xb0, 0x90, 0x00, 0x20, 0x00, 0x82, 0x00, 0x28, 0x60, 0xa0, 0x00, 0x04, 0x00, 0x10, 0x40, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x44, 0x00, 0x00, 0x00, 0x04, 0x40, 0x06, 0x00, 0x04, 0x00, 0x22, 0x06, 0x00, 0x06, 0x02, 0x00, 0x80, 0x20, 0x00, 0x09, 0x30, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

// 0x00, 0x00, 0x00, 0x40, 0x10, 0x00, 0x04, 0x00, 0xa0, 0x60, 0x28, 0x00, 0x82, 0x00, 0x20, 0x00, 0x90, 0xb0, 0x00, 0x18, 0x0c, 0x60, 0x40, 0x01, 0x00, 0x00, 0x08, 
// 0x00, 0x00, 0x00, 0x00, 0x30, 0x09, 0x00, 0x20, 0x80, 0x00, 0x02, 0x06, 0x00, 0x06, 0x22, 0x00, 0x04, 0x00, 0x06, 0x40, 0x04, 0x00, 0x00, 0x00, 0x44, 0x00, 0x00, 
// 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 
};

const unsigned char PROGMEM SpaceTaxi_OutOfFuel_2_Mask[] = {

//facing right frame0
0x00, 0x00, 0xe0, 0xf8, 0xf8, 0xbe, 0x8e, 0x8e, 0xe0, 0xfc, 0xfc, 0xff, 0xc7, 0xf7, 0x70, 0xf0, 0xd0, 0xf0, 0xf8, 0x3c, 0xfe, 0xfe, 0xf7, 0xe3, 0x03, 0x1c, 0x1c, 
0x00, 0x00, 0x00, 0x78, 0x7f, 0x7f, 0x3f, 0xf1, 0xf1, 0xc7, 0x0e, 0x0f, 0x0f, 0x7f, 0x76, 0x77, 0x8f, 0x8f, 0xef, 0xee, 0xee, 0x8e, 0x80, 0xee, 0xee, 0xee, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x03, 0x03, 0x00, 0x00, 0x03, 0x03, 0x03, 0x00, 0x00, 0x00, 

// //facing left frame1
// 0x1c, 0x1c, 0x03, 0xe3, 0xf7, 0xfe, 0xfe, 0x3c, 0xf8, 0xf0, 0xd0, 0xf0, 0x70, 0xf7, 0xc7, 0xff, 0xfc, 0xfc, 0xe0, 0x8e, 0x8e, 0xbe, 0xf8, 0xf8, 0xe0, 0x00, 0x00, 
// 0x00, 0xee, 0xee, 0xee, 0x80, 0x8e, 0xee, 0xee, 0xef, 0x8f, 0x8f, 0x77, 0x76, 0x7f, 0x0f, 0x0f, 0x0e, 0xc7, 0xf1, 0xf1, 0x3f, 0x7f, 0x7f, 0x78, 0x00, 0x00, 0x00, 
// 0x00, 0x00, 0x00, 0x03, 0x03, 0x03, 0x00, 0x00, 0x03, 0x03, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

const unsigned char PROGMEM SpaceTaxi_OutOfFuel_3[] = {
27, 18,
0x00, 0x00, 0x00, 0x02, 0x40, 0x60, 0x38, 0x78, 0x00, 0xf0, 0x90, 0x00, 0x20, 0x60, 0xc2, 0x80, 0xa8, 0xe0, 0xa0, 0x00, 0x04, 0x00, 0x10, 0x40, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x44, 0x00, 0x00, 0x00, 0x04, 0x20, 0x06, 0x40, 0x04, 0x00, 0x07, 0x07, 0x00, 0x0e, 0x02, 0x00, 0x98, 0x04, 0x14, 0x05, 0x18, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

//facing left frame1
0x00, 0x00, 0x00, 0x40, 0x10, 0x00, 0x04, 0x00, 0xa0, 0xe0, 0xa8, 0x80, 0xc2, 0x60, 0x20, 0x00, 0x90, 0xf0, 0x00, 0x78, 0x38, 0x60, 0x40, 0x02, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x18, 0x05, 0x14, 0x04, 0x98, 0x00, 0x02, 0x0e, 0x00, 0x07, 0x07, 0x00, 0x04, 0x40, 0x06, 0x20, 0x04, 0x00, 0x00, 0x00, 0x44, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 
};

const unsigned char PROGMEM SpaceTaxi_OutOfFuel_3_Mask[] = {

//facing right frame0
0x00, 0x00, 0x07, 0xe7, 0xf7, 0xfc, 0xfc, 0xfc, 0xfc, 0xf8, 0xf8, 0xf8, 0xe0, 0xe7, 0xf7, 0xff, 0xfc, 0xfc, 0xa0, 0x0e, 0x8e, 0xbe, 0xf8, 0xf8, 0xe0, 0x00, 0x00, 
0x00, 0xee, 0xee, 0xef, 0x8f, 0x8f, 0x7f, 0x7f, 0xff, 0xef, 0xef, 0x0f, 0x07, 0x07, 0x1d, 0x1f, 0x1f, 0xff, 0xf8, 0xfc, 0x1f, 0x3f, 0x3f, 0x3c, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x03, 0x03, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

//facing left frame1
0x00, 0x00, 0xe0, 0xf8, 0xf8, 0xbe, 0x8e, 0x0e, 0xa0, 0xfc, 0xfc, 0xff, 0xf7, 0xe7, 0xe0, 0xf8, 0xf8, 0xf8, 0xfc, 0xfc, 0xfc, 0xfc, 0xf7, 0xe7, 0x07, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x3c, 0x3f, 0x3f, 0x1f, 0xfc, 0xf8, 0xff, 0x1f, 0x1f, 0x1d, 0x07, 0x07, 0x0f, 0xef, 0xef, 0xff, 0x7f, 0x7f, 0x8f, 0x8f, 0xef, 0xee, 0xee, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x03, 0x03, 0x00, 0x00, 0x00, 
};

const unsigned char PROGMEM SpaceTaxi_OutOfFuel_4[] = {
27, 18, 
0x00, 0x00, 0x00, 0x00, 0x04, 0x80, 0xc0, 0x70, 0xf0, 0xf0, 0x90, 0x00, 0x20, 0x60, 0xc0, 0x80, 0xa2, 0xe0, 0xa0, 0x08, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x04, 0x00, 0x40, 0x00, 0x04, 0x00, 0x26, 0x00, 0x04, 0x00, 0x07, 0x07, 0x00, 0x0e, 0x02, 0x0c, 0x82, 0x0a, 0x02, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

//facing left frame1
0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x08, 0xa0, 0xe0, 0xa2, 0x80, 0xc0, 0x60, 0x20, 0x00, 0x90, 0xf0, 0xf0, 0x70, 0xc0, 0x80, 0x04, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x02, 0x0a, 0x82, 0x0c, 0x02, 0x0e, 0x00, 0x07, 0x07, 0x00, 0x04, 0x00, 0x26, 0x00, 0x04, 0x00, 0x40, 0x00, 0x04, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};


const unsigned char PROGMEM SpaceTaxi_OutOfFuel_4_Mask[] = {

//facing right frame0
0x00, 0x00, 0x00, 0x0e, 0xce, 0xfe, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf0, 0xf0, 0xe7, 0xe7, 0xe7, 0xfc, 0xfc, 0x7c, 0x70, 0x70, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x0e, 0x0e, 0xee, 0xe1, 0xef, 0x0f, 0x7f, 0x7f, 0x7f, 0x0f, 0x0f, 0x0f, 0x1f, 0x1f, 0x1f, 0x1f, 0xdf, 0xdf, 0xdf, 0x1f, 0x1e, 0x1c, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

//facing left frame1
0x00, 0x00, 0x00, 0x00, 0x70, 0x70, 0x7c, 0xfc, 0xfc, 0xe7, 0xe7, 0xe7, 0xf0, 0xf0, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xfe, 0xce, 0x0e, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x1c, 0x1e, 0x1f, 0xdf, 0xdf, 0xdf, 0x1f, 0x1f, 0x1f, 0x1f, 0x0f, 0x0f, 0x0f, 0x7f, 0x7f, 0x7f, 0x0f, 0xef, 0xe1, 0xee, 0x0e, 0x0e, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};


const unsigned char PROGMEM thrusterRight[] = {
17, 4,

//Frame0
0x00, 0x00, 0x00, 0x00, 0x02, 0x04, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x04, 0x02, 0x00, 0x00, 

//Frame1
0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 
};

const unsigned char PROGMEM thrusterRightMask[] = {

//Frame0
0x00, 0x00, 0x00, 0x02, 0x07, 0x0e, 0x07, 0x02, 0x00, 0x00, 0x00, 0x02, 0x07, 0x0e, 0x07, 0x02, 0x00, 

//Frame1
0x00, 0x00, 0x00, 0x00, 0x02, 0x07, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x07, 0x02, 0x00, 0x00, 
};

const unsigned char PROGMEM thrusterLeft[] = {
17, 4,

//Frame0
0x00, 0x00, 0x02, 0x04, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x04, 0x02, 0x00, 0x00, 0x00, 0x00, 

//Frame1
0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00,
};

const unsigned char PROGMEM thrusterLeftMask[] = {

//Frame0
0x00, 0x02, 0x07, 0x0e, 0x07, 0x02, 0x00, 0x00, 0x00, 0x02, 0x07, 0x0e, 0x07, 0x02, 0x00, 0x00, 0x00, 

//Frame1
0x00, 0x00, 0x02, 0x07, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x07, 0x02, 0x00, 0x00, 0x00, 0x00,
};


const unsigned char PROGMEM Hail[] =
{
36, 15,
0x00, 0xf8, 0xfc, 0xfe, 0x1e, 0xee, 0x6e, 0x5e, 0xfe, 0x3e, 0xde, 0xde, 0x3e, 0xfe, 0xfe, 0xde, 0x0e, 0xde, 0xfe, 0x3e, 0xde, 0xde, 0x3e, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0x0e, 0xfe, 0xfc, 0xf8, 0x00, 
0x00, 0x03, 0x07, 0x0f, 0x0e, 0x3d, 0x1d, 0x0c, 0x0f, 0x0e, 0x0d, 0x0d, 0x0e, 0x0f, 0x0f, 0x0f, 0x0e, 0x0d, 0x0f, 0x0e, 0x0d, 0x0d, 0x0e, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0d, 0x0f, 0x07, 0x03, 0x00, 
};

const unsigned char PROGMEM Ouch[] =
{
// width, height,
36, 15,
0x00, 0xf8, 0xfc, 0xfe, 0xfe, 0xfe, 0xfe, 0x1e, 0xee, 0xee, 0x1e, 0xfe, 0x1e, 0xfe, 0xfe, 0x1e, 0xfe, 0x3e, 0xde, 0xfe, 0xbe, 0xfe, 0x0e, 0xbe, 0xbe, 0x7e, 0xfe, 0xfe, 0x0e, 0xfe, 0xfe, 0xfe, 0xfe, 0xfc, 0xf8, 0x00, 
0x00, 0x03, 0x07, 0x0f, 0x0f, 0x3f, 0x1f, 0x0e, 0x0d, 0x0f, 0x0e, 0x0f, 0x0e, 0x0d, 0x0d, 0x0e, 0x0f, 0x0e, 0x0d, 0x0d, 0x0e, 0x0f, 0x0c, 0x0f, 0x0f, 0x0c, 0x0f, 0x0f, 0x0d, 0x0f, 0x0f, 0x0f, 0x0f, 0x07, 0x03, 0x00, 
};

const unsigned char PROGMEM Hail_Mask[] =
{
0xf8, 0xfc, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xfc, 0xf8, 
0x03, 0x07, 0x0f, 0x1f, 0x3f, 0x7f, 0x3f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x0f, 0x07, 0x03, 
};