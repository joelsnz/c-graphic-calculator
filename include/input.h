#ifndef TOUCHSCREEN_H
#define TOUCHSCREEN_H

typedef struct {
    uint8_t px;
    uint8_t py;
}

#include <stdint.h>

void initTouchScreen(touchScreen *ts, uint8_t xPlus, uint8_t xMinus, uint8_t yPlus, uint8_t yMinus);
void activateTouchScreen(touchScreen *ts);
void readCoordinates(touchScreen *ts);

#endif
