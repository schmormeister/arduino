//LED soll blinken
//Hallo Welt
const int LED = 9;
int val = 0;

void setup() {
  pinMode(LED, OUTPUT);
}

void loop() {
  val = digitalRead(8);
  if(val == LOW){
    digitalWrite(LED, HIGH);
  } else {
    digitalWrite(LED, LOW);
  }
  delay(10);
}
