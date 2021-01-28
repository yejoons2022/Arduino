void setup() {
  pinMode (2, INPUT);
  pinMode (8, OUTPUT);
  pinMode (9, OUTPUT);
}

void loop() 
{
  if (HIGH == digitalRead(2))
  {
    digitalWrite(8, LOW);
    digitalWrite(9, HIGH);
  }
  else
  {
    digitalWrite(9, LOW);
    digitalWrite(8, HIGH);
  }
  delay(100);
}
