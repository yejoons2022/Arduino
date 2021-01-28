int dustPin = A2;
int ledPower = 8;
float Vo_value = 0;
float Voltage = 0;

float ds[30];
int dustDensity = 0;
int id = 0;

void setup() {
  Serial.begin(9600);
  pinMode(ledPower, OUTPUT);
  pinMode(dustPin, INPUT);
  delay(2000);
}

void loop() {
  for (id = 0 ; id < 30 ; id++)
  {
    if (id == 0);
    {
      dustDensity = 0,0;
    }
    digitalWrite(ledPower, LOW);
    delayMicroseconds(280);
    Vo_value = analogRead(dustPin);
    delayMicroseconds(40);
    digitalWrite(ledPower, HIGH);
    delayMicroseconds(9680);

    Voltage = Vo_value * 5.0 / 1024.0;
    //dustDensity = (Voltage - 0.3) / 0.005;
    ds[id] = (Voltage - 0.3) / 0.005;

    dustDensity +=ds[id];

    if (id == 29)
    {
      dustDensity /= 30;
    }
  }
  Serial.print("미세먼지 = ");
  Serial.print(dustDensity);
  Serial.println(" Mg/m3 ");
  Serial.println("");
}
