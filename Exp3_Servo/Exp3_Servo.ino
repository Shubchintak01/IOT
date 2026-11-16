#include <Servo.h>

Servo myServo;
int angle;
void setup() {
  myServo.attach(9);
}
void loop() {

  for (angle = 0; angle <= 180; angle++) {
    myServo.write(angle);
    delay(15);
  }
  delay(500);

  for (angle = 180; angle >= 0; angle--) {
    myServo.write(angle);
    delay(15);
  }
  delay(500);
}