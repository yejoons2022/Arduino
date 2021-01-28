void setup() {
  pinMode (5, OUTPUT);
  Serial.begin(9600);
  digitalWrite (5, LOW);

}

void loop() {
  if (Serial.available()>0)
  {
    char c = Serial.read();
    if (c == '1')
    {
      Serial.println("switch on...");
      digitalWrite(5, HIGH);
    }
    else if (c == '2')
    {
      Serial.println("switch off...");
      digitalWrite(5,LOW);
    }
  }

}
