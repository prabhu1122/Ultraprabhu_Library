#include <Ultraprabhu.h>
Ultrasenc ultra(10,11); //ultra(triggerPin,echoPin);

float feetDist = 0;     //initialise feetDist
void setup() {
  ultra.begin(9600);    //set baudRate 9600
}
void loop() {
  //call function DistFind_Feet() to find dist in feet;
  feetDist = ultra.distFind_feet();
  //Print value of distance in feet on serial monitor;
  Serial.println(feetDist);
}
