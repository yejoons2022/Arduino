void setup() {
  pinMode (2,INPUT);
  pinMode (3,INPUT);
  pinMode (4,INPUT);
  pinMode (5,INPUT);
  Serial.begin (9600);
}

void loop() {
  if (Serial.available() > 0)
  {
    char a = Serial. read();
    if ( a == '1')
    {
      digitalWrite (2, HIGH);
      digitalWrite (3, LOW);
      digitalWrite (4, HIGH);
      digitalWrite (5, LOW);
      delay (2000);
    }
    else if ( a == '2')
    {
      digitalWrite (2, LOW);
      digitalWrite (3, HIGH);
      digitalWrite (4, LOW);
      digitalWrite (5, HIGH);
      delay (2000);
    }
    else if (a == '3')
    {
      digitalWrite (2, HIGH);
      digitalWrite (3, LOW);
      digitalWrite (4, LOW);
      digitalWrite (5, HIGH);
      delay (2000);
    }
    else if ( a == '4')
    {
     digitalWrite (2, LOW);
     digitalWrite (3, HIGH);
     digitalWrite (4, HIGH);
     digitalWrite (5, LOW);
     delay (2000);
    }
    else if (a == '5')
    {
     digitalWrite (2, LOW);
     digitalWrite (3, LOW);
     digitalWrite (4, LOW);
     digitalWrite (5, LOW);
     delay (2000);
    }
  }
}
