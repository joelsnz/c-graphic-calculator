#ifndef TOUCHSCREEN_H
#define TOUCHSCREEN_H

#include <stdint.h>

typedef struct {
    uint8_t px;
    uint8_t py;
} touchScreen;

void initTouchScreen(TouchScreen *ts, uint8_t xPlus, uint8_t xMinus, uint8_t yPlus, uint8_t yMinus);
void activateTouchScreen(TouchScreen *ts);
void readCoordinates(TouchScreen *ts);

#endif
