// anodes
int row[] = {5,6,7};
// cathodes
int col[] = {8,9,10};

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
  digitalWrite(row[1], HIGH);
  digitalWrite(col[1], LOW);
}

void allOff()
{
  for (int i=0;i<3;i++)
  {
    digitalWrite(row[i], LOW);
    digitalWrite(col[i], HIGH);
  }
}
