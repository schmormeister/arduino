//LED soll leuchten mit Schalter

const int LED = 13;
const int BUTTON = 7;
int val = 0;
int oval = 0;
int state = 0;// 0 LED off bis 1 dann LED an

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(BUTTON, INPUT);

}

void loop() {
  val = digitalRead(BUTTON);
  
  if ((val == HIGH) && (oval == LOW)) {
    state = 1 - state;
    delay(5);//wegen tastenprell bei Schalter ist aber auch nicht perfekt
  }
   
  oval = val;
  
  if (state == 1) {
    delay(5);
    digitalWrite(LED, HIGH);
  } else {
    delay(5);
    digitalWrite(LED, LOW);
  }
}
