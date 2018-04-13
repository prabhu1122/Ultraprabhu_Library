
#include <Ultraprabhu.h>

Ultrasenc ultra(10,11); //ultra(triggerPin,echoPin);
 
#define led 9
#define buzzerPin 12
float cmDist = 0; //initialise feetDist

void setup() { 
    //Serial.begin(9600);
    ultra.begin(9600); //set baudRate 9600
    pinMode(led,OUTPUT);
    pinMode(buzzerPin,OUTPUT);
}
    
void loop() { 
        //call function to find dist in cm;
        cmDist = ultra.distFind_cm(); 
    
        //Print value of distance in feet on serial monitor; 
    
        float val = map(cmDist,20,0,0,255);
        //give the analogvalue of val on led pin;
        analogWrite(led,val);
        
        //
        if(val<20){
        
        float beep = map(cmDist,20,0,1000,50);
        buzzer(beep);
        
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
