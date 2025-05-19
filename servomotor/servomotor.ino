#include <Servo.h>

Servo myServo;

void setup() {
  myServo.attach(9); // Servo control pin
  Serial.begin(9600); // Start serial communication
}

void loop() {
  myServo.write(0);
  Serial.println("Moved to 0°");
  delay(1000);

  myServo.write(90);
  Serial.println("Moved to 90°");
  delay(1000);

  myServo.write(180);
  Serial.println("Moved to 180°");
  delay(1000);
}
