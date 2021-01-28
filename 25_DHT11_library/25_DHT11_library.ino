#include <Adafruit_Sensor.h>

#include <DHT.h>
#include <DHT_U.h>

#define DHTPIN A0
#define DHTTYPE DHT11
DHT dht(DHTPIN, DHTTYPE);

float hum;
float temp;

void setup() {
  Serial.begin(9600);
  dht.begin();
  delay(2000);
}

void loop() {
  hum = dht.readHumidity();
  temp = dht.readTemperature();

Serial.print("Humidity : ");
Serial.print(hum, 0);
Serial.print(" %, Temp : ");
Serial.println(temp, 1);
delay (2000);

}
