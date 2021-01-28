//FLAME SENSOR & RGB LED

void setup() {
  Serial.begin(9600);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(A0, INPUT);
  pinMode(5, OUTPUT);
}

void loop() {
  Serial.print(" flame : ");
  Serial.println(analogRead(A0));

  if (analogRead(A0) <= 800)
  {
    digitalWrite(7, HIGH);
    digitalWrite(6, LOW);
    digitalWrite(5, HIGH);
  }
  else
  {
    digitalWrite(7, LOW);
    digitalWrite(6, HIGH);
    digitalWrite(5, LOW);
  }
}
