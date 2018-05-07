
///////**Prabhat Yadav**///////
#include <Ultraprabhu.h>

Ultrasenc ultra(10,11); //ultra(triggerPin,echoPin);
 
#define led 9        //set pin for 
#define buzzerPin 12 
float cmDist = 0;    //initialise feetDist
float val = 0;
float val1 = 0;
int threshold = 50; //minimum length to detect;
void setup() { 
    //Serial.begin(9600);
    ultra.begin(9600); //set baudRate 9600
    pinMode(led,OUTPUT);
    pinMode(buzzerPin,OUTPUT);
    analogWrite(led,0);
}
    
void loop() { 
        //call function to find dist in cm;
        cmDist = ultra.distFind_cm(); 
    
        //Print value of distance in feet on serial monitor; 
        val = map(cmDist,threshold,0,0,255);
        
        //val1 value buzzer to make delay for put buzzerpin in low state; 
        val1 = map(cmDist,threshold,0,255,0);
        
        //give the analogvalue of val on led pin;
        if(cmDist<=threshold){
        analogWrite(led,val);
        buzzer(val1);
        }
        else if(cmDist>threshold){
          analogWrite(led,0);
        }
        //print the value of distance on the serial monitor;
        Serial.println(cmDist); 
}

//////////////////////////////////////////////////////////
//code for buzzer ;
void buzzer(float a){    
    
    //set the buzzer pin HIGH;
    digitalWrite(buzzerPin,HIGH);
    
    delay(100);   //put delay of 100 ms;
    
    //set the buzzer pin LOW;
    digitalWrite(buzzerPin,LOW);
    
    delay(a);      //put the delay according to beep value;
    
}
