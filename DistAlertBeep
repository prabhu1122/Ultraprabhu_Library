
#include <Ultraprabhu.h>

Ultrasenc ultra(10,11); //ultra(triggerPin,echoPin);
 
#define led 9
#define buzzerPin 12
float cmDist = 0; //initialise feetDist;
float val = 0;

void setup() { 
    Serial.begin(9600);
    ultra.begin(9600); //set baudRate 9600
    pinMode(led,OUTPUT);
    pinMode(buzzerPin,OUTPUT);
}
    
void loop() { 
        //call function DistFind_cm() to find dist in cm;
        
        cmDist = ultra.distFind_cm(); 
        //Print value of distance in feet on serial monitor; 
        val = map(cmDist,20,0,0,255);
    
        analogWrite(led,val);
        if(val<2){
        digitalWrite(buzzerPin,HIGH);
    }
        Serial.println(cmDist);
    
    
}
