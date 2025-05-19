#include <Wire.h>
#include <Adafruit_Sensor.h>
#include <Adafruit_ADXL345_U.h>

Adafruit_ADXL345_Unified accel = Adafruit_ADXL345_Unified(12345);

void setup() {
  Serial.begin(9600);

  if (!accel.begin()) {
    Serial.println("No ADXL345 detected. Check connections.");
    while (1);
  }

  accel.setRange(ADXL345_RANGE_2_G); // Can also be 4, 8, or 16G
  Serial.println("ADXL345 Initialized");
}

void loop() {
  sensors_event_t event;
  accel.getEvent(&event);

  Serial.print("X: "); Serial.print(event.acceleration.x); Serial.print(" m/s^2 ");
  Serial.print("Y: "); Serial.print(event.acceleration.y); Serial.print(" m/s^2 ");
  Serial.print("Z: "); Serial.print(event.acceleration.z); Serial.println(" m/s^2");

  delay(500);
}
