#include <Ultraprabhu.h>

Ultrasenc ultra(12,11);             //ultra(triggerPin,echoPin);

float feetDist,cmDist,inchDist;     //initialise feetDist

void setup() {
  
  ultra.begin(9600);               //set baudRate 9600
  
}

void loop() {

  ultra.distFind();
  
  //call function DistFind_Feet() to find dist in feet;
  feetDist = ultra.distFind_feet();
  
  cmDist = ultra.distFind_cm();
  
  inchDist = ultra.distFind_inch();
  
  //Print value of distance in feet on serial monitor;
  
  Serial.print("Feet: ");
  Serial.println(feetDist);
  Serial.print("cm: ");
  Serial.println(cmDist);
  Serial.print("Inch: ");
  Serial.println(inchDist);
  delay(500);
}
