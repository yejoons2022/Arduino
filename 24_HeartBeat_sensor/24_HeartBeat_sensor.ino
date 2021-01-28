int sensorPin = A0;
double alpha = 0.75;
int period = 1000;

void setup() {
  Serial.begin (9600);
  pinMode (sensorPin, INPUT);
}

void loop() {
  static double oldValue = 0;
  int rawValue = analogRead(sensorPin);

  double value = alpha * oldValue + (1 - alpha) * rawValue;

  Serial.print (rawValue);
  Serial.print (",");
  Serial.println (value);
  oldValue = value;
  delay (period);

  
  
}
