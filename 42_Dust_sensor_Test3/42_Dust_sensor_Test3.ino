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
  pinMode(ledPower, OUTPUT);
}

void loop() {
  digitalWrite(ledPower, LOW);
  delayMicroseconds(samplingTime);

  voMeasured = analogRead(measurePin);

  delayMicroseconds(deltaTime);
  digitalWrite(ledPower, HIGH);
  delayMicroseconds(sleepTime);

  calcVoltage = voMeasured * (5.0/1024.0);
  dustDensity = (0.17 * calcVoltage - 0.1) * 1000;


  if (dustDensity > 30){
    Serial.print(dustDensity);
    Serial.println("ug/m3");
  }

  Serial.println(dustDensity);
  delay(1000);
}
