int sensorPin = 0;
int sensorVal = 0;

int ledR = 5;
int ledY = 6;
int ledG = 7;

void setup() {
  Serial.begin(9600);
  pinMode(ledR, OUTPUT);
  pinMode(ledY, OUTPUT);
  pinMode(ledG, OUTPUT);
}

void loop() {
  sensorVal = analogRead(sensorPin);
  float voltage = sensorVal * 5.0;
  voltage /= 1024.0;
  float temperatureC = (voltage - 0.5) * 100;
  Serial.println(temperatureC);
  int temp = temperatureC;

  if (temp <27) {
      digitalWrite(ledR, HIGH);
      digitalWrite(ledY, LOW);
      digitalWrite(ledG, LOW);
  } else if (temp < 28) {
      digitalWrite(ledR, LOW);
      digitalWrite(ledY, HIGH);
      digitalWrite(ledG, LOW);
  } else if (temp < 29) {
      digitalWrite(ledR, LOW);
      digitalWrite(ledY, LOW);
      digitalWrite(ledG, HIGH);
  }
  delay(100);
}
