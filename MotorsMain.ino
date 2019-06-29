#include <Stepper.h>

const int STEPS_PER_REV = 200;

 
Stepper stepper_NEMA17(STEPS_PER_REV, 8, 9, 10, 11);
 
void setup() {
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
}
 
void loop() {

    delay(100);
    analogWrite(4,255);
    digitalWrite(2,HIGH);
    digitalWrite(3,LOW);
    delay(45000);
    digitalWrite(3,HIGH);  
    delay(100);    
    
    stepper_NEMA17.setSpeed(15);
    stepper_NEMA17.step(STEPS_PER_REV);
}
