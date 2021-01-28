  int ledPin = 8;
  int sensorPin = A0;
  int sensorVal = 0;


void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
  pinMode (sensorPin, INPUT);
}

void loop() {
  sensorVal = analogRead(sensorPin);
  Serial.println(sensorVal);

 // sensorVal = map(sensorVal, 0, 400, 0, 255);
 // sensorVal = constrain(sensorVal, 0, 255);

 if(sensorVal < 125) {
    digitalWrite(ledPin, HIGH);
 }
 else {
     digitalWrite(ledPin, LOW);
 }
}
