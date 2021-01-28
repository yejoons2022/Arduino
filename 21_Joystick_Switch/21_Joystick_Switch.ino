void setup() {
  pinMode (A2, INPUT);
  pinMode (A1, INPUT);
  pinMode (A0, INPUT);
  Serial.begin (9600);

}

void loop() {
  Serial.print(" X : ");
  Serial.println(analogRead(A2));
  Serial.print(" Y : ");
  Serial.println(analogRead(A1));
  Serial.print(" Switch : ");
  if (analogRead(A0) == 0)
  {
    Serial.println("ON");
  } 
    else
    {
      Serial.println("OFF");
    }
    delay(500);
  }
