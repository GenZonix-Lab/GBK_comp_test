#include "ESP32_WS2812_Lib.h"
#define LEDS_COUNT 1
#define LEDS_PIN   2
#define CHANNEL    0

ESP32_WS2812 strip = ESP32_WS2812(LEDS_COUNT, LEDS_PIN, CHANNEL, TYPE_GRB);
const int color[5][3]={
  {0,0,255},
  {0,255,0},
  {255,0,0},
  {255,255,255},
  {0,0,0}
};                      // choose the colour in Matrix format rows x columns
void setup() {
  strip.begin();
  strip.setBrightness(25);
}

void loop() {
  for(int i=0; i<5 ;i++){
      strip.setLedColorData(0, color[i][0], color[i][1], color[i][2]);
      strip.show();
      delay(1000);
}
}