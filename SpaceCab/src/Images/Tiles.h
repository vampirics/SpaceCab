#pragma once

const unsigned char PROGMEM tiles[] = { 
  8, 8, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // Empty.
  0x0d, 0x9f, 0x2d, 0x97, 0x0d, 0x9f, 0x2d, 0x97, // Plat1.
  0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, // Edge1.
  0x28, 0x04, 0x04, 0x48, 0x48, 0x04, 0x04, 0x28, // Water.
  0x40, 0x40, 0x4f, 0x09, 0xed, 0x09, 0x4f, 0x40,
  0x05, 0x02, 0x05, 0x02, 0x05, 0x02, 0x05, 0x02,
  0xa5, 0x42, 0x99, 0xb5, 0xa5, 0x99, 0x42, 0xa5,
  0x5a, 0x87, 0x39, 0xd6, 0xd6, 0x39, 0x87, 0x5a,
  0x5a, 0x87, 0x39, 0xd6, 0xd6, 0x39, 0x87, 0x5a, // Rocks.
  0x82, 0x5a, 0x9a, 0x42, 0x98, 0x5a, 0x9a, 0x58, // Brick.
  0x40, 0x50, 0x40, 0x60, 0x40, 0x50, 0x40, 0x60, // Grass.
  0x18, 0x24, 0x7e, 0x42, 0x6a, 0x7c, 0x02, 0x04, // Fuel.
  0xee, 0xdd, 0x9d, 0x71, 0xef, 0xde, 0x9d, 0x7b, // Sand.
  0xfa, 0x3f, 0x00, 0x1f, 0xfa, 0x1f, 0x00, 0x3f, // SpikeUP.
  0x5f, 0xfc, 0x00, 0xf8, 0x5f, 0xf8, 0x00, 0xfc // SpikeDOWN.
};

const unsigned char PROGMEM FuelImgs[] = {
8, 8,
0x18, 0x24, 0x7e, 0x42, 0x46, 0x7c, 0x02, 0x04, 
0x18, 0x24, 0x7e, 0x62, 0x66, 0x7c, 0x02, 0x04, 
0x18, 0x24, 0x7e, 0x72, 0x76, 0x7c, 0x02, 0x04, 
0x18, 0x24, 0x7e, 0x7e, 0x7e, 0x7c, 0x02, 0x04, 
};