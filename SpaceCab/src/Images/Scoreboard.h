#pragma once


//---------------------------------------------------------------------------------------------------------------------
// Scoreboard ..

const uint8_t PROGMEM arrow[] = {
1, 8,
0xFF,
};


const unsigned char PROGMEM highScoreImg[] = {
96, 17,
0x00, 0x06, 0x06, 0x06, 0x7e, 0x7e, 0x06, 0x06, 0x06, 0x78, 0x7c, 0x0e, 0x06, 0x06, 0x06, 0x0e, 0x7c, 0x78, 0x00, 0x00, 0x7e, 0x7e, 0x66, 0x66, 0x66, 0x7e, 0x3c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7e, 0x7e, 0x06, 0x06, 0x06, 0x0e, 0x7c, 0x78, 0x00, 0x00, 0x7e, 0x7e, 0x66, 0x66, 0x66, 0x66, 0x3e, 0x1c, 0x00, 0x00, 0x7e, 0x7e, 0x00, 0x02, 0x1e, 0x7c, 0x60, 0x00, 0x60, 0x7c, 0x1e, 0x02, 0x00, 0x7e, 0x7e, 0x66, 0x66, 0x66, 0x66, 0x66, 0x00, 0x00, 0x7e, 0x7e, 0x66, 0x66, 0x66, 0x66, 0x3e, 0x1c, 0x00, 0x00, 0x3c, 0x7e, 0x66, 0x66, 0x66, 0x6e, 0x4c, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x40, 0x80, 0x80, 0x85, 0x85, 0x80, 0x80, 0x80, 0x81, 0x81, 0x85, 0x84, 0x84, 0x84, 0x85, 0x81, 0x81, 0x80, 0x80, 0x85, 0x85, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x85, 0x85, 0x84, 0x84, 0x84, 0x85, 0x81, 0x81, 0x80, 0x80, 0x85, 0x85, 0x80, 0x80, 0x80, 0x81, 0x85, 0x84, 0x84, 0x80, 0x85, 0x85, 0x80, 0x80, 0x80, 0x80, 0x85, 0x85, 0x85, 0x80, 0x80, 0x80, 0x80, 0x85, 0x85, 0x84, 0x84, 0x84, 0x84, 0x84, 0x80, 0x80, 0x85, 0x85, 0x80, 0x80, 0x80, 0x81, 0x85, 0x84, 0x84, 0x80, 0x81, 0x85, 0x84, 0x84, 0x84, 0x85, 0x81, 0x80, 0x80, 0x40, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

const unsigned char PROGMEM highScore_Mask[] = {
// width, height,
//96, 17,
0x0f, 0x0f, 0x0f, 0xff, 0xff, 0xff, 0xff, 0x0f, 0xff, 0xff, 0xff, 0xff, 0x1f, 0x0f, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7f, 0x3d, 0x01, 0x01, 0x01, 0x01, 0xff, 0xff, 0xff, 0xff, 0x0f, 0x1f, 0xff, 0xff, 0xfd, 0xfd, 0xff, 0xff, 0xff, 0xe7, 0xe7, 0xe7, 0xe7, 0xbf, 0x1d, 0x01, 0xff, 0xff, 0xff, 0xff, 0x3f, 0xff, 0xff, 0xfd, 0x81, 0xfd, 0xff, 0xff, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xef, 0xef, 0xef, 0xe7, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 
0x60, 0xe0, 0xe0, 0xcf, 0xcf, 0xcf, 0xcf, 0xc0, 0xc3, 0xc3, 0xcf, 0xcf, 0xcf, 0xce, 0xcf, 0xcf, 0xcf, 0xc3, 0xc1, 0xcf, 0xcf, 0xcf, 0xcf, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xcf, 0xcf, 0xcf, 0xcf, 0xce, 0xcf, 0xcf, 0xcf, 0xc3, 0xc1, 0xcf, 0xcf, 0xcf, 0xcf, 0xc1, 0xc3, 0xc7, 0xcf, 0xcf, 0xce, 0xcf, 0xcf, 0xcf, 0xcf, 0xc0, 0xc0, 0xcf, 0xcf, 0xcf, 0xcf, 0xcf, 0xc0, 0xc0, 0xcf, 0xcf, 0xcf, 0xcf, 0xcf, 0xcf, 0xcf, 0xcf, 0xcf, 0xcf, 0xcf, 0xcf, 0xcf, 0xc0, 0xc1, 0xc7, 0xcf, 0xcf, 0xcf, 0xcf, 0xcf, 0xcf, 0xcf, 0xcf, 0xcf, 0xcf, 0xcf, 0xc3, 0xe0, 0xe0, 0x60, 
0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 
};

const unsigned char PROGMEM dollars[] =
{
// width, height,
27, 16,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x48, 0x54, 0xfe, 0x54, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xc0, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x24, 0x2a, 0x7f, 0x2a, 0x11, 0x0a, 0x1f, 0x0a, 0x24, 0x2a, 0x7f, 0x2a, 0x12, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x50, 0xf8, 0x50, 0x90, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x24, 0x2a, 0x7f, 0x2a, 0x12, 0x00, 0x00, 0x01, 0x01, 0x03, 0x01, 0x00, 0x00, 0x00, 0x24, 0x2a, 0x7f, 0x2a, 0x12, 0x00, 0x00, 0x00, 0x00, 

0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x90, 0xa8, 0xfc, 0xa8, 0x48, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x24, 0x2a, 0x7f, 0x2a, 0x12, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x24, 0x2a, 0x7f, 0x2a, 0x12, 0x00, 0x00, 0x00, 

0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x48, 0x54, 0xfe, 0x54, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x24, 0x2a, 0x7f, 0x2a, 0x12, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x24, 0x2a, 0x7f, 0x2a, 0x12, 0x00, 
};


const unsigned char PROGMEM dollars_Mask[] =
{
// width, height,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe8, 0xfc, 0xff, 0xff, 0xff, 0x7e, 0x2e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0xe0, 0xe0, 0xe0, 0x80, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x74, 0x7e, 0xff, 0xff, 0xff, 0x3f, 0x3f, 0x7f, 0x7f, 0xff, 0xff, 0xff, 0x3f, 0x17, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x00, 0x00, 0xa0, 0xf0, 0xfc, 0xfc, 0xfc, 0xf8, 0xb8, 0x00, 0x00, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x74, 0x7e, 0xff, 0xff, 0xff, 0x3f, 0x17, 0x03, 0x03, 0x07, 0x07, 0x07, 0x01, 0x00, 0x74, 0x7e, 0xff, 0xff, 0xff, 0x3f, 0x17, 0x00, 0x00, 0x00, 

0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0xd0, 0xf8, 0xfe, 0xfe, 0xfe, 0xfc, 0x5c, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x74, 0x7e, 0xff, 0xff, 0xff, 0x3f, 0x17, 0x00, 0x01, 0x01, 0x03, 0x03, 0x03, 0x00, 0x00, 0x00, 0x74, 0x7e, 0xff, 0xff, 0xff, 0x3f, 0x17, 0x00, 0x00, 

0x00, 0x00, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe8, 0xfc, 0xff, 0xff, 0xff, 0x7e, 0x2e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x00, 0x00, 
0x74, 0x7e, 0xff, 0xff, 0xff, 0x3f, 0x17, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x74, 0x7e, 0xff, 0xff, 0xff, 0x3f, 0x17, 
};