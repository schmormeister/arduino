//LED mit Poti steuern
const int SENSOR = 0;
const int LED = 9;
int val = 0;


void setup() {
  Serial.begin(9600);
}

void loop() {
  val = 100-analogRead(SENSOR)/2.55;
 if (val < 70){
  analogWrite(LED,0);
 } else if(val > 90) {
  analogWrite(LED,255);
 } else {
  analogWrite(LED,val);
 }
  Serial.println(100-analogRead(SENSOR)/2.55);
  delay(100);
}
