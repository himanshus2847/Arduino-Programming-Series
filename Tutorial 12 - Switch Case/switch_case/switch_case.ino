int count = 0;

void setup() 
{
  pinMode(2, INPUT_PULLUP);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT); 
}

void loop() {
  // put your main code here, to run repeatedly:
  int val = digitalRead(2);
  if(val == 0)
  {
    count = count + 1;
  }
  switch(count)
  {
    case 1:
      digitalWrite(3, HIGH);
      break;
    case 2:
      digitalWrite(4, HIGH);
      break;
    case 3:
      digitalWrite(5, HIGH);
      break;
    case 4:
      digitalWrite(6, HIGH);
      break;
    default:
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      count = 0;
      break;
  }
  delay(200);
}
