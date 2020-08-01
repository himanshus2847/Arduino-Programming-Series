void setup()
{
}

void loop()
{
  for(int i = 0; i <= 255; i++)
  {
    analogWrite(10, i);
    delay(10);
  }
  for(int j = 255; j >= 0; j--)
  {
    analogWrite(10, j);
    delay(10);
  }
}
