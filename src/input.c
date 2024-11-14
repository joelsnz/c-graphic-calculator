#include "../include/input.h"

typedef struct {
    uint8_t px;
    uint8_t py;

    uint8_t xppin;
    uint8_t xmpin;
    uint8_t yppin;
    uint8_t ympin;
} touchScreen;

void initTouchScreen(touchScreen *ts, uint8_t xPlus, uint8_t xMinus, uint8_t yPlus, uint8_t yMinus) {

  ts->xppin = xPlus;
  ts->xmpin = xMinus;
  ts->yppin = yPlus;
  ts->ympin = yMinus;

  // TODO: set plus pins as digital output and minus pins as analog input

  // TODO: set digital outputs to 0 (deactivate TS by default)

  return;
}

void activateTouchScreen(touchScreen *ts) {

  // TODO: set digital outputs to 1

  return;
}

void readCoordinates(touchScreen *ts) {

  // TODO: read analog inputs

  return;
}
