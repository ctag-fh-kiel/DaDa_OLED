# DaDa_OLED Arduino Library

DaDa_OLED is an Arduino library for controlling OLED displays based on the SSD1309 and SH1106 drivers. It provides a simple interface for drawing text, graphics, and handling display operations on a variety of OLED modules.

## Features
- Supports SSD1309 and SH1106 OLED displays
- Easy-to-use API for drawing text and graphics
- Designed for use with DaDa TBD boards
- SSD1309 is 2.4" 128x64 pixels (UI board), SH1106 is 1.3" 128x64 pixels display (stand alone board)

## Examples
See the `examples` folder for usage examples.

## Dependencies
- [Adafruit_GrayOLED](https://github.com/adafruit/Adafruit-GFX-Library) (required)
- [Adafruit GFX Library](https://github.com/adafruit/Adafruit-GFX-Library) (required by Adafruit_GrayOLED)
- Arduino IDE (with appropriate board support for your microcontroller)
- SPI library (for SPI communication, included with Arduino)

Install the Adafruit_GrayOLED and Adafruit GFX libraries using the Arduino Library Manager or from their GitHub repositories. 

## License
See [LICENSE.txt](LICENSE.txt) for license information.