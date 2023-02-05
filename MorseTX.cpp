/*MorseTx is a Librery to Send Standard ITU Morse Codes by Arduino.
 * this Library is Suitable for Radio Amateurs or Beacon Stations.
 * Created by Shahryar Pasyar(EP4SP)  February 2023
 */
 #include <Arduino.h>
 #include "MorseTX.h"
//**************************Constructor*************************************************
 MorseTX::MorseTX(int pin,int Speed){
  _pin=pin;
  _speed=Speed; //WPM
  _dot=1200/_speed; //Formula:standart unit according to speed(Word Per Minute'WPM') 
  _dash=3*_dot; 
  pinMode(_pin,OUTPUT);
 } 
//**************************Send Function************************************************
 void MorseTX::Send(String text){ //Translate text to Morse code and send
  _text=text;
  _text.toLowerCase();
  for(int i=0;i<_text.length();i++){
   _c=_text[i];
   
   switch (_c){
   case 'a':  //.-
   dot();
   dash();
   delay(2*_dot); 
   break;
   
   case 'b':  //-...
   dash();
   dot();
   dot();
   dot();
   delay(2*_dot); 
   break;

   case 'c':  //-.-.
   dash();
   dot();
   dash();
   dot();
   delay(2*_dot);
   break;
    
   case 'd':  //-.. 
   dash();
   dot();
   dot(); 
   delay(2*_dot);
   break;

  case 'e': //.
  dot();
  delay(2*_dot);
  break;

  case 'f': //..-.
  dot();
  dot();
  dash();
  dot();
  delay(2*_dot);
  break;

  case 'g': //--.
  dash();
  dash();
  dot();
  delay(2*_dot);
  break;

  case 'h': //....
  dot();
  dot();
  dot();
  dot();
  delay(2*_dot);
  break;

  case 'i':  //..
  dot();
  dot();
  delay(2*_dot);
  break;

  case 'j': //.---
  dot();
  dash();
  dash();
  dash();
  delay(2*_dot);
  break;
  
  case 'k': //-.- 
  dash();
  dot();
  dash();
  delay(2*_dot);
  break;

  case 'l': //.-..
  dot();
  dash();
  dot();
  dot();
  delay(2*_dot);
  break;

  case 'm': //--
  dash();
  dash();
  delay(2*_dot);
  break;

  case 'n': //-.
  dash();
  dot();
  delay(2*_dot);
  break;

  case 'o': //---
  dash();
  dash();
  dash();
  delay(2*_dot);
  break;

  case 'p': //.--.
  dot();
  dash();
  dash();
  dot();
  delay(2*_dot);
  break;

  case 'q': //--.-
  dash();
  dash();
  dot();
  dash();
  delay(2*_dot);
  break;

  case 'r': //.-.
  dot();
  dash();
  dot();
  delay(2*_dot);
  break;

  case 's': //...
  dot();
  dot();
  dot();
  delay(2*_dot);
  break;

  case 't': //-
  dash();
  delay(2*_dot);
  break;

  case 'u': //..-
  dot();
  dot();
  dash();
  delay(2*_dot);
  break;

  case 'v': //...-
  dot();
  dot();
  dot();
  dash();
  delay(2*_dot);
  break;

  case 'w': //.--
  dot();
  dash();
  dash();
  delay(2*_dot);
  break;

  case 'x': //-..-
  dash();
  dot();
  dot();
  dash();
  delay(2*_dot);
  break;
  
  case 'y': //-.--
  dash();
  dot();
  dash();
  dash();
  delay(2*_dot);
  break;

  case 'z': //--..
  dash();
  dash();
  dot();
  dot();
  delay(2*_dot);
  break;

  case '1': //.----
  dot();
  dash();
  dash();
  dash();
  dash();
  delay(2*_dot);
  break;

  case '2': //..---
  dot();
  dot();
  dash();
  dash();
  dash();
  delay(2*_dot);
  break;

  case '3': //...--
  dot();
  dot();
  dot();
  dash();
  dash();
  delay(2*_dot);
  break;

  case '4': //....-
  dot();
  dot();
  dot();
  dot();
  dash();
  delay(2*_dot);
  break;

  case '5': //.....
  dot();
  dot();
  dot();
  dot();
  dot();
  delay(2*_dot);
  break;

  case '6': //-....
  dash();
  dot();
  dot();
  dot();
  dot();
  delay(2*_dot);
  break;

  case '7': //--...
  dash();
  dash();
  dot();
  dot();
  dot();
  delay(2*_dot);
  break;

  case '8': //---..
  dash();
  dash();
  dash();
  dot();
  dot();
  delay(2*_dot);
  break;

  case '9': //----.
  dash();
  dash();
  dash();
  dash();
  dot();
  delay(2*_dot);
  break;

  case '0': //-----
  dash();
  dash();
  dash();
  dash();
  dash();
  delay(2*_dot);
  break;

  case ' ':
  delay(4*_dot); //Space delay between Words
  break; 
 }//end of switch    
    }//end of for loop
 }//end of Send() Function

//**************************dot Function*********************************************
 void MorseTX::dot()
{
   digitalWrite(_pin,HIGH);
   delay(_dot);
   digitalWrite(_pin,LOW);
   delay(_dot);
//**************************dash Function*********************************************    
}
void MorseTX::dash(){
   digitalWrite(_pin,HIGH);
   delay(_dash);
   digitalWrite(_pin,LOW);
   delay(_dot); 
}
