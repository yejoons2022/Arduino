void setup() {
  pinMode(2, INPUT);
  pinMode(11, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  int buttoninput = digitalRead(2);
  Serial.println (digitalRead(2));
  if (buttoninput == 1) {
      digitalWrite(11, HIGH);
  }
  else {
      digitalWrite(11, LOW);
  }
}
