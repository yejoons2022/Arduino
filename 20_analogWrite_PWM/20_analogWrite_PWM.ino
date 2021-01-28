void setup() {
  pinMode(11, OUTPUT);
  pinMode(A0, INPUT);
  Serial.begin(9600);
}

void loop() {
  int val = analogRead(A0);
  Serial.println(val);
  analogWrite(11,val / 4);
  delay(10);
}
