#include "Keyboard.h"
#include "Mouse.h"

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

// set pin numbers for switch, joystick axes, and LED:
const int switchPin = 2;    // switch to turn on and off mouse control
const int mouseClick = 6;  // input pin for the mouse pushButton
const int xAxis = A0;       // joystick X axis
const int yAxis = A1;       // joystick Y axis
const int ledPin = 5;       // Mouse control LED

// parameters for reading the joystick:
int range = 8;             // output range of X or Y movement
int responseDelay = 5;      // response delay of the mouse, in ms
int threshold = range / 4;  // resting threshold
int center = range / 2;     // resting position value

bool mouseIsActive = false;  // whether or not to control the mouse
int lastSwitchState = LOW;   // previous switch state

void setup() {
//declare the buttons as input_pullup
  pinMode(UPpin, INPUT_PULLUP);
  pinMode(DOWNpin, INPUT_PULLUP);
  pinMode(LEFTpin, INPUT_PULLUP);
  pinMode(RIGHTpin, INPUT_PULLUP);

  Keyboard.begin();

  pinMode(switchPin, INPUT);  // the switch pin
  pinMode(ledPin, OUTPUT);    // the LED pin
  // take control of the mouse:
  Mouse.begin();

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


// read the switch:
  int switchState = digitalRead(switchPin);
  // if it's changed and it's high, toggle the mouse state:
  if (switchState != lastSwitchState) {
    if (switchState == HIGH) {
      mouseIsActive = !mouseIsActive;
      // turn on LED to indicate mouse state:
      digitalWrite(ledPin, mouseIsActive);
    }
  }
  // save switch state for next comparison:
  lastSwitchState = switchState;

  // read and scale the two axes:
  int xReading = readAxis(A0);
  int yReading = readAxis(A1);

  // if the mouse control state is active, move the mouse:
  if (mouseIsActive) {
    Mouse.move(xReading, yReading, 0);
  }

  // read the mouse button and click or not click:
  // if the mouse button is pressed:
  if (digitalRead(mouseClick) == HIGH) {
    // if the mouse is not pressed, press it:
    if (!Mouse.isPressed(MOUSE_LEFT)) {
      Mouse.press(MOUSE_LEFT);
    }
  }
  // else the mouse button is not pressed:
  else {
    // if the mouse is pressed, release it:
    if (Mouse.isPressed(MOUSE_LEFT)) {
      Mouse.release(MOUSE_LEFT);
    }
  }

  delay(responseDelay);
}

/*
  reads an axis (0 or 1 for x or y) and scales the analog input range to a range
  from 0 to <range>
*/

int readAxis(int thisAxis) {
  // read the analog input:
  int reading = analogRead(thisAxis);

  // map the reading from the analog input range to the output range:
  reading = map(reading, 0, 1023, 0, range);

  // if the output reading is outside from the rest position threshold, use it:
  int distance = reading - center;

  if (abs(distance) < threshold) {
    distance = 0;
  }

  // return the distance for this axis:
  return distance;
}


