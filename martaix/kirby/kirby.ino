#include <Adafruit_NeoPixel.h>

#define PIN 5       // Pin where the data line is connected
#define NUMPIXELS 25 // Number of LEDs in your strip

Adafruit_NeoPixel strip = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  strip.begin();
  strip.show(); // Initialize all pixels to 'off'
  displayKirby();
}

void loop() {
  // If you want the image to change or animate, you can modify this function.
}

void displayKirby() {
  static const uint32_t kirby[25] = {
    0x000000, 0xffb895, 0xffb895, 0xffb895, 0x000000,
    0xffb895, 0xff0000, 0xffb895, 0xff0000, 0xffb895,
    0xffb895, 0xffb895, 0xff0000, 0xffb895, 0xffb895,
    0x000000, 0xffb895, 0xffb895, 0xffb895, 0x000000,
    0xffb80c, 0xffb80c, 0xff0c0c, 0xffb80c, 0xffb80c
  };

  for (int i = 0; i < NUMPIXELS; i++) {
    strip.setPixelColor(i, kirby[i]);
  }
  strip.show();
}
