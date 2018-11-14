//LED RGB

/*
Adafruit Arduino - Lesson 3. RGB LED
*/

int redPin = 6;
int greenPin = 5;
int bluePin = 3;

//uncomment this line if using a Common Anode LED
//#define COMMON_ANODE

void setup()
{
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);  
}

void loop()
{
  setColor(255, 150, 150);  // red
  delay(1000);
  setColor(150, 255, 150);  // green
  delay(1000);
  setColor(150, 150, 255);  // blue
  delay(1000);
  setColor(255, 255, 150);  // yellow
  delay(1000);  
  setColor(80, 255, 80);  // purple
  delay(1000);
  setColor(100, 255, 255);  // aqua
  delay(1000);
  setColor(255, 255, 255);  // aqua
  delay(4000);
}

void setColor(int red, int green, int blue)
{
  #ifdef COMMON_ANODE
    red = 255 - red;
    green = 255 - green;
    blue = 255 - blue;
  #endif
  analogWrite(redPin, red);
  analogWrite(greenPin, green);
  analogWrite(bluePin, blue);  
}
