/*MorseTx is a Librery to Send Standard ITU Morse Codes by Arduino.
 * this Library is Suitable for Radio Amateurs or Beacon Stations.
 * Created by Shahryar Pasyar(EP4SP)  February 2023
 */
 #ifndef MorseTX_h
 #define MorseTX_h
 
class MorseTX{
  public:
  MorseTX(int pin,int Speed); //Constructor
  void dash();
  void dot();
  void Send(String text) ;
  private:
  int _pin,_speed,_dash,_dot;
  String _text;
  char _c;
  };
  

 #endif
