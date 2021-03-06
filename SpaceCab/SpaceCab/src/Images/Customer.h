#pragma once

#include "Arduboy2.h"

const unsigned char PROGMEM Customer_Img[] = {
7, 8,

//frame0
0x00, 0x08, 0x64, 0x1e, 0x64, 0x02, 0x00, 

//frame1
0x00, 0x08, 0x64, 0x1e, 0x64, 0x04, 0x00, 
};

const unsigned char PROGMEM Customer_Img_Mask[] = {

//frame0
0x08, 0x7c, 0xfe, 0x7f, 0xfe, 0x67, 0x02, 

//frame1
0x08, 0x7c, 0xfe, 0x7f, 0xfe, 0x6e, 0x04, 
};

const unsigned char PROGMEM Customer_Flat_Img[] = {
7, 8,
0x40, 0x20, 0x40, 0x40, 0x60, 0x40, 0x40, 
};

const unsigned char PROGMEM Customer_Flat_Mask[] = {
0xe0, 0xf0, 0xe0, 0xe0, 0xf0, 0xe0, 0xe0, 
};

const unsigned char PROGMEM Customer_WalkingLeft[] = {
7, 8,

//frame0
0x00, 0x00, 0x68, 0x1e, 0x2c, 0x40, 0x00, 

//frame1
0x00, 0x00, 0x00, 0x7e, 0x0c, 0x00, 0x00,  
};

const unsigned char PROGMEM Customer_WalkingLeft_Mask[] = {
//frame0
0x00, 0x68, 0xfe, 0x7f, 0x7e, 0xec, 0x40, 
//frame1
0x00, 0x00, 0x7e, 0xff, 0x7e, 0x0c, 0x00,  
};


const unsigned char PROGMEM Customer_WalkingRight[] = {
7, 8,

//frame0
0x00, 0x40, 0x2c, 0x1e, 0x68, 0x00, 0x00, 

//frame1
0x00, 0x00, 0x0c, 0x7e, 0x00, 0x00, 0x00, 
};

const unsigned char PROGMEM Customer_WalkingRight_Mask[] = {
//frame0
0x40, 0xec, 0x7e, 0x7f, 0xfe, 0x68, 0x00, 
//frame1
0x00, 0x0c, 0x7e, 0xff, 0x7e, 0x00, 0x00,  
};