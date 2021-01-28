//cds, note

int note_c4 = 262;
int note_d4 = 294;
int note_e4 = 330;
int note_f4 = 349;
int note_g4 = 392;
int note_a4 = 440;
int note_b4 = 494;
int note_c5 = 523;

int speakerSensor = 8;
int noteDuration = 700;
int cdsPin = A0;
int cdsValue = 0;
int noteValue = 0;

void setup() {
  pinMode(speakerSensor, OUTPUT);
  pinMode(cdsPin, INPUT);
  Serial.begin(9600);

}

void loop() {
  cdsValue = analogRead(cdsPin);

  if(cdsValue < 200)
  {
    noteValue = note_c4;
  }
  
  else if (cdsValue > 200 && cdsValue < 300)
  {
    noteValue = note_d4;
  }

  else if (cdsValue > 300 && cdsValue < 400)
  {
    noteValue = note_e4;
  }

  else if (cdsValue > 400 && cdsValue < 500)
  {
    noteValue = note_f4;
  }

  else if (cdsValue > 500 && cdsValue < 600)
  {
    noteValue = note_g4;
  }

  else if (cdsValue > 600 && cdsValue < 700)
  {
    noteValue = note_a4;
  }

  else if (cdsValue > 700 && cdsValue < 800)
  {
    noteValue = note_b4;
  }

  else if (cdsValue > 750 )
  {
    noteValue = note_c5;
  }

  Serial.println (cdsValue);
  tone (speakerSensor, noteValue, noteDuration);
  delay (1000);
}
