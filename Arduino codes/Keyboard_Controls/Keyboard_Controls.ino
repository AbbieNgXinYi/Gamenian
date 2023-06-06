#include "Keyboard.h"

//declaring button pins
const int UPpin = 8;
const int DOWNpin = 9;
const int LEFTpin = 10;
const int RIGHTpin = 11;

int UPstate = 0;
int DOWNstate = 0;
int LEFTstate = 0;
int RIGHTstate = 0;

int previousUPState = HIGH;
int previousDOWNState = HIGH;
int previousLEFTState = HIGH;
int previousRIGHTState = HIGH;

void setup() {
//declare the buttons as input_pullup
  pinMode(UPpin, INPUT_PULLUP);
  pinMode(DOWNpin, INPUT_PULLUP);
  pinMode(LEFTpin, INPUT_PULLUP);
  pinMode(RIGHTpin, INPUT_PULLUP);

  Keyboard.begin();

}

void loop() {

//checking the state of the button
int UPstate = digitalRead(UPpin);
int DOWNstate = digitalRead(DOWNpin);
int LEFTstate = digitalRead(LEFTpin);
int RIGHTstate = digitalRead(RIGHTpin);

//replaces button press with UP arrow
if (UPstate == LOW && previousUPState == HIGH) {

// and it's currently pressed:
  Keyboard.press(218);
  delay(1);

} 
else{
// and when it's currently released:
  Keyboard.releaseAll();
  delay(1);
}

if (DOWNstate == LOW && previousDOWNState == HIGH) {
  Keyboard.press(217);
  delay(1);
} 
else{
  Keyboard.releaseAll();
  delay(1);
}

if (LEFTstate == LOW && previousLEFTState == HIGH) {
  Keyboard.press(216);
  delay(1);
} 
else{
  Keyboard.releaseAll();
  delay(1);
}

if (RIGHTstate == LOW && previousRIGHTState == HIGH) {
  Keyboard.press(215);
  delay(1);
} 
else{
  Keyboard.releaseAll();
  delay(1);
}

previousUPState = UPstate;
previousDOWNState = DOWNstate;
previousLEFTState = LEFTstate;
previousRIGHTState = RIGHTstate;

}



