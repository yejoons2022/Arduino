int CDS_Sensor = A0;
int Sensor_val;

void setup() {
  Serial.begin(9600);
  pinMode (CDS_Sensor, INPUT);
}

void loop() {
  Sensor_val=analogRead(CDS_Sensor);
  Serial.print("CDS value: ");
  Serial.println(Sensor_val);
  delay(500);
}
