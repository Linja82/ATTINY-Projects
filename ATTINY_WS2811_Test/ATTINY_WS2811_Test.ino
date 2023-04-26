/*  Fast LED test for ATTINY85
 *  This program uses up 39% (3224 bytes) of program storage space
 *  and 59% (304 bytes) of dynamic memory
 */

#include "FastLED.h"

#define NUM_LEDS 69
#define LED_PIN 1

CRGB leds[NUM_LEDS];  

void setup() {
  FastLED.addLeds<NEOPIXEL, LED_PIN>(leds, NUM_LEDS);
}

void loop() {
  for (int i = 0; i < NUM_LEDS; i++){   // Show Red on all the LEDs
    leds[i] = CRGB::Red;
  }
  FastLED.show();
  delay(1000);

  for (int i = 0; i < NUM_LEDS; i++){   // Show Green on all the LEDs
    leds[i] = CRGB::Green;
  }
  FastLED.show();
  delay(1000);

  for (int i = 0; i < NUM_LEDS; i++){   // Show Blue on all the LEDs
    leds[i] = CRGB::Blue;
  }
  FastLED.show();
  delay(1000);
}
