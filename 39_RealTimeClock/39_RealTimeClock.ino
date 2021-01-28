#include <core_build_options.h>
#include <swRTC.h>

swRTC myrtc;

void setup() {
  Serial.begin(9600);
  myrtc.stopRTC();
  myrtc.setTime(10, 8, 0);
  myrtc.setDate(9, 2, 2019);
  myrtc.startRTC();
}

void loop() {
  Serial.print (myrtc.getHours(), DEC);
  Serial.print (":");
  Serial.print (myrtc.getMinutes(), DEC);
  Serial.print (":");
  Serial.println (myrtc.getSeconds(), DEC);

  Serial.print (myrtc.getDay(), DEC);
  Serial.print ("/");
  Serial.print (myrtc.getMonth(), DEC);
  Serial.print ("/");
  Serial.println (myrtc.getYear(), DEC);

  delay(1000);

}
