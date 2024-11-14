#ifndef TOUCHSCREEN_H
#define TOUCHSCREEN_H

#include <stdint.h>

typedef struct {
  /**
  * @brief Touchscreen struct
  *
  * @param xp X+ pin. Must be an analog pin
  * @param yp Y+ pin. Must be an analog pin
  * @param xm X- pin. Can be a digital pin
  * @param ym Y- pin. Can be a digital pin
  */
  uint8_t xp, yp, xm, ym;
} touchScreen;

typedef struct {
  /**
  * @brief Struct to encapsule the X, Y measurement for a touch
  * @param x X coordinate of the point
  * @param y Y coordinate of the point
  */
  uint16_t x, y;
} TSPoint;

TSPoint getPoint(touchScreen* ts);

#endif
