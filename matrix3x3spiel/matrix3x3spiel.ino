// anodes
int row[] = {5,6,7};
// cathodes
int col[] = {8,9,10};

byte data[] = {
  0,0,0};

int columns = 3;
int rows = 3;

int pause = 1;

void setup()
{
  for (int i=0;i<3;i++)
  {
    pinMode(row[i], OUTPUT);
    pinMode(col[i], OUTPUT);
  } 
  allOff();
}

void loop()
{
  
  data[0] = B00000000;
  data[1] = B00000010;
  data[2] = B00000000;
  showPattern();
 
  data[0] = B00000100;
  data[1] = B00000010;
  data[2] = B00000001;
  showPattern();

  data[0] = B00000000;
  data[1] = B00000111;
  data[2] = B00000000;
  showPattern();
 
  data[0] = B00000001;
  data[1] = B00000010;
  data[2] = B00000100;
  showPattern();

  data[0] = B00000100;
  data[1] = B00000010;
  data[2] = B00000001;
  showPattern();

  data[0] = B00000000;
  data[1] = B00000111;
  data[2] = B00000000;
  showPattern();

  data[0] = B00000001;
  data[1] = B00000010;
  data[2] = B00000100;
  showPattern();

  data[0] = B00000100;
  data[1] = B00000010;
  data[2] = B00000001;
  showPattern();

  data[0] = B00000000;
  data[1] = B00000111;
  data[2] = B00000000;
  showPattern();

  data[0] = B00000100;
  data[1] = B00000100;
  data[2] = B00000100;
  showPattern();

  data[0] = B00000010;
  data[1] = B00000010;
  data[2] = B00000010;
  showPattern();
  
  data[0] = B00000001;
  data[1] = B00000001;
  data[2] = B00000001;
  showPattern();

  data[0] = B00000111;
  data[1] = B00000101;
  data[2] = B00000111;
  showPattern();

  data[0] = B00000000;
  data[1] = B00000000;
  data[2] = B00000111;
  showPattern();

  data[0] = B00000000;
  data[1] = B00000111;
  data[2] = B00000000;
  showPattern();

  data[0] = B00000111;
  data[1] = B00000000;
  data[2] = B00000000;
  showPattern();

  data[0] = B00000000;
  data[1] = B00000111;
  data[2] = B00000000;
  showPattern();

  data[0] = B00000000;
  data[1] = B00000000;
  data[2] = B00000111;
  showPattern();
}

void allOff()
{
  for (int i=0;i<3;i++)
  {
    digitalWrite(row[i], LOW);
    digitalWrite(col[i], HIGH);
  }
}

void showPattern()
{
  for (int i=0;i<200;i++)
  {
    for (int thisrow=0;thisrow<rows;thisrow++)
    {
      allOff();
      digitalWrite(row[thisrow], HIGH);
      for (int thiscol=0;thiscol<columns;thiscol++)
      {
        if (bitRead(data[thisrow],columns-thiscol-1)==1)
        {
          digitalWrite(col[thiscol], LOW);
        }
        else
        {
          digitalWrite(col[thiscol], HIGH);
        }
      }
      delay(pause);
    }
  }
}
