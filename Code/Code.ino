//Prateek
//https://justdoelectronics.com
//https://www.youtube.com/c/JustDoElectronics/videos

char t;

void setup() {
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if (Serial.available()) {
    t = Serial.read();
    Serial.println(t);
  }

  if (t == 'F') {
    digitalWrite(11, HIGH);
    digitalWrite(10, HIGH);
  }

  else if (t == 'B') {
    digitalWrite(9, HIGH);
    digitalWrite(8, HIGH);
  }

  else if (t == 'L') {
    digitalWrite(9, HIGH);
  }

  else if (t == 'R') {
    digitalWrite(11, HIGH);
  }

  else if (t == 'W') {
    digitalWrite(7, HIGH);
  } else if (t == 'w') {
    digitalWrite(7, LOW);
  }

  else if (t == 'S') {
    digitalWrite(11, LOW);
    digitalWrite(10, LOW);
    digitalWrite(9, LOW);
    digitalWrite(8, LOW);
  }
  delay(100);
}
