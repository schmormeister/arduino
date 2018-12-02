// anodes
int row[] = {5,6,7};
// cathodes
int col[] = {8,9,10};

// bit patterns for each row
byte data[] = {
  0,0,0};

// defines the size of the matrix 
int columns = 3;
int rows = 3;

//millisecond delay between displaying each row
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
  // define pattern
  data[0] = B00000111;
  data[1] = B00000010;
  data[2] = B00000010;
  
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
  for (int thisrow=0;thisrow<rows;thisrow++)
  {
    //turn everything off
    allOff();
    //turn on current row
    digitalWrite(row[thisrow], HIGH);
    // loop through columns of this row and light
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
