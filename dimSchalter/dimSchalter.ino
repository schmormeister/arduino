//LED dimSchalter

const int LED = 9;
const int BUTTON = 7;
int val = 0; 
int oval = 0;
int state = 0;
int lumen = 128;
unsigned long startTime = 0;

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(BUTTON, INPUT);
}

void loop() {
  val = digitalRead(BUTTON);
  if ((val == HIGH) && (oval == LOW)) {
    state = 1 - state;
    startTime = millis();
    delay(10);
  }
  if ((val == HIGH) && (oval == HIGH)) {
    if (state == 1 && (millis()-startTime) > 250) {
      lumen++;
      delay(12);
      if(lumen > 256) {
        delay(200);
        lumen = 0;
      }
    }
  }
  oval = val;
  if(state == 1) {
    analogWrite(LED, lumen);
  } else {
    analogWrite(LED, 0);
  }
}
