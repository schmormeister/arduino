//LED mit Lichtsensor anschalten

const int LED = 9;
int val = 0;

void setup() {
  pinMode(LED, OUTPUT);
  digitalWrite(LED, LOW);
}

void loop() {
  val = digitalRead(7); 
  if(val == LOW){
    digitalWrite(LED, HIGH); 
  } else {
    digitalWrite(LED, LOW);
  }
  delay(10);
}
