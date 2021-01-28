void setup() {
  pinMode (A2, INPUT);
  pinMode (A1, INPUT);
  pinMode (8, OUTPUT);
  pinMode (9, OUTPUT);
  pinMode (10, OUTPUT);
  pinMode (7, OUTPUT);
}

void loop() {
    if (analogRead(A2) == 500 && analogRead(A1) == 0)     //up
  {
    digitalWrite (8, HIGH);
    digitalWrite (9, LOW);
    digitalWrite (10, LOW);
    digitalWrite (7, LOW);
  }
  else if (analogRead(A2) == 500 && analogRead(A1) == 1023)    //DOWN
  {
    digitalWrite (8, LOW);
    digitalWrite (9, LOW);
    digitalWrite (10, LOW);
    digitalWrite (7, HIGH);
  }
     else if (analogRead(A2) == 0 && analogRead(A1) == 500)     //LEFT
  {
    digitalWrite (8, LOW);
    digitalWrite (9, HIGH);
    digitalWrite (10, LOW);
    digitalWrite (7, LOW);
  }
  else if (analogRead(A2) == 1023 && analogRead(A1) == 500)       //LIGHT
  {
    digitalWrite (8, LOW);
    digitalWrite (9, LOW);
    digitalWrite (10, HIGH);
    digitalWrite (7, LOW);
  }
 else if (analogRead(A0) == 0)
 {
  digitalWrite (8, LOW);
    digitalWrite (9, LOW);
    digitalWrite (10, LOW);
    digitalWrite (7, LOW);
 }
}
