int piezoPin = A1;

void setup() {
  Serial.begin(115200);
  Serial.flush();
}

void loop() {
  int piezo = analogRead(piezoPin);
  Serial.println(piezo);
  delay(100);
}
