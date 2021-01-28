// servo motor, map(), object


#include <Servo.h>


Servo liverpoolservo;
int val1, val2;

void setup() {
  liverpoolservo.attach(7);
  pinMode (A0, INPUT);
}
void loop() {
  val1 = analogRead(A0);
  val2 = map(val1, 0, 1023, 0, 90);
  liverpoolservo.write(val2);
  delay(15);
}
