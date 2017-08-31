const int gasPin = A0;
const int switchPin = 2;

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.print("Sensor Gas = ");
  Serial.println(analogRead(gasPin));
  Serial.print("Microswitch = ");
  Serial.println(digitalRead(switchPin));
  delay(1000);
}
