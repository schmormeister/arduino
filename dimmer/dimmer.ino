//LED dimmer

const int LED = 9;
int i = 0;

void setup() {
  pinMode(LED, OUTPUT);
}

void loop() {

  for (i = 1; i < 256; i++){
      analogWrite(LED, i);
      delay(100);
  }
 digitalWrite(LED, HIGH);
 delay(1000);
 digitalWrite(LED, LOW);
 delay(1000);
  //for (i = 255; i > 0; i--) {
 //   analogWrite(LED, i);
 //   delay(10);
 // }
}
