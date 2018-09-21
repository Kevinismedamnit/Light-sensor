#include "Button.h"
/*button header file
file containing all functions 
relating to buton ie
(i) processing button press
(ii)debouncing button
*/
#ifndef _button_h
#define _button_h

int redLed = 2;
int blueLed = 3;
int greenLed = 4;
int ms = 500;
// define keyword is used to state constants
#define button 5
#define button1 6
#define PI 3.142
#define MAX_TEMO 100 //maximum temperature of room

// function prototypes
/*Function for blinking an LED
 * requires pin number 
 * requires time delay
 */
void blinkLed (int led, int ms);// function prototype.. should be in a header file
// function used to display my name hence requires no parameters and it prints my name
void displayName (void);
// processing the button press functionality
void process_button_state (int button_pressed)
// function to add two numbers 
int add_numbers (int x, int y);

#endif

