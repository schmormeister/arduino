//LED mit Poti steuern
const int sensorPin = A0;

int LEDblau = 3; // Farbe blau an Pin 3
int LEDrot = 5; // Farbe rot an Pin 5
int LEDgruen = 6; // Farbe gruen an Pin 6
int dunkel = 255;
int lumenRot[] = {25,50,0,100,125,150,175,200,225,255};
int lumenBlau[] = {125,150,175,200,0,255,25,50,75,100};
int lumenGruen[] = {255,225,200,175,0,125,100,75,50,25};
int i = 0;

int sensorVal = 0;

void setup() {
  pinMode(LEDblau, OUTPUT);
  pinMode(LEDgruen, OUTPUT);
  pinMode(LEDrot, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  sensorVal = analogRead(sensorPin);
  if(sensorVal < 5 || sensorVal > 1000){
    analogWrite(LEDrot, dunkel);
    analogWrite(LEDblau, dunkel);
    analogWrite(LEDgruen, dunkel);
  } else {
    i = sensorVal%10;
    analogWrite(LEDrot, lumenRot[i]);
    analogWrite(LEDblau, lumenBlau[i]);
    analogWrite(LEDgruen, lumenGruen[i]);
  }
  delay(800);
}
