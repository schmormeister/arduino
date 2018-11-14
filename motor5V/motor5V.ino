#include <Servo.h>
Servo servoblau; 
const int BUTTON = 7;
int i = 0;
int z = 10;

void setup() {
  pinMode(BUTTON, INPUT);
  servoblau.attach(8);
  servoblau.write(0);
  delay(100);
}

void loop() {
  if(i < 10) z = 10;
  if(i >= 90)z = -5;
  if(digitalRead(BUTTON)==HIGH) {
    i=i+z;
    servoblau.write(i);
    delay(200);
  } 
}
