 //LED mit 3 Tester steuern

const int LEDblau = 3;
const int LEDrot = 6;
const int LEDgruen = 5;
const int BBlau = 13;
const int BRot = 12;
const int BGruen = 11; 

void setup() {
  pinMode(LEDblau, OUTPUT);
  pinMode(LEDgruen, OUTPUT);
  pinMode(LEDrot, OUTPUT);
  pinMode(BBlau, INPUT);
  pinMode(BRot, INPUT);
  pinMode(BGruen, INPUT);
}

void loop() {
  if(digitalRead(BRot)==HIGH){
      setColor(HIGH,LOW,HIGH);
   } else if(digitalRead(BGruen)==HIGH){
       setColor(HIGH,HIGH,LOW);
   } else if(digitalRead(BBlau)==HIGH){
       setColor(LOW,HIGH,HIGH);
   } else {
       setColor(HIGH,HIGH,HIGH);
   }
}

void setColor(int blau, int rot, int gruen){
      digitalWrite(LEDblau, blau);
      digitalWrite(LEDrot, rot);
      digitalWrite(LEDgruen, gruen);
      delay(200);
}
