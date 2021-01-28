void setup() {
  pinMode (A0, INPUT);
  Serial.begin(9600);
}

void loop() {

  int temp = (5.0 * analogRead(A0) *100)/1024;
  
  Serial.print ("value : ");
  Serial.println (temp);
  delay(500);
}
