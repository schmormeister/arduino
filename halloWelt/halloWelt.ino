/*
 * HALLO WELT AUF ARDUINICH
 * Auf Pin10 und GND steckt eine LED
 * und die Blink 1*pro Sekunde
 */
int led = 10;                   

void setup() { 
  pinMode(led, OUTPUT);     
}

void loop() {                   
  digitalWrite(led, HIGH);      
  delay(1000);                  
  digitalWrite(led, LOW);       
  delay(1000);               
}
