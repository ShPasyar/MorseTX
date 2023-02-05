/*MorseTx is a Librery to Send Standard ITU Morse Codes by Arduino.
 * this Library is Suitable for Radio Amateurs CW experiments or  Setup Beacon Stations.
 * Created by Shahryar Pasyar(EP4SP)  February 2023.
 * 
 * this example Sends Predefine Text on Pin 13 & 20 Words Per Minute Speed.
 */

#include <MorseTX.h>  //MorseTX Librery
//            Pin,Speed(WPM)
MorseTX myMorse(13,20); //define ObjectName to send Morse codes on Pin-->13 , 20 Words Per Minute(WPM)

void setup() {
}

void loop() {
  myMorse.Send("cq cq cq de ep4sp ep4sp ep4sp k"); //Send("Your Text") or String Variable---- Send(String_Var) 
  delay(1500);
  myMorse.Send("de EP4SP QRZ"); //Lower or Upper Case of Letters is not important
  delay(3000);
}
