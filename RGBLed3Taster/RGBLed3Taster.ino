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
      digitalWrite(LEDblau, HIGH);
      digitalWrite(LEDrot, LOW);
      digitalWrite(LEDgruen, HIGH);
      delay(400);
   } else if(digitalRead(BGruen)==HIGH){
       digitalWrite(LEDblau, HIGH);
       digitalWrite(LEDrot, HIGH);
       digitalWrite(LEDgruen, LOW); 
       delay(400);
   } else if(digitalRead(BBlau)==HIGH){
       digitalWrite(LEDblau, LOW);
       digitalWrite(LEDrot, HIGH);
       digitalWrite(LEDgruen, HIGH); 
       delay(400);
   } else {
       digitalWrite(LEDblau, HIGH);
       digitalWrite(LEDrot, HIGH);
       digitalWrite(LEDgruen, HIGH); 
       delay(400);
   }
}
