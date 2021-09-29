void setup() 
{
  // put your setup code here, to run once:
  pinMode(4, OUTPUT);
  pinMode(5, INPUT);
}

void loop() 
{
  // put your main code here, to run repeatedly:
  while(digitalRead(5) == LOW)
  {    
    digitalWrite(4, LOW);
  }
  digitalWrite(4, HIGH);
  delay(1000);
}
