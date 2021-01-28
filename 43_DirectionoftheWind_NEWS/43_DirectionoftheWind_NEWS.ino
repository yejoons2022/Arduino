int wdPin = A1;
float wdData = 0.0;
float wdVolt = 0.0;
float angle = 0.0;
int wdi = 0;
int WD = 0.0;

float rAd[] = {0, 22.5, 45, 67.5, 90, 112.5, 135, 157.5, 180, 202.5, 225, 247.5, 270, 292.5, 315, 337.5};


void setup() {
  Serial.begin(9600);
  pinMode (wdPin, INPUT);
}

void loop() {
  wdData = analogRead(wdPin);
  float angle = ((wdData / 204.6) / 5.0) * 360;

  for (wdi = 0; wdi < 16; wdi++);
  {
    float z1 = rAd[wdi] - 11.5;
    float z2 = rAd[wdi] + 11.5;

    if ( ( rAd[wdi] - 11.5 < angle) && ( angle <= rAd[wdi] + 11.5) )
    {
      WD = wdi;
    }
  }

  Serial.print("WD:");

  if(WD == 0) Serial.println("=N=");
  if(WD == 1) Serial.println("NNE");
  if(WD == 2) Serial.println("-NE-");
  if(WD == 3) Serial.println("ENE");

  if(WD == 4) Serial.println("=E=");
  if(WD == 5) Serial.println("ESE");
  if(WD == 6) Serial.println("-SE-");
  if(WD == 7) Serial.println("SSE");

  if(WD == 8) Serial.println("=S=");
  if(WD == 9) Serial.println("SSW-");
  if(WD == 10) Serial.println("-SW-");
  if(WD == 11) Serial.println("WSW");

  if(WD == 12) Serial.println("=W=");
  if(WD == 13) Serial.println("WNW");
  if(WD == 14) Serial.println("-NW-");
  if(WD == 15) Serial.println("NNW");

  delay(1000);

}
