#pragma once

// Lets Load images in PROGMEM -------------------------------------------------

const unsigned char PROGMEM SpaceTaxi[] =
{
// width, height,
17, 8,

//facing right frame0
0x00, 0x70, 0x18, 0x6e, 0x1e, 0x5e, 0x12, 0x72, 0x76, 0x7c, 0x18, 0x6a, 0x1e, 0x5a, 0x10, 0x60, 0x00, 

//facing left frame1
0x00, 0x60, 0x10, 0x5a, 0x1e, 0x6a, 0x18, 0x7c, 0x76, 0x72, 0x12, 0x5e, 0x1e, 0x6e, 0x18, 0x70, 0x00, 
};

const unsigned char PROGMEM SpaceTaxiMask[] =
{

//facing right frame0
0x70, 0xf8, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xfe, 0xff, 0xff, 0xff, 0xfa, 0xf0, 0x60,  

//facing left frame1
0x60, 0xf0, 0xfa, 0xff, 0xff, 0xff, 0xfe, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xf8, 0x70,
};

const unsigned char PROGMEM livesLeft[] =
{
// width, height,
25, 6,
0x0e, 0x11, 0x29, 0x11, 0x11, 0x12, 0x2a, 0x12, 0x0e, 0x11, 0x29, 0x11, 0x11, 0x12, 0x2a, 0x12, 0x0e, 0x11, 0x29, 0x11, 0x11, 0x12, 0x2a, 0x12, 0x0c, 
};

const unsigned char PROGMEM livesLeftMask[] =
{
0x0e, 0x1f, 0x3f, 0x1f, 0x1f, 0x1e, 0x3e, 0x1e, 0x0e, 0x1f, 0x3f, 0x1f, 0x1f, 0x1e, 0x3e, 0x1e, 0x0e, 0x1f, 0x3f, 0x1f, 0x1f, 0x1e, 0x3e, 0x1e, 0x0c, 
};

const unsigned char PROGMEM Customer_Img[] =
{
// width, height,
7, 8,

//frame0
0x00, 0x08, 0x64, 0x1e, 0x64, 0x02, 0x00, 

//frame1
0x00, 0x08, 0x64, 0x1e, 0x64, 0x04, 0x00, 
};

const unsigned char PROGMEM Customer_Img_Mask[] =
{

//frame0
0x08, 0x7c, 0xfe, 0x7f, 0xfe, 0x67, 0x02, 

//frame1
0x08, 0x7c, 0xfe, 0x7f, 0xfe, 0x6e, 0x04, 
};

const unsigned char PROGMEM thrusterRight[] =
{
// width, height,
17, 4,

//Frame0
0x00, 0x00, 0x00, 0x00, 0x02, 0x04, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x04, 0x02, 0x00, 0x00, 

//Frame1
0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 
};

const unsigned char PROGMEM thrusterRightMask[] =
{

//Frame0
0x00, 0x00, 0x00, 0x02, 0x07, 0x0e, 0x07, 0x02, 0x00, 0x00, 0x00, 0x02, 0x07, 0x0e, 0x07, 0x02, 0x00, 

//Frame1
0x00, 0x00, 0x00, 0x00, 0x02, 0x07, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x07, 0x02, 0x00, 0x00, 
};

const unsigned char PROGMEM thrusterLeft[] =
{
// width, height,
17, 4,

//Frame0
0x00, 0x00, 0x02, 0x04, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x04, 0x02, 0x00, 0x00, 0x00, 0x00, 

//Frame1
0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00,
};

const unsigned char PROGMEM thrusterLeftMask[] =
{

//Frame0
0x00, 0x02, 0x07, 0x0e, 0x07, 0x02, 0x00, 0x00, 0x00, 0x02, 0x07, 0x0e, 0x07, 0x02, 0x00, 0x00, 0x00, 

//Frame1
0x00, 0x00, 0x02, 0x07, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x07, 0x02, 0x00, 0x00, 0x00, 0x00,
};

const unsigned char PROGMEM SpaceCabSplash[] =
{
// width, height,
//128, 64,
0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
0x3e, 0x3e, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0x3e, 0x3e, 0x3e, 0x3e, 0x3e, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0x3e, 0x3e, 0x3e, 0x3e, 0x3e, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0x3e, 0x3e, 0x3e, 0x3e, 0x3e, 0x00, 0x00, 0x00, 0x38, 0x7e, 0xfe, 0xff, 0xe7, 0x87, 0x87, 0x07, 0x0e, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x87, 0x87, 0xc7, 0xff, 0xff, 0xfe, 0x7c, 0x00, 0x00, 0xf0, 0xff, 0xff, 0x1f, 0xff, 0xff, 0xf0, 0x80, 0x00, 0x00, 0xe0, 0xf8, 0xfc, 0xfe, 0x1e, 0x0f, 0x07, 0x07, 0x07, 0x0f, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x87, 0x87, 0x87, 0x87, 0x87, 0x87, 0x00, 0x00, 0x00, 0x3e, 0x3e, 0x3e, 0x3e, 0x3e, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0x3e, 0x3e, 0x3e, 0x3e, 0x3e, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0x3e, 0x3e, 0x3e, 0x3e, 0x3e, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0x3e, 0x3e, 0x3e, 
0xf8, 0xf8, 0x07, 0x07, 0x07, 0x07, 0x07, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0x07, 0x07, 0x07, 0x07, 0x07, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0x07, 0x07, 0x07, 0x07, 0x07, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0x00, 0x00, 0x00, 0xe0, 0xe0, 0xc0, 0xc1, 0xc3, 0xe7, 0xff, 0xff, 0x7e, 0x3c, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x03, 0x03, 0x03, 0x03, 0x01, 0x01, 0x80, 0xf8, 0xff, 0xff, 0x7f, 0x3b, 0x38, 0x3b, 0x7f, 0xff, 0xff, 0xf8, 0x80, 0x0f, 0x3f, 0x7f, 0xff, 0xf0, 0xe0, 0xc0, 0xc0, 0xc0, 0xe0, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0x00, 0x00, 0x00, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0x07, 0x07, 0x07, 0x07, 0x07, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0x07, 0x07, 0x07, 0x07, 0x07, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0x07, 0x07, 0x07, 0x07, 0x07, 0xf8, 0xf8, 0xf8, 
0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x82, 0x42, 0x80, 0x50, 0x08, 0x50, 0x09, 0x51, 0x29, 0x11, 0x29, 0x11, 0x28, 0x90, 0x40, 0xa0, 0x50, 0xa9, 0x51, 0xa9, 0x81, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0x00, 0x09, 0x11, 0xa9, 0x11, 0xc0, 0xd0, 0xc0, 0xd0, 0xc0, 0x11, 0xa9, 0x11, 0x09, 0x00, 0xc0, 0xd0, 0xc8, 0xd1, 0xc9, 0xd1, 0xc9, 0xd1, 0x89, 0x10, 0x00, 0x01, 0x09, 0x11, 0x29, 0x51, 0xa9, 0x51, 0x89, 0x51, 0x09, 0x50, 0x00, 0x40, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x02, 0x01, 0x02, 0x01, 0x02, 0x01, 0x02, 0x01, 0x00, 0x00, 0x00, 0x00, 0x01, 0x02, 0x01, 0x02, 0xf9, 0x7e, 0x7f, 0xff, 0x07, 0x03, 0x01, 0x01, 0x01, 0x03, 0x00, 0x00, 0x00, 0xc0, 0x7c, 0xff, 0xff, 0x07, 0xff, 0xff, 0x7c, 0xe0, 0x00, 0x00, 0x00, 0xff, 0x7f, 0x7f, 0xff, 0xe1, 0xf1, 0x7f, 0xff, 0x9f, 0x8f, 0x00, 0x01, 0x02, 0x00, 0x00, 0x00, 0x00, 0x01, 0x02, 0x01, 0x02, 0x01, 0x02, 0x01, 0x02, 0x01, 0x02, 0x01, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x0d, 0x19, 0x37, 0x6c, 0x58, 0x50, 0x50, 0x50, 0x78, 0x00, 0x60, 0x5e, 0x43, 0x61, 0x13, 0x0a, 0x0a, 0x0a, 0x13, 0x61, 0x43, 0x5e, 0x60, 0x00, 0x7f, 0x41, 0x41, 0x5f, 0x50, 0x50, 0x59, 0x47, 0x21, 0x39, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x27, 0x04, 0x76, 0x04, 0x27, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 
0x0d, 0x9f, 0x2d, 0x97, 0x0d, 0x9f, 0x2d, 0x97, 0x0d, 0x9f, 0x2d, 0x97, 0x0d, 0x9f, 0x2d, 0x97, 0x0d, 0x9f, 0x2d, 0x97, 0x0d, 0x9f, 0x2d, 0x97, 0x0d, 0x9f, 0x2d, 0x97, 0x0d, 0x9f, 0x2d, 0x97, 0x0d, 0x9f, 0x2d, 0x97, 0x0d, 0x9f, 0x2d, 0x97, 0x0d, 0x9f, 0x2d, 0x97, 0x0d, 0x9f, 0x2d, 0x97, 0x0d, 0x9f, 0x2d, 0x97, 0x0d, 0x9f, 0x2d, 0x97, 0x0d, 0x9f, 0x2d, 0x97, 0x0d, 0x9f, 0x2d, 0x97, 0x0d, 0x9f, 0x2d, 0x97, 0x0d, 0x9f, 0x2d, 0x97, 0x0d, 0x9f, 0x2d, 0x97, 0x0d, 0x9f, 0x2d, 0x97, 0x0d, 0x9f, 0x2d, 0x97, 0x0d, 0x9f, 0x2d, 0x97, 0x0d, 0x9f, 0x2d, 0x97, 0x0d, 0x9f, 0x2d, 0x97, 0x0d, 0x9f, 0x2d, 0x97, 0x0d, 0x9f, 0x2d, 0x97, 0x0d, 0x9f, 0x2d, 0x97, 0x0d, 0x9f, 0x2d, 0x97, 0x0d, 0x9f, 0x2d, 0x97, 0x0d, 0x9f, 0x2d, 0x97, 0x0d, 0x9f, 0x2d, 0x97, 0x0d, 0x9f, 0x2d, 0x97, 
};

const unsigned char PROGMEM bootlogo[] =
{
// width, height,
//128, 64,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x0a, 0x2a, 0xa8, 0xa3, 0x8f, 0x3f, 0xff, 0xff, 0xfe, 0xf0, 0x80, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0xc0, 0xc0, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x0a, 0x0a, 0x28, 0xa3, 0x87, 0x1f, 0x7f, 0xfc, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7f, 0x01, 0xf0, 0xf8, 0xfc, 0xfe, 0x06, 0xa3, 0x0b, 0x07, 0x07, 0x3f, 0x0f, 0x23, 0x08, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x0a, 0x28, 0xa1, 0x87, 0x1f, 0x7f, 0xff, 0x1f, 0x00, 0x80, 0xf1, 0xf3, 0xf3, 0x63, 0x63, 0x22, 0xb2, 0x1e, 0x20, 0x28, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x08, 0x08, 0xc8, 0x08, 0x88, 0x4a, 0x8a, 0x48, 0x48, 0x08, 0x88, 0x49, 0x89, 0x08, 0xca, 0x48, 0x09, 0x48, 0xc8, 0x48, 0x08, 0x08, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x02, 0x03, 0x03, 0x00, 0x01, 0x02, 0x01, 0x00, 0x03, 0x01, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

const unsigned char PROGMEM checkeredBG[] =
{
// width, height,
//128, 64,
0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 
0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 
0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 
0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 
0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 
0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 
0x87, 0x87, 0x87, 0x87, 0x87, 0x87, 0x87, 0x87, 0x98, 0x98, 0x98, 0x98, 0x98, 0x98, 0x98, 0x98, 0x87, 0x87, 0x87, 0x87, 0x87, 0x87, 0x87, 0x87, 0x98, 0x98, 0x98, 0x98, 0x98, 0x98, 0x98, 0x98, 0x87, 0x87, 0x87, 0x87, 0x87, 0x87, 0x87, 0x87, 0x98, 0x98, 0x98, 0x98, 0x98, 0x98, 0x98, 0x98, 0x87, 0x87, 0x87, 0x87, 0x87, 0x87, 0x87, 0x87, 0x98, 0x98, 0x98, 0x98, 0x98, 0x98, 0x98, 0x98, 0x87, 0x87, 0x87, 0x87, 0x87, 0x87, 0x87, 0x87, 0x98, 0x98, 0x98, 0x98, 0x98, 0x98, 0x98, 0x98, 0x87, 0x87, 0x87, 0x87, 0x87, 0x87, 0x87, 0x87, 0x98, 0x98, 0x98, 0x98, 0x98, 0x98, 0x98, 0x98, 0x87, 0x87, 0x87, 0x87, 0x87, 0x87, 0x87, 0x87, 0x98, 0x98, 0x98, 0x98, 0x98, 0x98, 0x98, 0x98, 0x87, 0x87, 0x87, 0x87, 0x87, 0x87, 0x87, 0x87, 0x98, 0x98, 0x98, 0x98, 0x98, 0x98, 0x98, 0x98, 
};

const unsigned char PROGMEM SpaceCabHUD[] =
{
// width, height,
128, 9,
0xfe, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0xfe, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0xfe, 0x00, 0x0d, 0x9f, 0x2d, 0x97, 0x0d, 0x9f, 0x2d, 0x97, 0x0d, 0x9f, 0x2d, 0x97, 0x0d, 0x9f, 0x2d, 0x97, 0x0d, 0x9f, 0x2d, 0x97, 0x0d, 0x9f, 0x2d, 0x97, 0x0d, 0x9f, 0x2d, 0x97, 0x0d, 0x9f, 0x2d, 0x97, 0x0d, 0x9f, 0x2d, 0x97, 0x0d, 0x9f, 0x2d, 0x97, 0x0d, 0x9f, 0x2d, 0x97, 0x0d, 0x9f, 0x2d, 0x97, 0x0d, 0x9f, 0x2d, 0x97, 0x0d, 0x9f, 0x2d, 0x97, 0x0d, 0x9f, 0x2d, 0x97, 0x0d, 0x9f, 0x2d, 
0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
};

const unsigned char PROGMEM SpaceCabHUDMask[] =
{
// width, height,
//128, 9,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
};



const unsigned char PROGMEM clockImage[] =
{
// width, height,
//8, 8,
0x00, 0x38, 0x44, 0x82, 0x9a, 0xa2, 0x44, 0x38};
