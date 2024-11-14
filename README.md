# c-graphic-calculator

![](assets/project_schematic.png)

## What is the project?

This project is a calculator working on an ESP32 and a TFT Touchscreen.
It is going to be solved using an [ESP32][esp32 docs] programmed in
baremetal C with the [ESP-IDF Library][ESP-IDF API] and a
[touchscreen][TS docs] attached to the controller via SPI.
It will allow users to:

- Input numbers and calculate the results of those numbers based on the arithmetic operation they choose.
- Input functions and get an interactive graphic of those functions.
- Open a menu to select graphics mode or calculator mode.

## When will the project be finished?

The tasks board can be seen in the [associted project][project].
The project will be complete once all the MVP features have been implemented.

[esp32 docs]: https://learn.adafruit.com/adafruit-esp32-s3-feather
[ESP-IDF API]: https://docs.espressif.com/projects/esp-idf/en/v5.3.1/esp32/api-reference/index.html
[TS docs]: https://learn.adafruit.com/adafruit-3-5-color-320x480-tft-touchscreen-breakout
[project]: https://github.com/users/joelsnz/projects/3
