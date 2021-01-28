void setup() {
  pinMode (A0,INPUT);
  pinMode (A1,INPUT);
  pinMode (2,OUTPUT);
  pinMode (3,OUTPUT);
  pinMode (4,OUTPUT);
  pinMode (5,OUTPUT);
  Serial.begin (9600);
}

void loop() {
  Serial.print (" X : ");
  Serial.print (analogRead(A0));
  Serial.print (" Y : ");
  Serial.println (analogRead(A1));
  
  if (analogRead(A1) < 10)            //FRONT
  {
    digitalWrite (2, HIGH);
    digitalWrite (3, LOW);
    digitalWrite (4, HIGH);
    digitalWrite (5, LOW);
    delay (2000);
  }
  else if (analogRead(A1) > 1000)     //BACK 
  {
  digitalWrite (2, LOW);
  digitalWrite (3, HIGH);
  digitalWrite (4, LOW);
  digitalWrite (5, HIGH);
  delay (2000);
  }
  else if (analogRead(A0) < 10)       //LEFT
  {
  digitalWrite (2, HIGH);
  digitalWrite (3, LOW);
  digitalWrite (4, LOW);
  digitalWrite (5, HIGH);
  delay (2000);
  }
  else if (analogRead(A0) > 1000)     //RIGHT
  {
  digitalWrite (2, LOW);
  digitalWrite (3, HIGH);
  digitalWrite (4, HIGH);
  digitalWrite (5, LOW);
  delay (2000);
  }
 else
 {
 digitalWrite (2, LOW);
 digitalWrite (3, LOW);
 digitalWrite (4, LOW);
 digitalWrite (5, LOW);
 delay (2000);
 }
}
