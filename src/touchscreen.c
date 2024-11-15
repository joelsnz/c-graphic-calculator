#include "../include/input.h"
#include "driver/gpio.h"

#define NUMSAMPLES 2

TSPoint getPoint(touchScreen* ts) {
  int x, y = 0;
  int samples[NUMSAMPLES];

  gpio_set_direction(ts->yp, GPIO_MODE_INPUT);
  gpio_set_direction(ts->ym, GPIO_MODE_INPUT);
  gpio_set_direction(ts->xp, GPIO_MODE_OUTPUT);
  gpio_set_direction(ts->xm, GPIO_MODE_OUTPUT);

  gpio_set_level(ts->xp, 1);
  gpio_set_level(ts->xm, 0);

  // TODO: analog read ts->xp

  #if NUMSAMPLES == 2
    if(samples[0] - samples[1] < -4 || samples[0] - samples[1] > 4) {
    valid = 0;
  } else {
    samples[1] = (samples[0] + samples[1]) >> 1; // average 2 samples
  }
  #endif

  x = (1023 - samples[NUMSAMPLES / 2]);

  return TSPoint(x, y);
}
