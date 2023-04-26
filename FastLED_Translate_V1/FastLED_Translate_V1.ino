#include "FastLED.h"
#include "translate.h"

#define PIN 4
#include <SoftwareSerial.h>
#define NUM_LEDS 69
#define BRIGHTNESS 50

CRGB leds[NUM_LEDS];

void setup(){
  // Serial.begin(9600);
  FastLED.addLeds<NEOPIXEL, PIN>(leds, NUM_LEDS);
  FastLED.setBrightness(BRIGHTNESS);

  for (int i = 0; i < NUM_LEDS; i++){   // Turn everything off first
    leds[i] = CRGB::Black;
    FastLED.show();
  }
  // Serial.println("All LEDS cleared");
}

void loop(){
  for (int i = 0; i < NUM_LEDS; i++){
    if (i == 0){
      leds[translate[NUM_LEDS - 1]] = CRGB::Black;
      leds[translate[i]] = CRGB::Aqua;
    }
    else{
      leds[translate[i - 1]] = CRGB::Black;
      leds[translate[i]] = CRGB::Aqua;
    }
    
    FastLED.show();

    // Serial.println("LED: " + String(i));
    delay(100);
  }
}
