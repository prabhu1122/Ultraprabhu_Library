#include <Ultraprabhu.h>
Ultrasenc ultra(10,11);

float feetDist;
void setup() {
  ultra.begin(9600);
}
void loop() {
  //ultra.distFind();
  feetDist = ultra.distFind_feet();
  Serial.println(feetDist);
}
