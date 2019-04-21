
///////**Prabhat Yadav**///////
#include <Ultraprabhu.h>

Ultrasenc ultra(12,11); // ultra(triggerPin,echoPin);
 
#define led 9        
#define buzzPin 8 
float cmDist;
int threshold = 50;

void setup() { 
    ultra.begin(9600); //set baudRate 9600
    pinMode(led,OUTPUT);
    pinMode(buzzPin,OUTPUT);
    analogWrite(led,0);
}
    
void loop() {
        //dist in cm;
        cmDist = ultra.distFind_cm(); 
    
        float val = map(cmDist,threshold*2,0,0,255);
        
        float val1 = map(cmDist,threshold*2,0,255,0);
        
        if(cmDist<=threshold){
        analogWrite(led,val);
        buzz(val1);
        }
        else if(cmDist>threshold){
          analogWrite(led,0);
        }
        Serial.println(cmDist); 
}

//////////////////////////////////////////////////////////
//code for buzz ;
void buzz(float a){    
    
    digitalWrite(buzzPin,HIGH);
    delay(100);  
    
    digitalWrite(buzzPin,LOW);
    delay(a);      //put the delay according to beep value;
    
}
