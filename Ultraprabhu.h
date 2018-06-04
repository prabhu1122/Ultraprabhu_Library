#ifndef Ultraprabhu_H
#define Ultraprabhu_H

 #if(ARDUINO >= 100)
   #include "Arduino.h"
 #else
   #include "WProgram"
 #endif
 
//creat a class 

class Ultrasenc{       
 
  public:
  //public Properties
         int x;
         int y;
         float cm;
         float inch;
         float feet;
  //public Methods
         Ultrasenc(int,int);               
         void distFind();
         float distFind_cm();               
         float distFind_inch();             
         float distFind_feet();             
         void begin(int baudRate = 9600);   

  private:
  //Private Properties 
         unsigned long _duration;
         int _trig;
         int _echo; 
  //Private methods 
};
#endif 
