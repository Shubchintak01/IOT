const int gasSensorPin = A0;
const int buzzerPin = 8;
// Example threshold; calibrate for your sensor
const int gasThreshold = 400;
void setup() {
  Serial.begin(9600);
  pinMode(buzzerPin, OUTPUT);
  digitalWrite(buzzerPin, LOW);
  Serial.println("MQ Gas Sensor Alarm System");
}
void loop() {
  int gasValue = analogRead(gasSensorPin);
  Serial.print("Gas sensor value: ");
  Serial.println(gasValue);
  if (gasValue > gasThreshold) {
    digitalWrite(buzzerPin, HIGH);
    Serial.println("WARNING: Gas level above threshold!");
  } else {
    digitalWrite(buzzerPin, LOW);
    Serial.println("Gas level below threshold.");
  }
  delay(500);
}