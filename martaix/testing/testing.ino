//矩陣LED
#include <Adafruit_NeoPixel.h>
Adafruit_NeoPixel ring=Adafruit_NeoPixel(25,5);
void setup() {
  // put your setup code here, to run once:
  ring.begin();
  ring.setBrightness(50);
  ring.show();
}
void colorWipe(byte r,byte g,byte b,int wait)
{
  for(unsigned i=0;i<ring.numPixels();i++)
  {
    ring.setPixelColor(i,r,g,b);
    ring.show();
    delay(10);
  }
}
void loop() {
  // put your main code here, to run repeatedly:
  colorWipe(255,0,0,50);
  colorWipe(0,255,0,50);
  colorWipe(0,0,255,50);
  // colorWipe(255,0,125,50);
}
