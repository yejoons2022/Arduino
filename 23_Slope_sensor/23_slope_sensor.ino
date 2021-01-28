int S = A0;
int R = 2;
int G = 3;
int B = 4;

void setup() {
  Serial.begin(9600);
  pinMode(R, OUTPUT);
  pinMode(G, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(S, INPUT);

}

void loop() {
  Serial.println(analogRead(S));

  if(analogRead(S)>=600)
  {
    digitalWrite(R,HIGH);
    digitalWrite(G,LOW);
    digitalWrite(B,LOW);
  }

  else if(analogRead(S)<=500)
  {
    digitalWrite(R,LOW);
    digitalWrite(G,HIGH);
    digitalWrite(B,LOW);
  }

  else
  {
    digitalWrite(R,LOW);
    digitalWrite(G,LOW);
    digitalWrite(B,HIGH);
  }
  delay(100);
}
