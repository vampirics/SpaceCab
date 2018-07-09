#pragma once

#include "Arduboy2Ext.h"
#include "Constants.h"

uint8_t fadeWidth;


// Extract individual digits of a uint8_t -------------------------------------

template< size_t size > void extractDigits(uint8_t (&buffer)[size], uint8_t value)
{
  for(uint8_t i = 0; i < size; ++i)
  {
    buffer[i] = value % 10;
    value /= 10;
  }
}

// Extract individual digits of a uint16_t
template< size_t size > void extractDigits(uint8_t (&buffer)[size], uint16_t value)
{
  for(uint8_t i = 0; i < size; ++i)
  {
    buffer[i] = value % 10;
    value /= 10;
  }
}

//------------------------------------------------------------------------------

void initGame(Player *player) {

  player->setNumberOfLives(PLAYER_NUMBER_OF_LIVES_MAX);
  player->setScore(0);

}

void initLevel(Level *level, Player *player, Customer *customer, uint8_t levelNumber) {

  level->reset(levelNumber);
  player->reset(static_cast<SQ15x16>(levelInit[(levelNumber * 7) + 4]), static_cast<SQ15x16>(levelInit[(levelNumber * 7) + 5]));
  customer->setStartingPosition(CUSTOMER_NO_STARTING_POS);

}


// ----------------------------------------------------------------------------
//  A better absolute as it uses less memory than the standard one .. 
//
template<typename T> T absT(const T & v) {
  
  return (v < 0) ? -v : v;

}


// ----------------------------------------------------------------------------------------------------------
//  Is the nominated tile solid?
// ----------------------------------------------------------------------------------------------------------

bool isTileSolid(uint8_t tileType) {

  switch (tileType) {
    
    case BRICK:
    case PLAT1:
    case ROCKS:
    case METAL:
    case SAND1:
    case GATE1:
      return true;

    default:
      return false;

  }
  
}