//map(), constrain()
  
  int sensorPin = A0;
  int sensorVal = 0;


void setup() {
  Serial.begin(9600);
  pinMode (sensorPin, INPUT);
}

void loop() {
  sensorVal = analogRead(sensorPin);
  Serial.println(sensorVal);

  sensorVal = map(sensorVal, 0, 400, 0, 255);
  sensorVal = constrain(sensorVal, 0, 255);

  analogWrite(8, 255 - sensorVal);
}
