#ifndef tl
#define tl

 #if(ARDUINO >= 100)
   #include "Arduino.h"
 #else
   #include "WProgram"
 #endif
 
//creat a class 

class Ultrasenc{              
  //code written in this section can be use in main sketch
  public:
  //public Properties
         int x;
         int y;
         float cm;
         float inch;
         float feet;
  //public Methods
         Ultrasenc(int,int);                //constructor
         void distFind();                   //method for find distance has no return type 
         float distFind_cm();               //another method to find dist in cm and return type is float
         float distFind_inch();             //another method to find dist in inch and return type is float 
         float distFind_feet();             //another method to find dist in feet and return type is float 
         void begin(int baudRate = 9600);   //set the baudRate for serial moniter default value is 9600

  private:
  //code written in this section can't be use in main sketch
  //Private Properties 
         unsigned long _duration;
         int _trig;
         int _echo; 
  //Private methods 
};
#endif 
