// laser pointer, digitalRead()

int cot = 0;

void setup() 
{
  pinMode(7, INPUT_PULLUP);
  pinMode(2, OUTPUT);
}

void loop() 
{
  if(digitalRead(7)==LOW)
  {
    cot ^= true;
    delay(300);
  }
  if(cot == true)
  {
    digitalWrite(2,HIGH);
  }
  else
  {
    digitalWrite(2,LOW);
  }
}
