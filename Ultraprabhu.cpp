#include "Ultraprabhu.h"    
#include "Arduino.h"

Ultrasenc::Ultrasenc(int x,int y){  //create a constructor
  
  _trig = x;
  _echo = y; 
}

//

void Ultrasenc::distFind(){

  digitalWrite(_trig,HIGH);  
  delay(10);                 
  digitalWrite(_trig,LOW);   

  _duration = pulseIn(_echo,HIGH)/2;   //check the duration of echopin to be high   

  float cm = _duration/29;
  float inch = _duration/72;
  float feet = _duration/864;
  Serial.print("cm: ");
  Serial.print(cm);
  Serial.print(", feet: ");
  Serial.print(feet);
  Serial.print(", inch: ");
  Serial.println(inch);
  
}

float Ultrasenc::distFind_cm(){

  digitalWrite(_trig,HIGH);  
  delay(10);                 
  digitalWrite(_trig,LOW);   


  _duration = pulseIn(_echo,HIGH)/2;
  cm = _duration/29;

  return cm;
}


float Ultrasenc::distFind_inch(){

  digitalWrite(_trig,HIGH);  
  delay(10);                 
  digitalWrite(_trig,LOW);   


  _duration = pulseIn(_echo,HIGH)/2;
  inch = _duration/72;

  return inch;
}

float Ultrasenc::distFind_feet(){

  digitalWrite(_trig,HIGH);  
  delay(10);                 
  digitalWrite(_trig,LOW);   


  _duration = pulseIn(_echo,HIGH)/2;
  feet = _duration/(72*12);

  return feet;
}

void Ultrasenc::begin(int baudRate){
  Serial.begin(baudRate);
  pinMode(_trig,OUTPUT);
  pinMode(_echo,INPUT);
}


