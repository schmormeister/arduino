//LED mit Poti steuern
const int SENSOR = 0;
int val = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  val = analogRead(SENSOR);
  Serial.println(val);
  delay(100);
}
