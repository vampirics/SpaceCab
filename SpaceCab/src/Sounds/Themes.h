#pragma once

const uint16_t LevelTransition_Theme[] PROGMEM = {
    NOTE_F5,166, NOTE_A6,166, NOTE_A5,166, NOTE_REST,166, NOTE_F5,166, NOTE_REST,166, NOTE_F6,166, NOTE_GS5,166,
    NOTE_D6,166, NOTE_REST,166, NOTE_E6,166, NOTE_GS5,166, NOTE_G6,166, NOTE_F5,166, NOTE_FS6,166, NOTE_GS6,166,
    TONES_END
};

const uint16_t GameOver_Theme[] PROGMEM = {
  NOTE_AS6,250, NOTE_A6,250, NOTE_GS6,250, NOTE_A6,250, NOTE_REST,250, NOTE_CS7,250, NOTE_C7,250, NOTE_REST,250,
  NOTE_A6,250, NOTE_AS6,250, NOTE_REST,250, NOTE_DS7,250, NOTE_D7,250, NOTE_REST,500, NOTE_GS6,500, NOTE_REST,250,
  NOTE_A6,250,
  TONES_END
};

uint16_t fuelSound[] = {
  1000, 30, TONES_END 
};

const uint16_t coinsSound[] PROGMEM = {
  1000, 30, NOTE_REST, 200, 
  1200, 30, NOTE_REST, 200, 
  1100, 30, NOTE_REST, 200, 
  TONES_END 
};


const uint16_t crashSound[] PROGMEM = {
  NOTE_C0, 45, NOTE_B1, 35, NOTE_F0, 25, NOTE_C0, 45, NOTE_F0, 15, NOTE_C0, 45, NOTE_F2, 15,
  NOTE_A1, 5, NOTE_C0, 45, NOTE_B1, 15, NOTE_C0, 45, NOTE_F0, 45, NOTE_A1, 20, NOTE_B2, 15,
  NOTE_C0, 45, NOTE_B1, 35, NOTE_C0, 45, NOTE_C2, 5, NOTE_C0, 45, NOTE_F0, 15, NOTE_F2, 15,
  TONES_END 
};

