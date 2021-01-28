int Red = 8;
int Green = 9;
int Blue = 10;

void setup() {
  Serial.begin (9600);
  pinMode (7, OUTPUT);
  pinMode (Red, OUTPUT);
  pinMode (Green, OUTPUT);
  pinMode (Blue, OUTPUT);
  pinMode (A0, INPUT);
}

void loop() {
  Serial.println (analogRead(A0));

  if (analogRead(A0) < 100)
  {
    digitalWrite (Red, HIGH);
    digitalWrite (Green, LOW);
    digitalWrite (Blue, LOW);
    digitalWrite (7, HIGH);
  }
  
  else if (analogRead(A0) < 350)
  {
    digitalWrite (Red, LOW);
    digitalWrite (Green, HIGH);
    digitalWrite (Blue, LOW);
    digitalWrite (7, LOW);
  }
  
  else
  {
    digitalWrite (Red, LOW);
    digitalWrite (Green, LOW);
    digitalWrite (Blue, HIGH);
    digitalWrite (7, LOW);
  }
}
