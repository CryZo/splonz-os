#include "notes.h"

// Vamire Killer, from castlevania
// Score available at https://musescore.com/user/28972071/scores/5425616
// Theme starts at measure 6

#define VAMPIREKILLER { \
  NOTE_E5,16, NOTE_E5,8, NOTE_D5,16, REST,16, NOTE_CS5,-4, NOTE_E4,8, NOTE_FS4,16, NOTE_G4,16, NOTE_A4,16,\
  \
  NOTE_B4,-8, NOTE_E4,-8, NOTE_B4,8, NOTE_A4,16, NOTE_D5,-4, \
  NOTE_E5,16, NOTE_E5,8, NOTE_D5,16, REST,16, NOTE_CS5,-4, NOTE_E4,8, NOTE_FS4,16, NOTE_G4,16, NOTE_A4,16,\
  NOTE_B4,-8, NOTE_E4,-8, NOTE_B4,8, NOTE_A4,16, NOTE_D4,-4,\
  REST,8, NOTE_E5,8, REST,16, NOTE_B5,16, REST,8, NOTE_AS5,16, NOTE_B5,16, NOTE_AS5,16, NOTE_G5,16, REST,4,\
  \
  NOTE_B5,8, NOTE_B5,16, NOTE_AS5,16, REST,16, NOTE_AS5,16, NOTE_A5,16, REST,16, NOTE_B5,16, NOTE_G5,16, NOTE_B5,16, NOTE_AS5,16, REST,16, NOTE_B5,16, NOTE_A5,16, NOTE_G5,16, \
  REST,8, NOTE_E5,8, REST,16, NOTE_B5,16, REST,8, NOTE_AS5,16, NOTE_B5,16, NOTE_AS5,16, NOTE_G5,16, REST,4,\
  NOTE_B5,8, NOTE_B5,16, NOTE_AS5,16, REST,16, NOTE_AS5,16, NOTE_A5,16, REST,16, NOTE_B5,16, NOTE_G5,16, NOTE_B5,16, NOTE_AS5,16, REST,16, NOTE_B5,16, NOTE_A5,16, NOTE_G5,16,\
  \
  NOTE_DS4,-8, NOTE_FS4,-8, NOTE_C5,8, NOTE_B4,-8, NOTE_G4,-8, NOTE_E4,8, \
  NOTE_DS4,-8, NOTE_FS4,-8, NOTE_C5,8, NOTE_B4,-8, NOTE_G4,-8, REST,8,\
  NOTE_DS4,-8, NOTE_FS4,-8, NOTE_C5,8, NOTE_B4,-8, NOTE_G4,-8, NOTE_E4,8,\
  NOTE_DS4,-8, NOTE_FS4,-8, NOTE_C5,8, NOTE_B4,-8, NOTE_CS5,-8, NOTE_DS5,8,\
  \
  NOTE_E5,16, NOTE_E5,16, NOTE_E4,16, NOTE_E4,-2, \
  NOTE_C4,8, NOTE_C4,8, NOTE_E4,16, NOTE_G4,-8, NOTE_D4,8, NOTE_D4,8, NOTE_FS4,16, NOTE_A4,-8,\
  NOTE_E5,16, NOTE_E5,16, NOTE_E4,16, NOTE_E4,-2,\
  NOTE_C4,8, NOTE_C4,8, NOTE_E4,16, NOTE_G4,-8, NOTE_D4,8, NOTE_D4,8, NOTE_B3,16, NOTE_D4,-8,\
  \
  \
  \
  NOTE_E5,16, NOTE_E5,8, NOTE_D5,16, REST,16, NOTE_CS5,-4, NOTE_E4,8, NOTE_FS4,16, NOTE_G4,16, NOTE_A4,16,\
  \
  NOTE_B4,-8, NOTE_E4,-8, NOTE_B4,8, NOTE_A4,16, NOTE_D5,-4, \
  NOTE_E5,16, NOTE_E5,8, NOTE_D5,16, REST,16, NOTE_CS5,-4, NOTE_E4,8, NOTE_FS4,16, NOTE_G4,16, NOTE_A4,16,\
  NOTE_B4,-8, NOTE_E4,-8, NOTE_B4,8, NOTE_A4,16, NOTE_D4,-4,\
  REST,8, NOTE_E5,8, REST,16, NOTE_B5,16, REST,8, NOTE_AS5,16, NOTE_B5,16, NOTE_AS5,16, NOTE_G5,16, REST,4,\
  \
  NOTE_B5,8, NOTE_B5,16, NOTE_AS5,16, REST,16, NOTE_AS5,16, NOTE_A5,16, REST,16, NOTE_B5,16, NOTE_G5,16, NOTE_B5,16, NOTE_AS5,16, REST,16, NOTE_B5,16, NOTE_A5,16, NOTE_G5,16, \
  REST,8, NOTE_E5,8, REST,16, NOTE_B5,16, REST,8, NOTE_AS5,16, NOTE_B5,16, NOTE_AS5,16, NOTE_G5,16, REST,4,\
  NOTE_B5,8, NOTE_B5,16, NOTE_AS5,16, REST,16, NOTE_AS5,16, NOTE_A5,16, REST,16, NOTE_B5,16, NOTE_G5,16, NOTE_B5,16, NOTE_AS5,16, REST,16, NOTE_B5,16, NOTE_A5,16, NOTE_G5,16,\
  \
  NOTE_DS4,-8, NOTE_FS4,-8, NOTE_C5,8, NOTE_B4,-8, NOTE_G4,-8, NOTE_E4,8, \
  NOTE_DS4,-8, NOTE_FS4,-8, NOTE_C5,8, NOTE_B4,-8, NOTE_G4,-8, REST,8,\
  NOTE_DS4,-8, NOTE_FS4,-8, NOTE_C5,8, NOTE_B4,-8, NOTE_G4,-8, NOTE_E4,8,\
  NOTE_DS4,-8, NOTE_FS4,-8, NOTE_C5,8, NOTE_B4,-8, NOTE_CS5,-8, NOTE_DS5,8,\
  \
  NOTE_E5,16, NOTE_E5,16, NOTE_E4,16, NOTE_E4,-2, \
  NOTE_C4,8, NOTE_C4,8, NOTE_E4,16, NOTE_G4,-8, NOTE_D4,8, NOTE_D4,8, NOTE_FS4,16, NOTE_A4,-8,\
  NOTE_E5,16, NOTE_E5,16, NOTE_E4,16, NOTE_E4,-2,\
  NOTE_C4,8, NOTE_C4,8, NOTE_E4,16, NOTE_G4,-8, NOTE_D4,8, NOTE_D4,8, NOTE_B3,16, NOTE_D4,-8,\
}
