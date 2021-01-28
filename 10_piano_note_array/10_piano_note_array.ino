int speakerSensor = 8;
float Tones[8] = {261.6, 293.7, 329.7, 349.2, 392.0, 440.0, 493.9, 523.3};
int Tones_Number;

void setup() {
  pinMode (speakerSensor, OUTPUT);
}

void loop() {
  for(Tones_Number = 0; Tones_Number<8; Tones_Number++)
  {
    tone(speakerSensor, Tones[Tones_Number]);
    delay(500);
  }

  noTone(speakerSensor);

  delay(5000);
}
