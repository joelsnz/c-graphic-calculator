#include "../include/input.h"
#include "driver/gpio.h"

#define NUMSAMPLES 2

#if (NUMSAMPLES > 2)
static void insert_sort(int array[], uint8_t size) {
  uint8_t j;
  int save;

  for(int i = 1; i < size; i++) {
    save = array[i];
    for(j = i; j >= 1; j--)
      array[j] = array[j - 1];
    array[j] = save;
  }
}

TSPoint getPoint(touchScreen* ts) {
  int x, y;
  int samples[NUMSAMPLES];

  gpio_set_direction(ts->yp, GPIO_MODE_INPUT);
  gpio_set_direction(ts->ym, GPIO_MODE_INPUT);
  gpio_set_direction(ts->xp, GPIO_MODE_OUTPUT);
  gpio_set_direction(ts->xm, GPIO_MODE_OUTPUT);

  gpio_set_level(ts->xp, 1);
  gpio_set_level(ts->xm, 0);

  for(int i = 0; i < NUMSAMPLES; i++)
    // TODO: analog read ts->yp
    samples[i] = 0;

  #if NUMSAMPLES > 2
    insert_sort(samples, NUMSAMPLES);
  #endif

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
