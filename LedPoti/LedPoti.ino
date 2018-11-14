//LED mit Poti steuern
const int sensorPin = A0;
int ledPin = 13;
int sensorVal = 0;

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  sensorVal = analogRead(sensorPin);
  if(sensorVal < 5){
    digitalWrite(ledPin,LOW);
  } else {
  Serial.println(sensorVal);
  digitalWrite(ledPin, HIGH);
  delay(sensorVal);
  digitalWrite(ledPin, LOW);
  delay(sensorVal);
  }
}
