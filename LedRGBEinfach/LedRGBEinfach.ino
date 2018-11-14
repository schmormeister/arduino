int LEDblau = 3;
int LEDrot = 5;
int LEDgruen = 6;
int p=1000;
int brightness1a = 150;
int brightness1b = 150;
int brightness1c = 150;
int dunkel = 255;

void setup()
{
pinMode(LEDblau, OUTPUT);
pinMode(LEDgruen, OUTPUT);
pinMode(LEDrot, OUTPUT);
}

void loop()
{
analogWrite(LEDgruen, brightness1c);
analogWrite(LEDrot, brightness1b);
delay(p);
analogWrite(LEDgruen, dunkel);
analogWrite(LEDrot, dunkel);
analogWrite(LEDgruen, brightness1c);
analogWrite(LEDblau, brightness1b);
delay(p);
analogWrite(LEDgruen, dunkel); 
analogWrite(LEDblau, dunkel);
analogWrite(LEDrot, brightness1b);
analogWrite(LEDblau, brightness1b);
delay(p);
analogWrite(LEDrot, dunkel);
analogWrite(LEDblau, dunkel);
delay(p);
analogWrite(LEDrot, dunkel);
analogWrite(LEDblau, dunkel);
analogWrite(LEDgruen, dunkel);
delay(p*3);

}
