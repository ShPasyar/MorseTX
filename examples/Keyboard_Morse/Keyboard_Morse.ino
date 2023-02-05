/*MorseTx is a Librery to Send Standard ITU Morse Codes by Arduino.
 * this Library is Suitable for Radio Amateurs CW experiments or  Setup Beacon Stations.
 * Created by Shahryar Pasyar(EP4SP)  February 2023.
 * 
 * this example Sends Text Entered from Keyboard by Arduino Serial Monitor on Pin 13 & 20 Words Per Minute Speed.
 */

#include <MorseTX.h>  //MorseTX Librery

//-------------Pin,Speed
MorseTX cw(13,20); //define ObjectName to send Morse codes on Pin-->13 , 20 Words Per Minute(20 WPM)
String code("");
char letter;
void setup() {
  Serial.begin(9600);
}

void loop() {
  while(Serial.available()){
   letter=Serial.read();  //Read letters by Serial Monitor 
   code+=letter;  //Make String From Letters 
  }
  if(code!=""){
    Serial.print(code);
    cw.Send(code); //Create Morse Code
  }
  code="";
}
