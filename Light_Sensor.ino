#include "Button.h"


int buttonState = 0;         // variable for reading the pushbutton status



void setup() {
  // Setting the red, green and blue LEDs as outputs
pinMode (redLed, OUTPUT);
pinMode (greenLed, OUTPUT);
pinMode (blueLed, OUTPUT);
// Initialize serial control with 9600 baud rate/speed
Serial.begin (9600);
}

void loop() {
  // calls the blinkLed function with redLed parameter
  blinkLed (redLed, 500);
  blinkLed (blueLed, 1000);
  displayName ();
  process_button_state (button);
  //process_button_state (button1);
}
