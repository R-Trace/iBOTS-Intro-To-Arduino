// Development Plan: Commit the code each time a step is completed.
// [x ] Write and build the boilerplate code for Arduino (#include<Arduino.h>, setup(), loop())
// [x ] Open the simulator
// [x] Make the red LED flash on and off once every 50 milliseconds.
// [ ] Make the red LED flash on and off only if one of the buttons is being pressed.
// [ ] Turn on an LED when the button of a corresponding color is held down.
// [ ] The blue LED should be different; it should turn off when its button is pressed, not on.
// [ ] The green LED should be a switch; when its button is pressed, it should change from staying on to staying off, then go back the next time it's pressed.
// [ ] When the red button is pressed, it should turn on for a couple of seconds, then automatically turn back off.
// [ ] All buttons' LEDs should respond as soon as they are pressed.

// red 3
//green 4
//blue 5

#include<Arduino.h>

bool isOn = true;

void setup(){
pinMode(3, OUTPUT);
pinMode(9, INPUT);
pinMode(10, INPUT);
pinMode(11, INPUT);


}

void loop(){
int pinState = digitalRead(9);
if (pinState == HIGH);
{digitalWrite(3, HIGH);
delay(50);
digitalWrite(3, LOW);
delay(50);
}


}