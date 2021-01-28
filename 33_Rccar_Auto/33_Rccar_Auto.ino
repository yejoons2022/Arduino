void setup() {
  pinMode (2,INPUT);
  pinMode (3,INPUT);
  pinMode (4,INPUT);
  pinMode (5,INPUT);
  Serial.begin (9600);
}

void loop() {
  Serial.print (digitalRead(2));
  Serial.print (digitalRead(3));
  Serial.print (digitalRead(4));
  Serial.println (digitalRead(5));

  digitalWrite (2, HIGH);
  digitalWrite (3, LOW);
  digitalWrite (4, HIGH);
  digitalWrite (5, LOW);
  delay (2000);

  digitalWrite (2, LOW);
  digitalWrite (3, HIGH);
  digitalWrite (4, LOW);
  digitalWrite (5, HIGH);
  delay (2000);

  digitalWrite (2, HIGH);
  digitalWrite (3, LOW);
  digitalWrite (4, LOW);
  digitalWrite (5, HIGH);
  delay (2000);

  digitalWrite (2, LOW);
  digitalWrite (3, HIGH);
  digitalWrite (4, HIGH);
  digitalWrite (5, LOW);
  delay (2000);

  digitalWrite (2, LOW);
  digitalWrite (3, LOW);
  digitalWrite (4, LOW);
  digitalWrite (5, LOW);
  delay (2000);
}
