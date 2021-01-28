int Red = 8;
int Green = 9;
int Blue = 10;

void setup() {
  Serial.begin (9600);
  pinMode (Red, OUTPUT);
  pinMode (Green, OUTPUT);
  pinMode (Blue, OUTPUT);
}

void loop() {
  digitalWrite (Red, HIGH);
  digitalWrite (Green, LOW);
  digitalWrite (Blue, LOW);
  delay(2000);

  digitalWrite (Red, LOW);
  digitalWrite (Green, HIGH);
  digitalWrite (Blue, LOW);
  delay(2000);

  digitalWrite (Red, LOW);
  digitalWrite (Green, LOW);
  digitalWrite (Blue, HIGH);
  delay(2000);

  digitalWrite (Red, HIGH);
  digitalWrite (Green, HIGH);
  digitalWrite (Blue, HIGH);
  delay(2000);
}
