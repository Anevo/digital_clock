/*

Demonstrates the use of the Parallax WS2812B RGB Led Module (#28085)

This demo cycles two LEDs through the three primary colors, red, blue, and
green, slowly fading in for each color.

For a demonstration using just one WS2812B RGB LED module, please see the 
'WS2812B_Single' sketch.

------------

This sketch REQUIRES the use of a third-party library, Adafruit_NeoPixel. 
Refer to the 'WS2812B_Single' sketch for important setup information
for this library.

This example code is for the Arduino Uno and direct compatible boards, using the
Arduino 1.0 or later IDE software. It has not been tested, nor designed for, other 
Arduino boards, including the Arduino Due.

------------

Connections:
First LED    Arduino
GND          GND
5V           5V
SI           Digital Pin 6

First LED    Second LED
GND          GND
5V           5V
SO           SI

Note: Both the 5V and GND connections on the LED modules are thru-connected.
You may connect ground and power to either side of the module.

*/

#include <Adafruit_NeoPixel.h>         // Include Adafruit NeoPixel library
#define PIN            6               // First LED on digital pin 6
#define NUMLEDS        28               // Use total of 2 LEDs

// Create 'leds' object to drive LEDs
Adafruit_NeoPixel leds = Adafruit_NeoPixel(NUMLEDS, PIN, NEO_GRB + NEO_KHZ800);

int wait = 5;                         // Standard wait delay of 5 milliseconds 

void setup() {
  leds.begin();                       // Initialize 'leds' object

  //Make sure both LEDs are off to demonstrate start of sketch
  leds.setPixelColor(0, leds.Color(0, 0, 0));  // Turn off LED0
  leds.setPixelColor(1, leds.Color(0, 0, 0));
  leds.setPixelColor(2, leds.Color(0, 0, 0));
  leds.setPixelColor(3, leds.Color(0, 0, 0));
  leds.setPixelColor(4, leds.Color(0, 0, 0));
  leds.setPixelColor(5, leds.Color(0, 0, 0));
  leds.setPixelColor(6, leds.Color(0, 0, 0));
  leds.setPixelColor(7, leds.Color(0, 0, 0));
  leds.setPixelColor(8, leds.Color(0, 0, 0));
  leds.setPixelColor(9, leds.Color(0, 0, 0));
  leds.setPixelColor(10, leds.Color(0, 0, 0));
  leds.setPixelColor(11, leds.Color(0, 0, 0));
  leds.setPixelColor(12, leds.Color(0, 0, 0));
  leds.setPixelColor(13, leds.Color(0, 0, 0));
  leds.setPixelColor(14, leds.Color(0, 0, 0));
  leds.setPixelColor(15, leds.Color(0, 0, 0));
  leds.setPixelColor(16, leds.Color(0, 0, 0));
  leds.setPixelColor(17, leds.Color(0, 0, 0));
  leds.setPixelColor(18, leds.Color(0, 0, 0));
  leds.setPixelColor(19, leds.Color(0, 0, 0));
  leds.setPixelColor(20, leds.Color(0, 0, 0));
  leds.setPixelColor(21, leds.Color(0, 0, 0));
  leds.setPixelColor(22, leds.Color(0, 0, 0));
  leds.setPixelColor(23, leds.Color(0, 0, 0));
  leds.setPixelColor(24, leds.Color(0, 0, 0));
  leds.setPixelColor(25, leds.Color(0, 0, 0));
  leds.setPixelColor(26, leds.Color(0, 0, 0));
  leds.setPixelColor(27, leds.Color(0, 0, 0));
  leds.setPixelColor(28, leds.Color(0, 0, 0));
  
  leds.show();                        // Set new values
  delay(1000);
  
}
void no1(){
  for(int i=0; i<255; i++) {            // Count up color units from 0 to 255
    leds.setPixelColor(27, leds.Color(i, 0, 0));  // Color mix for LED0
    leds.setPixelColor(23, leds.Color(i, 0, 0));  // Color mix for LED1
    leds.show();                        // Set the LEDs
    delay(wait);                        // Delay for visual effect
  }
  for(int j=0;j<=2;j++){
    leds.setPixelColor(27, leds.Color(0,0,0));
    leds.setPixelColor(23, leds.Color(0,0,0));
  }
}
void no2(){
  for(int i=0;i<255;i++){
    leds.setPixelColor(27,leds.Color(i,0,0));
    leds.setPixelColor(26,leds.Color(i,0,0));
    leds.setPixelColor(24,leds.Color(i,0,0));
    leds.setPixelColor(22,leds.Color(i,0,0));
    leds.setPixelColor(21,leds.Color(i,0,0));
    leds.show();
    delay(wait);
  }
  for(int j=0;j<=5;j++){
    leds.setPixelColor(27,leds.Color(0,0,0));
    leds.setPixelColor(26,leds.Color(0,0,0));
    leds.setPixelColor(24,leds.Color(0,0,0));
    leds.setPixelColor(22,leds.Color(0,0,0));
    leds.setPixelColor(21,leds.Color(0,0,0));
  }
}
void no3(){
  for(int i=0;i<255;i++){
    leds.setPixelColor(27,leds.Color(i,0,0));
    leds.setPixelColor(26,leds.Color(i,0,0));
    leds.setPixelColor(24,leds.Color(i,0,0));
    leds.setPixelColor(23,leds.Color(i,0,0));
    leds.setPixelColor(22,leds.Color(i,0,0));
    leds.show();
    delay(wait);
  }
  for(int j=0;j<=5;j++){
    leds.setPixelColor(27,leds.Color(0,0,0));
    leds.setPixelColor(26,leds.Color(0,0,0));
    leds.setPixelColor(24,leds.Color(0,0,0));
    leds.setPixelColor(23,leds.Color(0,0,0));
    leds.setPixelColor(22,leds.Color(0,0,0));
  }
}
void no4(){
  for(int i=0;i<255;i++){
    leds.setPixelColor(27,leds.Color(i,0,0));
    leds.setPixelColor(25,leds.Color(i,0,0));
    leds.setPixelColor(24,leds.Color(i,0,0));
    leds.setPixelColor(23,leds.Color(i,0,0));
    leds.show();
    delay(wait);
  }
  for(int j=0;j<=5;j++){
    leds.setPixelColor(27,leds.Color(0,0,0));
    leds.setPixelColor(25,leds.Color(0,0,0));
    leds.setPixelColor(24,leds.Color(0,0,0));
    leds.setPixelColor(23,leds.Color(0,0,0));
    }
}
void no5(){
  for(int i=0;i<255;i++){
    leds.setPixelColor(26,leds.Color(i,0,0));
    leds.setPixelColor(25,leds.Color(i,0,0));
    leds.setPixelColor(24,leds.Color(i,0,0));
    leds.setPixelColor(23,leds.Color(i,0,0));
    leds.setPixelColor(22,leds.Color(i,0,0));
    leds.show();
    delay(wait);
  }
  for(int j=0;j<=5;j++){
    leds.setPixelColor(27,leds.Color(0,0,0));
    leds.setPixelColor(25,leds.Color(0,0,0));
    leds.setPixelColor(24,leds.Color(0,0,0));
    leds.setPixelColor(23,leds.Color(0,0,0));
    leds.setPixelColor(22,leds.Color(0,0,0));
    }
}
void no6(){
  for(int i=0;i<255;i++){
    leds.setPixelColor(26,leds.Color(i,0,0));
    leds.setPixelColor(25,leds.Color(i,0,0));
    leds.setPixelColor(24,leds.Color(i,0,0));
    leds.setPixelColor(23,leds.Color(i,0,0));
    leds.setPixelColor(22,leds.Color(i,0,0));
    leds.setPixelColor(21,leds.Color(i,0,0));
    leds.show();
    delay(wait);
  }
  for(int j=0;j<=5;j++){
    leds.setPixelColor(26,leds.Color(0,0,0));
    leds.setPixelColor(25,leds.Color(0,0,0));
    leds.setPixelColor(24,leds.Color(0,0,0));
    leds.setPixelColor(23,leds.Color(0,0,0));
    leds.setPixelColor(22,leds.Color(0,0,0));
    leds.setPixelColor(21,leds.Color(0,0,0));
    }
}
void no7(){
  for(int i=0;i<255;i++){
    leds.setPixelColor(27,leds.Color(i,0,0));
    leds.setPixelColor(26,leds.Color(i,0,0));
    leds.setPixelColor(23,leds.Color(i,0,0));
    leds.show();
    delay(wait);
  }
  for(int j=0;j<=5;j++){
    leds.setPixelColor(27,leds.Color(0,0,0));
    leds.setPixelColor(26,leds.Color(0,0,0));
    leds.setPixelColor(23,leds.Color(0,0,0));
    }
}
void no8(){
  for(int i=0;i<255;i++){
    leds.setPixelColor(27,leds.Color(i,0,0));
    leds.setPixelColor(26,leds.Color(i,0,0));
    leds.setPixelColor(25,leds.Color(i,0,0));
    leds.setPixelColor(24,leds.Color(i,0,0));
    leds.setPixelColor(23,leds.Color(i,0,0));
    leds.setPixelColor(22,leds.Color(i,0,0));
    leds.setPixelColor(21,leds.Color(i,0,0));
    leds.show();
    delay(wait);
  }
  for(int j=0;j<=5;j++){
    leds.setPixelColor(27,leds.Color(0,0,0));
    leds.setPixelColor(26,leds.Color(0,0,0));
    leds.setPixelColor(25,leds.Color(0,0,0));
    leds.setPixelColor(24,leds.Color(0,0,0));
    leds.setPixelColor(23,leds.Color(0,0,0));
    leds.setPixelColor(22,leds.Color(0,0,0));
    leds.setPixelColor(21,leds.Color(0,0,0));
    }
}
void no9(){
  for(int i=0;i<255;i++){
    leds.setPixelColor(27,leds.Color(i,0,0));
    leds.setPixelColor(26,leds.Color(i,0,0));
    leds.setPixelColor(25,leds.Color(i,0,0));
    leds.setPixelColor(24,leds.Color(i,0,0));
    leds.setPixelColor(23,leds.Color(i,0,0));
    leds.setPixelColor(22,leds.Color(i,0,0));
    leds.show();
    delay(wait);
  }
  for(int j=0;j<=5;j++){
    leds.setPixelColor(27,leds.Color(0,0,0));
    leds.setPixelColor(26,leds.Color(0,0,0));
    leds.setPixelColor(25,leds.Color(0,0,0));
    leds.setPixelColor(24,leds.Color(0,0,0));
    leds.setPixelColor(23,leds.Color(0,0,0));
    leds.setPixelColor(22,leds.Color(0,0,0));
    }
}
void no10(){
  for(int i=0;i<255;i++){
    leds.setPixelColor(27,leds.Color(i,0,0));
    leds.setPixelColor(26,leds.Color(i,0,0));
    leds.setPixelColor(25,leds.Color(i,0,0));
    leds.setPixelColor(23,leds.Color(i,0,0));
    leds.setPixelColor(22,leds.Color(i,0,0));
    leds.setPixelColor(21,leds.Color(i,0,0));
    leds.setPixelColor(20,leds.Color(i,0,0));
    leds.setPixelColor(16,leds.Color(i,0,0));
    leds.show();
    delay(wait);
  }
  for(int i=0;i<255;i++){
    leds.setPixelColor(27,leds.Color(0,0,0));
    leds.setPixelColor(26,leds.Color(0,0,0));
    leds.setPixelColor(25,leds.Color(0,0,0));
    leds.setPixelColor(23,leds.Color(0,0,0));
    leds.setPixelColor(22,leds.Color(0,0,0));
    leds.setPixelColor(21,leds.Color(0,0,0));
    leds.setPixelColor(20,leds.Color(0,0,0));
    leds.setPixelColor(16,leds.Color(0,0,0));
    }
}
void no11(){
  for(int i=0;i<255;i++){
    leds.setPixelColor(27,leds.Color(i,0,0));
    leds.setPixelColor(23,leds.Color(i,0,0));
    leds.setPixelColor(20,leds.Color(i,0,0));
    leds.setPixelColor(16,leds.Color(i,0,0));
    leds.show();
    delay(wait);
  }
for(int i=0;i<255;i++){
    leds.setPixelColor(27,leds.Color(0,0,0));
    leds.setPixelColor(23,leds.Color(0,0,0));
    leds.setPixelColor(20,leds.Color(0,0,0));
    leds.setPixelColor(16,leds.Color(0,0,0));
  }
}

void no12(){
  for(int i=0;i<255;i++){
    leds.setPixelColor(27,leds.Color(i,0,0));
    leds.setPixelColor(26,leds.Color(i,0,0));
    leds.setPixelColor(24,leds.Color(i,0,0));
    leds.setPixelColor(22,leds.Color(i,0,0));
    leds.setPixelColor(21,leds.Color(i,0,0));
    leds.setPixelColor(20,leds.Color(i,0,0));
    leds.setPixelColor(16,leds.Color(i,0,0));
    leds.show();
    delay(wait);
  }
  for(int i=0;i<255;i++){
    leds.setPixelColor(27,leds.Color(0,0,0));
    leds.setPixelColor(26,leds.Color(0,0,0));
    leds.setPixelColor(24,leds.Color(0,0,0));
    leds.setPixelColor(22,leds.Color(0,0,0));
    leds.setPixelColor(21,leds.Color(0,0,0));
    leds.setPixelColor(20,leds.Color(0,0,0));
    leds.setPixelColor(16,leds.Color(0,0,0));
  }
}
void no13(){
  for(int i=0;i<255;i++){
    leds.setPixelColor(27,leds.Color(i,0,0));
    leds.setPixelColor(26,leds.Color(i,0,0));
    leds.setPixelColor(24,leds.Color(i,0,0));
    leds.setPixelColor(23,leds.Color(i,0,0));
    leds.setPixelColor(22,leds.Color(i,0,0));
    leds.setPixelColor(20,leds.Color(i,0,0));
    leds.setPixelColor(16,leds.Color(i,0,0));
    leds.show();
    delay(wait);
  }
  for(int i=0;i<255;i++){
    leds.setPixelColor(27,leds.Color(0,0,0));
    leds.setPixelColor(26,leds.Color(0,0,0));
    leds.setPixelColor(24,leds.Color(0,0,0));
    leds.setPixelColor(23,leds.Color(0,0,0));
    leds.setPixelColor(22,leds.Color(0,0,0));
    leds.setPixelColor(20,leds.Color(0,0,0));
    leds.setPixelColor(16,leds.Color(0,0,0));
  }
}
void no14(){
  for(int i=0;i<255;i++){
    leds.setPixelColor(27,leds.Color(i,0,0));
    leds.setPixelColor(25,leds.Color(i,0,0));
    leds.setPixelColor(24,leds.Color(i,0,0));
    leds.setPixelColor(23,leds.Color(i,0,0));
    leds.setPixelColor(20,leds.Color(i,0,0));
    leds.setPixelColor(16,leds.Color(i,0,0));
    leds.show();
    delay(wait);
  }
  for(int i=0;i<255;i++){
    leds.setPixelColor(27,leds.Color(0,0,0));
    leds.setPixelColor(25,leds.Color(0,0,0));
    leds.setPixelColor(24,leds.Color(0,0,0));
    leds.setPixelColor(23,leds.Color(0,0,0));
    leds.setPixelColor(20,leds.Color(0,0,0));
    leds.setPixelColor(16,leds.Color(0,0,0));
  }
}
void no15(){
  for(int i=0;i<255;i++){
    leds.setPixelColor(26,leds.Color(i,0,0));
    leds.setPixelColor(25,leds.Color(i,0,0));
    leds.setPixelColor(24,leds.Color(i,0,0));
    leds.setPixelColor(23,leds.Color(i,0,0));
    leds.setPixelColor(22,leds.Color(i,0,0));
    leds.setPixelColor(20,leds.Color(i,0,0));
    leds.setPixelColor(16,leds.Color(i,0,0));
    leds.show();
    delay(wait);
  }
  for(int i=0;i<255;i++){
    leds.setPixelColor(26,leds.Color(0,0,0));
    leds.setPixelColor(25,leds.Color(0,0,0));
    leds.setPixelColor(24,leds.Color(0,0,0));
    leds.setPixelColor(23,leds.Color(0,0,0));
    leds.setPixelColor(22,leds.Color(0,0,0));
    leds.setPixelColor(20,leds.Color(0,0,0));
    leds.setPixelColor(16,leds.Color(0,0,0));
  }
}
void no16(){
  for(int i=0;i<255;i++){
    leds.setPixelColor(26,leds.Color(i,0,0));
    leds.setPixelColor(25,leds.Color(i,0,0));
    leds.setPixelColor(24,leds.Color(i,0,0));
    leds.setPixelColor(23,leds.Color(i,0,0));
    leds.setPixelColor(22,leds.Color(i,0,0));
    leds.setPixelColor(21,leds.Color(i,0,0));
    leds.setPixelColor(20,leds.Color(i,0,0));
    leds.setPixelColor(16,leds.Color(i,0,0));
    leds.show();
    delay(wait);
  }
  for(int i=0;i<255;i++){
    leds.setPixelColor(26,leds.Color(0,0,0));
    leds.setPixelColor(25,leds.Color(0,0,0));
    leds.setPixelColor(24,leds.Color(0,0,0));
    leds.setPixelColor(23,leds.Color(0,0,0));
    leds.setPixelColor(22,leds.Color(0,0,0));
    leds.setPixelColor(21,leds.Color(0,0,0));
    leds.setPixelColor(20,leds.Color(0,0,0));
    leds.setPixelColor(16,leds.Color(0,0,0));
  }
}
void no17(){
  for(int i=0;i<255;i++){
    leds.setPixelColor(27,leds.Color(i,0,0));
    leds.setPixelColor(26,leds.Color(i,0,0));
    leds.setPixelColor(23,leds.Color(i,0,0));
    leds.setPixelColor(20,leds.Color(i,0,0));
    leds.setPixelColor(16,leds.Color(i,0,0));
    leds.show();
    delay(wait);
  }
  for(int i=0;i<255;i++){
    leds.setPixelColor(27,leds.Color(0,0,0));
    leds.setPixelColor(26,leds.Color(0,0,0));
    leds.setPixelColor(23,leds.Color(0,0,0));
    leds.setPixelColor(20,leds.Color(0,0,0));
    leds.setPixelColor(16,leds.Color(0,0,0));
  }
}
void no18(){
  for(int i=0;i<255;i++){
    leds.setPixelColor(27,leds.Color(i,0,0));
    leds.setPixelColor(26,leds.Color(i,0,0));
    leds.setPixelColor(25,leds.Color(i,0,0));
    leds.setPixelColor(24,leds.Color(i,0,0));
    leds.setPixelColor(23,leds.Color(i,0,0));
    leds.setPixelColor(22,leds.Color(i,0,0));
    leds.setPixelColor(21,leds.Color(i,0,0));
    leds.setPixelColor(20,leds.Color(i,0,0));
    leds.setPixelColor(16,leds.Color(i,0,0));
    leds.show();
    delay(wait);
  }
  for(int i=0;i<255;i++){
    leds.setPixelColor(27,leds.Color(0,0,0));
    leds.setPixelColor(26,leds.Color(0,0,0));
    leds.setPixelColor(25,leds.Color(0,0,0));
    leds.setPixelColor(24,leds.Color(0,0,0));
    leds.setPixelColor(23,leds.Color(0,0,0));
    leds.setPixelColor(22,leds.Color(0,0,0));
    leds.setPixelColor(21,leds.Color(0,0,0));
    leds.setPixelColor(20,leds.Color(0,0,0));
    leds.setPixelColor(16,leds.Color(0,0,0));
  }
}
void no19(){
  for(int i=0;i<255;i++){
    leds.setPixelColor(27,leds.Color(i,0,0));
    leds.setPixelColor(26,leds.Color(i,0,0));
    leds.setPixelColor(25,leds.Color(i,0,0));
    leds.setPixelColor(24,leds.Color(i,0,0));
    leds.setPixelColor(23,leds.Color(i,0,0));
    leds.setPixelColor(22,leds.Color(i,0,0));
    leds.setPixelColor(20,leds.Color(i,0,0));
    leds.setPixelColor(16,leds.Color(i,0,0));
    leds.show();
    delay(wait);
  }
  for(int i=0;i<255;i++){
    leds.setPixelColor(27,leds.Color(0,0,0));
    leds.setPixelColor(26,leds.Color(0,0,0));
    leds.setPixelColor(25,leds.Color(0,0,0));
    leds.setPixelColor(24,leds.Color(0,0,0));
    leds.setPixelColor(23,leds.Color(0,0,0));
    leds.setPixelColor(22,leds.Color(0,0,0));
    leds.setPixelColor(20,leds.Color(0,0,0));
    leds.setPixelColor(16,leds.Color(0,0,0));
  }
}
void no20(){
  for(int i=0;i<255;i++){
    leds.setPixelColor(27,leds.Color(i,0,0));
    leds.setPixelColor(26,leds.Color(i,0,0));
    leds.setPixelColor(25,leds.Color(i,0,0));
    leds.setPixelColor(23,leds.Color(i,0,0));
    leds.setPixelColor(22,leds.Color(i,0,0));
    leds.setPixelColor(21,leds.Color(i,0,0));
    leds.setPixelColor(20,leds.Color(i,0,0));
    leds.setPixelColor(19,leds.Color(i,0,0));
    leds.setPixelColor(17,leds.Color(i,0,0));
    leds.setPixelColor(15,leds.Color(i,0,0));
    leds.setPixelColor(14,leds.Color(i,0,0));
    leds.show();
    delay(wait);
  }
  for(int i=0;i<255;i++){
    leds.setPixelColor(27,leds.Color(0,0,0));
    leds.setPixelColor(26,leds.Color(0,0,0));
    leds.setPixelColor(25,leds.Color(0,0,0));
    leds.setPixelColor(23,leds.Color(0,0,0));
    leds.setPixelColor(22,leds.Color(0,0,0));
    leds.setPixelColor(21,leds.Color(0,0,0));
    leds.setPixelColor(20,leds.Color(0,0,0));
    leds.setPixelColor(19,leds.Color(0,0,0));
    leds.setPixelColor(17,leds.Color(0,0,0));
    leds.setPixelColor(15,leds.Color(0,0,0));
    leds.setPixelColor(14,leds.Color(0,0,0));
  }
}
void no21(){
  for(int i=0;i<255;i++){
    leds.setPixelColor(27,leds.Color(i,0,0));
    leds.setPixelColor(23,leds.Color(i,0,0));
    leds.setPixelColor(20,leds.Color(i,0,0));
    leds.setPixelColor(19,leds.Color(i,0,0));
    leds.setPixelColor(17,leds.Color(i,0,0));
    leds.setPixelColor(15,leds.Color(i,0,0));
    leds.setPixelColor(14,leds.Color(i,0,0));
    leds.show();
    delay(wait);
  }
  for(int i=0;i<255;i++){
    leds.setPixelColor(27,leds.Color(0,0,0));
    leds.setPixelColor(23,leds.Color(0,0,0));
    leds.setPixelColor(20,leds.Color(0,0,0));
    leds.setPixelColor(19,leds.Color(0,0,0));
    leds.setPixelColor(17,leds.Color(0,0,0));
    leds.setPixelColor(15,leds.Color(0,0,0));
    leds.setPixelColor(14,leds.Color(0,0,0));
  }
}
void no22(){
  for(int i=0;i<255;i++){
    leds.setPixelColor(27,leds.Color(i,0,0));
    leds.setPixelColor(26,leds.Color(i,0,0));
    leds.setPixelColor(24,leds.Color(i,0,0));
    leds.setPixelColor(22,leds.Color(i,0,0));
    leds.setPixelColor(21,leds.Color(i,0,0));
    leds.setPixelColor(20,leds.Color(i,0,0));
    leds.setPixelColor(19,leds.Color(i,0,0));
    leds.setPixelColor(17,leds.Color(i,0,0));
    leds.setPixelColor(15,leds.Color(i,0,0));
    leds.setPixelColor(14,leds.Color(i,0,0));
    leds.show();
    delay(wait);
  }
  for(int i=0;i<255;i++){
    leds.setPixelColor(27,leds.Color(0,0,0));
    leds.setPixelColor(26,leds.Color(0,0,0));
    leds.setPixelColor(24,leds.Color(0,0,0));
    leds.setPixelColor(22,leds.Color(0,0,0));
    leds.setPixelColor(21,leds.Color(0,0,0));
    leds.setPixelColor(20,leds.Color(0,0,0));
    leds.setPixelColor(19,leds.Color(0,0,0));
    leds.setPixelColor(17,leds.Color(0,0,0));
    leds.setPixelColor(15,leds.Color(0,0,0));
    leds.setPixelColor(14,leds.Color(0,0,0));
  }
}
void no23(){
  for(int i=0;i<255;i++){
    leds.setPixelColor(27,leds.Color(i,0,0));
    leds.setPixelColor(26,leds.Color(i,0,0));
    leds.setPixelColor(24,leds.Color(i,0,0));
    leds.setPixelColor(23,leds.Color(i,0,0));
    leds.setPixelColor(22,leds.Color(i,0,0));
    leds.setPixelColor(20,leds.Color(i,0,0));
    leds.setPixelColor(19,leds.Color(i,0,0));
    leds.setPixelColor(17,leds.Color(i,0,0));
    leds.setPixelColor(15,leds.Color(i,0,0));
    leds.setPixelColor(14,leds.Color(i,0,0));
    leds.show();
    delay(wait);
  }
  for(int i=0;i<255;i++){
    leds.setPixelColor(27,leds.Color(0,0,0));
    leds.setPixelColor(26,leds.Color(0,0,0));
    leds.setPixelColor(24,leds.Color(0,0,0));
    leds.setPixelColor(23,leds.Color(0,0,0));
    leds.setPixelColor(22,leds.Color(0,0,0));
    leds.setPixelColor(20,leds.Color(0,0,0));
    leds.setPixelColor(19,leds.Color(0,0,0));
    leds.setPixelColor(17,leds.Color(0,0,0));
    leds.setPixelColor(15,leds.Color(0,0,0));
    leds.setPixelColor(14,leds.Color(0,0,0));
  }
}
void no24(){
  for(int i=0;i<255;i++){
    leds.setPixelColor(27,leds.Color(i,0,0));
    leds.setPixelColor(25,leds.Color(i,0,0));
    leds.setPixelColor(24,leds.Color(i,0,0));
    leds.setPixelColor(23,leds.Color(i,0,0));
    leds.setPixelColor(20,leds.Color(i,0,0));
    leds.setPixelColor(19,leds.Color(i,0,0));
    leds.setPixelColor(17,leds.Color(i,0,0));
    leds.setPixelColor(15,leds.Color(i,0,0));
    leds.setPixelColor(14,leds.Color(i,0,0));
    leds.show();
    delay(wait);
  }
  for(int i=0;i<255;i++){
    leds.setPixelColor(27,leds.Color(0,0,0));
    leds.setPixelColor(25,leds.Color(0,0,0));
    leds.setPixelColor(24,leds.Color(0,0,0));
    leds.setPixelColor(23,leds.Color(0,0,0));
    leds.setPixelColor(20,leds.Color(0,0,0));
    leds.setPixelColor(19,leds.Color(0,0,0));
    leds.setPixelColor(17,leds.Color(0,0,0));
    leds.setPixelColor(15,leds.Color(0,0,0));
    leds.setPixelColor(14,leds.Color(0,0,0));
  }
}
void no25(){
  for(int i=0;i<255;i++){
    leds.setPixelColor(26,leds.Color(i,0,0));
    leds.setPixelColor(25,leds.Color(i,0,0));
    leds.setPixelColor(24,leds.Color(i,0,0));
    leds.setPixelColor(23,leds.Color(i,0,0));
    leds.setPixelColor(22,leds.Color(i,0,0));
    leds.setPixelColor(20,leds.Color(i,0,0));
    leds.setPixelColor(19,leds.Color(i,0,0));
    leds.setPixelColor(17,leds.Color(i,0,0));
    leds.setPixelColor(15,leds.Color(i,0,0));
    leds.setPixelColor(14,leds.Color(i,0,0));
    leds.show();
    delay(wait);
  }
  for(int i=0;i<255;i++){
    leds.setPixelColor(26,leds.Color(0,0,0));
    leds.setPixelColor(25,leds.Color(0,0,0));
    leds.setPixelColor(24,leds.Color(0,0,0));
    leds.setPixelColor(23,leds.Color(0,0,0));
    leds.setPixelColor(22,leds.Color(0,0,0));
    leds.setPixelColor(20,leds.Color(0,0,0));
    leds.setPixelColor(19,leds.Color(0,0,0));
    leds.setPixelColor(17,leds.Color(0,0,0));
    leds.setPixelColor(15,leds.Color(0,0,0));
    leds.setPixelColor(14,leds.Color(0,0,0));
  }
}
void no26(){
  for(int i=0;i<255;i++){
    leds.setPixelColor(26,leds.Color(i,0,0));
    leds.setPixelColor(25,leds.Color(i,0,0));
    leds.setPixelColor(24,leds.Color(i,0,0));
    leds.setPixelColor(23,leds.Color(i,0,0));
    leds.setPixelColor(22,leds.Color(i,0,0));
    leds.setPixelColor(21,leds.Color(i,0,0));
    leds.setPixelColor(20,leds.Color(i,0,0));
    leds.setPixelColor(19,leds.Color(i,0,0));
    leds.setPixelColor(17,leds.Color(i,0,0));
    leds.setPixelColor(15,leds.Color(i,0,0));
    leds.setPixelColor(14,leds.Color(i,0,0));
    leds.show();
    delay(wait);
  }
  for(int i=0;i<255;i++){
    leds.setPixelColor(26,leds.Color(0,0,0));
    leds.setPixelColor(25,leds.Color(0,0,0));
    leds.setPixelColor(24,leds.Color(0,0,0));
    leds.setPixelColor(23,leds.Color(0,0,0));
    leds.setPixelColor(22,leds.Color(0,0,0));
    leds.setPixelColor(21,leds.Color(0,0,0));
    leds.setPixelColor(20,leds.Color(0,0,0));
    leds.setPixelColor(19,leds.Color(0,0,0));
    leds.setPixelColor(17,leds.Color(0,0,0));
    leds.setPixelColor(15,leds.Color(0,0,0));
    leds.setPixelColor(14,leds.Color(0,0,0));
  }
}
void no27(){
  for(int i=0;i<255;i++){
    leds.setPixelColor(27,leds.Color(i,0,0));
    leds.setPixelColor(26,leds.Color(i,0,0));
    leds.setPixelColor(23,leds.Color(i,0,0));
    leds.setPixelColor(20,leds.Color(i,0,0));
    leds.setPixelColor(19,leds.Color(i,0,0));
    leds.setPixelColor(17,leds.Color(i,0,0));
    leds.setPixelColor(15,leds.Color(i,0,0));
    leds.setPixelColor(14,leds.Color(i,0,0));
    leds.show();
    delay(wait);
  }
  for(int i=0;i<255;i++){
    leds.setPixelColor(27,leds.Color(0,0,0));
    leds.setPixelColor(26,leds.Color(0,0,0));
    leds.setPixelColor(23,leds.Color(0,0,0));
    leds.setPixelColor(20,leds.Color(0,0,0));
    leds.setPixelColor(19,leds.Color(0,0,0));
    leds.setPixelColor(17,leds.Color(0,0,0));
    leds.setPixelColor(15,leds.Color(0,0,0));
    leds.setPixelColor(14,leds.Color(0,0,0));
  }
}
void no28(){
  for(int i=0;i<255;i++){
    leds.setPixelColor(27,leds.Color(i,0,0));
    leds.setPixelColor(26,leds.Color(i,0,0));
    leds.setPixelColor(25,leds.Color(i,0,0));
    leds.setPixelColor(24,leds.Color(i,0,0));
    leds.setPixelColor(23,leds.Color(i,0,0));
    leds.setPixelColor(22,leds.Color(i,0,0));
    leds.setPixelColor(21,leds.Color(i,0,0));
    leds.setPixelColor(20,leds.Color(i,0,0));
    leds.setPixelColor(19,leds.Color(i,0,0));
    leds.setPixelColor(17,leds.Color(i,0,0));
    leds.setPixelColor(15,leds.Color(i,0,0));
    leds.setPixelColor(14,leds.Color(i,0,0));
    leds.show();
    delay(wait);
  }
  for(int i=0;i<255;i++){
    leds.setPixelColor(27,leds.Color(0,0,0));
    leds.setPixelColor(26,leds.Color(0,0,0));
    leds.setPixelColor(25,leds.Color(0,0,0));
    leds.setPixelColor(24,leds.Color(0,0,0));
    leds.setPixelColor(23,leds.Color(0,0,0));
    leds.setPixelColor(22,leds.Color(0,0,0));
    leds.setPixelColor(21,leds.Color(0,0,0));
    leds.setPixelColor(20,leds.Color(0,0,0));
    leds.setPixelColor(19,leds.Color(0,0,0));
    leds.setPixelColor(17,leds.Color(0,0,0));
    leds.setPixelColor(15,leds.Color(0,0,0));
    leds.setPixelColor(14,leds.Color(0,0,0));
  }
}
void no29(){
  for(int i=0;i<255;i++){
    leds.setPixelColor(27,leds.Color(i,0,0));
    leds.setPixelColor(26,leds.Color(i,0,0));
    leds.setPixelColor(25,leds.Color(i,0,0));
    leds.setPixelColor(24,leds.Color(i,0,0));
    leds.setPixelColor(23,leds.Color(i,0,0));
    leds.setPixelColor(22,leds.Color(i,0,0));
    leds.setPixelColor(20,leds.Color(i,0,0));
    leds.setPixelColor(19,leds.Color(i,0,0));
    leds.setPixelColor(17,leds.Color(i,0,0));
    leds.setPixelColor(15,leds.Color(i,0,0));
    leds.setPixelColor(14,leds.Color(i,0,0));
    leds.show();
    delay(wait);
  }
  for(int i=0;i<255;i++){
    leds.setPixelColor(27,leds.Color(0,0,0));
    leds.setPixelColor(26,leds.Color(0,0,0));
    leds.setPixelColor(25,leds.Color(0,0,0));
    leds.setPixelColor(24,leds.Color(0,0,0));
    leds.setPixelColor(23,leds.Color(0,0,0));
    leds.setPixelColor(22,leds.Color(0,0,0));
    leds.setPixelColor(20,leds.Color(0,0,0));
    leds.setPixelColor(19,leds.Color(0,0,0));
    leds.setPixelColor(17,leds.Color(0,0,0));
    leds.setPixelColor(15,leds.Color(0,0,0));
    leds.setPixelColor(14,leds.Color(0,0,0));
  }
}
void no30(){
  for(int i=0;i<255;i++){
    leds.setPixelColor(27,leds.Color(i,0,0));
    leds.setPixelColor(26,leds.Color(i,0,0));
    leds.setPixelColor(25,leds.Color(i,0,0));
    leds.setPixelColor(23,leds.Color(i,0,0));
    leds.setPixelColor(22,leds.Color(i,0,0));
    leds.setPixelColor(21,leds.Color(i,0,0));
    leds.setPixelColor(20,leds.Color(i,0,0));
    leds.setPixelColor(19,leds.Color(i,0,0));
    leds.setPixelColor(17,leds.Color(i,0,0));
    leds.setPixelColor(16,leds.Color(i,0,0));
    leds.setPixelColor(15,leds.Color(i,0,0));
    leds.show();
    delay(wait);
  }
  for(int i=0;i<255;i++){
    leds.setPixelColor(27,leds.Color(0,0,0));
    leds.setPixelColor(26,leds.Color(0,0,0));
    leds.setPixelColor(25,leds.Color(0,0,0));
    leds.setPixelColor(23,leds.Color(0,0,0));
    leds.setPixelColor(22,leds.Color(0,0,0));
    leds.setPixelColor(21,leds.Color(0,0,0));
    leds.setPixelColor(20,leds.Color(0,0,0));
    leds.setPixelColor(19,leds.Color(0,0,0));
    leds.setPixelColor(17,leds.Color(0,0,0));
    leds.setPixelColor(16,leds.Color(0,0,0));
    leds.setPixelColor(15,leds.Color(0,0,0));
  }
}

// Loop through changing R, G, and B colors
// Each color fades in from off (i=0) to fully on (i=255)
void loop() {
  for(int i=0;i<255;i++){
    switch(i){
      case 0: no1(); break;
      case 1: no2(); break;
      case 2: no3(); break;
      case 3: no4(); break;
      case 4: no5(); break;
      case 5: no6(); break;
      case 6: no7(); break;
      case 7: no8(); break;
      case 8: no9(); break;
      case 9: no10(); break;
      case 10: no11(); break;
      case 11: no12(); break;
      case 12: no13(); break;
      case 13: no14(); break;
      case 14: no15(); break;
      case 15: no16(); break;
      case 16: no17(); break;
      case 17: no18(); break;
      case 18: no19(); break;
      case 19: no20(); break;
      case 20: no21(); break;
      case 21: no22(); break;
      case 22: no23(); break;
      case 23: no24(); break;
      case 24: no25(); break;
      case 25: no26(); break;
      case 26: no27(); break;
      case 27: no28(); break;
      case 28: no29(); break;
      case 29: no30(); break;
    }
  }
  
  
  /*for(int i=0; i<255; i++) {            // Loop through next color change
    leds.setPixelColor(0, leds.Color(0, i, 0)); 
    leds.setPixelColor(1, leds.Color(0, 0, i)); 
    leds.show(); 
    delay(wait); 
  }
  for(int i=0; i<255; i++) {            // Loop through next color change
    leds.setPixelColor(0, leds.Color(0, 0, i));
    leds.setPixelColor(1, leds.Color(i, 0, 0)); 
    leds.show(); 
    delay(wait);
  }*/
}
