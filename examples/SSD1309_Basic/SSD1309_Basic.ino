// SSD1309 Basic Example
// This example illustrates how to use the DaDa_SH1106 library to display text on an OLED display using software SPI of rp2350.
// Pin configuration correponds to the DaDa TBD board.

#include <SoftwareSPI.h>
#include <Adafruit_GFX.h>
#include "DaDa_SSD1309.h"

#define OLED_MOSI 15
#define OLED_SCLK 14
#define OLED_DC 12
#define OLED_CS 13
#define OLED_RST 16

SoftwareSPI *softSPI;
DaDa_SSD1309 *display;

void setup() {
  softSPI = new SoftwareSPI(OLED_SCLK, OLED_DC, OLED_MOSI);
  display = new DaDa_SSD1309(128, 64, softSPI, OLED_DC, OLED_RST, OLED_CS);
  display->begin();
  display->clearDisplay();
  display->setTextSize(1);
  display->setTextColor(SSD1309_WHITE);
  display->setCursor(0,0);
  display->println("Hello, SSD1309!");
  display->display();
}

void loop() {
  // Nothing here
}

