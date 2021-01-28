void setup() {
  pinMode (A0, INPUT);
  Serial.begin (9600);
}

void loop() {
  Serial.print ("아날로그 입력확인 : ");
  Serial.println (analogRead (A0));

}
