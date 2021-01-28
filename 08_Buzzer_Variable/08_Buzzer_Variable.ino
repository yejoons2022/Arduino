//variable, buzzer

int speakerSensor = 8;

void setup() {
 pinMode(speakerSensor, OUTPUT);
}

void loop() {
 digitalWrite(speakerSensor, HIGH);
 delay(1000);
 digitalWrite(speakerSensor, LOW);
 delay(1000); 
}
