#include <Servo.h>

Servo josephservo;                                                                                       

void setup() {
  pinMode (A0, INPUT);
  pinMode (7, OUTPUT);
  pinMode (8, OUTPUT);
  pinMode (9, OUTPUT);
  josephservo.attach (10);
}

void loop() {
  if (analogRead(A0) < 800)
  {
    digitalWrite (7, LOW);
    digitalWrite (8, HIGH);
    digitalWrite (9, HIGH);
    josephservo.write(179);
  }
  else
  {
    digitalWrite (7, HIGH);
    digitalWrite (8, LOW);
    digitalWrite (9, LOW);
    josephservo.write(0);
  }
}
