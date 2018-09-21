#include "Button.h"

/*Function for blinking an LED
 * requires pin number 
 * requires time delay
 */
void blinkLed (int led, int ms) // function prototype.. should be in a header file
 {
    digitalWrite(led, HIGH);
    delay(ms);
    digitalWrite(led, LOW);
    delay(ms);


 }
// function used to display my name hence requires no parameters and it prints my name
void displayName (void){


Serial.println("WTF MATE");



}
// processing the button press functionality
void process_button_state (int button_pressed){
 buttonState= digitalRead(button);
 if (buttonState == HIGH)
 {
  // turn off led and display on serial "led is off"
  digitalWrite(redLed, LOW);
  Serial.print("red led is off");
 }
 else
 {
   // turn on led and display on serial "led is on"
  digitalWrite(redLed, HIGH);
  Serial.print("red led is on");
 }

}
// function to add two numbers 
int add_numbers (int x, int y){

return (x+y);


}