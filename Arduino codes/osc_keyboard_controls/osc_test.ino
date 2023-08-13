//DHCP-based OSC server test code
//for use with IDE 1.0.5
//for use with W5100 or W5200 based ethernet shields

#include <SPI.h>
#include <Ethernet.h>
#include <EthernetUdp.h>
#include <OSCBundle.h>
#include <Keyboard.h>


// you can find this written on the board of some Arduino Ethernets or shields
byte mac[] = { 0xD8, 0xBB, 0xC1, 0xFB, 0x9C, 0x9C}; 

// NOTE: Alternatively, you can assign a fixed IP to configure your Ethernet shield.
byte ip[] = { 192, 168, 77, 151};

int serverPort  = 8000; //TouchOSC (incoming port)
int destPort = 9000;    //TouchOSC (outgoing port)
int ledPin =  13;       //pin 13 on Arduino Uno. Pin 6 on a Teensy++2
int ledState = LOW;
float osc_data = 0;

//Create UDP message object
EthernetUDP Udp;

void setup(){
  Serial.begin(9600); //9600 for a "normal" Arduino board (Uno for example). 115200 for a Teensy ++2 
  Serial.println("OSC test");

  // start the Ethernet connection:
  // NOTE: Alternatively, you can assign a fixed IP to configure your
  //       Ethernet shield.
  Ethernet.begin(mac, ip);   
  if (Ethernet.begin(mac) == 0) {
    Serial.println("Failed to configure Ethernet using DHCP");
    // no point in carrying on, so do nothing forevermore:
    while(true);
  }
  // print your local IP address:
  Serial.print("Arduino IP address: ");
  for (byte thisByte = 0; thisByte < 4; thisByte++) {
    // print the value of each byte of the IP address:
    Serial.print(Ethernet.localIP()[thisByte], DEC);
    Serial.print("."); 
  }

  Udp.begin(serverPort);

  Keyboard.begin();
}

void loop(){
  //process received messages
  OSCMsgReceive();
} 

void OSCMsgReceive(){
  OSCMessage msgIN;
  int size;
  if((size = Udp.parsePacket())>0){
    while(size--)
      msgIN.fill(Udp.read());
    if(!msgIN.hasError()){
      msgIN.route("/UDLR/toggle1",toggleOnOff);
      msgIN.route("/WASD/toggle2",toggleOnOff);
    }
  }
}

void toggleOnOff(OSCMessage &msg, int addrOffset){
  osc_data = msg.getFloat(0);
  osc_data2 = msg.getFloat(0);

if (osc_data == 218) {
  Keyboard.press(218);
  Serial.println("Up");
  delay(20);
}
elseif (osc_data == 217){
  Keyboard.press(217);
  Serial.println("Down");
  delay(20);
}
elseif (osc_data == 216) {
  Keyboard.press(216);
  Serial.println("Left");
  delay(20);
} 
elseif (osc_data == 215) {
  Keyboard.press(215);
  Serial.println("Right");
  delay(20);
}
elseif (osc_data == 180) {
  Keyboard.press(180);
  Serial.println("Space");
  delay(20);
}
else{
  Keyboard.releaseAll();
  delay(1);
}


if (osc_data2 == 162) {
  Keyboard.press(162);
  Serial.println("w");
  delay(20);
}
elseif (osc_data2 == 140){
  Keyboard.press(140);
  Serial.println("a");
  delay(20);
}
elseif (osc_data2 == 158) {
  Keyboard.press(158);
  Serial.println("s");
  delay(20);
} 
elseif (osc_data2 == 143) {
  Keyboard.press(143);
  Serial.println("d");
  delay(20);
} 
elseif (osc_data2 == 177) {
  Keyboard.press(177);
  Serial.println("esc");
  delay(20);
}
else{
  Keyboard.releaseAll();
  delay(1);
}
}




