int piezoPin = A1;

void setup() {
  Serial.begin(9600);
  Serial.flush();
}

void loop() {
  Serial.println(analogRead(piezoPin));
}
