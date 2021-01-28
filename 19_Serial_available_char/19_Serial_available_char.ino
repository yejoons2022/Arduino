//Serial.available

void setup() {
  Serial.begin(9600);
  pinMode(11, OUTPUT);
  pinMode(2, INPUT);
  pinMode(7, OUTPUT);
}

void loop() {
  if (Serial.available() > 0) {
    char a = Serial.read();
    if(a == '1'){
      digitalWrite(11, HIGH);
      digitalWrite(7, HIGH);
    }
    else if (a == '2') {
      digitalWrite(11, LOW);
      digitalWrite(7, LOW);
    }
  }
}
