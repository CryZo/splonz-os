#include <Arduino.h>

#define PIN_BUZZER 11
#define PIN_ACTOR 2
#define PIN_BUTTON 3

#define NOTE_COUNT 0.25

#include "songs/gameofthrones.h"
#include "songs/greenhill.h"
#include "songs/harrypotter.h"
#include "songs/imperialmarch.h"
#include "songs/jigglypuffsong.h"
#include "songs/keyboardcat.h"
#include "songs/merrychristmas.h"
#include "songs/miichannel.h"
#include "songs/songofstorms.h"
#include "songs/startrek.h"
#include "songs/starwars.h"
#include "songs/supermariobros.h"
#include "songs/takeonme.h"
#include "songs/tetris.h"
#include "songs/thegodfather.h"
#include "songs/vampirekiller.h"
#include "songs/zeldaslullaby.h"
#include "songs/zeldatheme.h"

bool stat = false;
int stepCounter = 0;


void playSong(const int melody[], int size, const int tempo) {
  // sizeof gives the number of bytes, each int value is composed of two bytes (16 bits)
  // there are two values per note (pitch and duration), so for each note there are four bytes
  int notes = size / 4; // sizeof(melody) / sizeof(melody[0]) / 2;

  // this calculates the duration of a whole note in ms
  int wholenote = (60000 * 4) / tempo;

  int divider = 0, noteDuration = 0;


  // iterate over the notes of the melody.
  // Remember, the array is twice the number of notes (notes + durations)
  for (int thisNote = 0; thisNote < notes * 2; thisNote = thisNote + 2) {
    // calculates the duration of each note
    divider = melody[thisNote + 1];
    if (divider > 0) {
      // regular note, just proceed
      noteDuration = (wholenote) / divider;
    }
    else if (divider < 0) {
      // dotted notes are represented with negative durations!!
      noteDuration = (wholenote) / abs(divider);
      noteDuration *= 1.5; // increases the duration in half for dotted notes
    }

    // we only play the note for 90% of the duration, leaving 10% as a pause
    tone(PIN_BUZZER, melody[thisNote], noteDuration * 0.9);

    // Wait for the specief duration before playing the next note.
    delay(noteDuration);

    // stop the waveform generation before the next note.
    noTone(PIN_BUZZER);

    stepCounter += noteDuration;

    if (stepCounter >= wholenote * NOTE_COUNT) {
      stat = !stat;
      stepCounter = 0;
      if (stat)
        digitalWrite(PIN_ACTOR, HIGH);
      else
        digitalWrite(PIN_ACTOR, LOW);
    }

    delete melody;
  }
}

void pickRandomSong() {
  int index = rand() %5;

  switch (index) {
    case 0: return playSong((const int[]) GAMEOFTHRONES, sizeof((const int[]) GAMEOFTHRONES), 85);
    // case 1: return playSong((const int[]) GREENHILL, sizeof((const int[]) GREENHILL), 140);
    case 1: return playSong((const int[]) HARRYPOTTER, sizeof((const int[]) HARRYPOTTER), 144);
    // case 3: return playSong((const int[]) IMPERIALMARCH, sizeof((const int[]) IMPERIALMARCH), 120);
    // case 4: return playSong((const int[]) JIGGLYPUFFSONG, sizeof((const int[]) JIGGLYPUFFSONG), 85);
    // case 5: return playSong((const int[]) KEYBOARDCAT, sizeof((const int[]) KEYBOARDCAT), 160);
    // case 6: return playSong((const int[]) MERRYCHRISTMAS, sizeof((const int[]) MERRYCHRISTMAS), 140);
    // case 7: return playSong((const int[]) MIICHANNEL, sizeof((const int[]) MIICHANNEL), 114);
    // case 8: return playSong((const int[]) SONGOFSTORMS, sizeof((const int[]) SONGOFSTORMS), 108);
    // case 9: return playSong((const int[]) STARTREK, sizeof((const int[]) STARTREK), 80);
    // case 10: return playSong((const int[]) STARWARS, sizeof((const int[]) STARWARS), 108);
    // case 11: return playSong((const int[]) SUPERMARIOBROS, sizeof((const int[]) SUPERMARIOBROS), 200);
    case 2: return playSong((const int[]) TAKEONME, sizeof((const int[]) TAKEONME), 140);
    case 3: return playSong((const int[]) TETRIS, sizeof((const int[]) TETRIS), 144);
    // case 14: return playSong((const int[]) THEGODFATHER, sizeof((const int[]) THEGODFATHER), 80);
    // case 15: return playSong((const int[]) VAMPIREKILLER, sizeof((const int[]) VAMPIREKILLER), 130);
    // case 16: return playSong((const int[]) ZELDASLULLABY, sizeof((const int[]) ZELDASLULLABY), 108);
    case 4: return playSong((const int[]) ZELDATHEME, sizeof((const int[]) ZELDATHEME), 88);
  }
}



void setup() {
  srand(analogRead(0));

  pinMode(PIN_ACTOR, OUTPUT);
  pinMode(PIN_BUTTON, INPUT_PULLUP);
}

void loop() {
  if (digitalRead(PIN_BUTTON) == LOW) {
    pickRandomSong();
    digitalWrite(PIN_ACTOR, LOW);
  }
}
