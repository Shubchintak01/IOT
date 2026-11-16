const int pirPin = 2;
const int buzzerPin = 8;
void setup() {
  pinMode(pirPin, INPUT);
  pinMode(buzzerPin, OUTPUT);
  digitalWrite(buzzerPin, LOW);
  Serial.begin(9600);
  Serial.println("PIR Motion Detection System");
  Serial.println("Waiting for sensor to initialize...");
  delay(3000);
  Serial.println("System Ready");
}
void loop() {
  int motionState = digitalRead(pirPin);
  if (motionState == HIGH) {
    digitalWrite(buzzerPin, HIGH);
    Serial.println("Motion Detected! Buzzer ON");
  } else {
    digitalWrite(buzzerPin, LOW);
    Serial.println("No Motion - Buzzer OFF");
  }
  delay(2000);
}