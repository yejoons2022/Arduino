int measurePin = A2;
int ledPower = 8;

int samplingTime = 280;
int deltaTime = 40;
int sleepTime = 9680;

float voMeasured = 0;
float calcVoltage = 0;
float dustDensity = 0;

void setup() {
  Serial.begin(9600);
  pinMode(measurePin,INPUT);
  pinMode(ledPower,OUTPUT);
}

void loop() {
  digitalWrite(ledPower,LOW);
  delayMicroseconds(samplingTime);

  voMeasured = analogRead(measurePin);

  delayMicroseconds(deltaTime);
  digitalWrite(ledPower,HIGH);
  delayMicroseconds(sleepTime);

  calcVoltage = voMeasured * (5.0 / 1024.0);
  dustDensity = (0.17 * calcVoltage - 0.1) * 1000;

  Serial.print("Raw Signal Value (0-1023): ");
  Serial.println(voMeasured);

  Serial.print(" - Voltage: ");
  Serial.println(calcVoltage);

  Serial.print(" - Dust Density: ");
  Serial.println(dustDensity); //unit: mg/m3

  delay(1000);
}
