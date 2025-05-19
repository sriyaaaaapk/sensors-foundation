int sensorPin1 = A0;  // For the resistive sensor (two-pointed probe)
int sensorValue1 = 0;

void setup() {
  Serial.begin(9600);  // Start serial monitor
}

void loop() {
  // Read the first sensor
  sensorValue1 = analogRead(sensorPin1);
  
  // Print values for both sensors
  Serial.print("Resistive Sensor Value (Two-pointed Probe): ");
  Serial.println(sensorValue1);
  delay(1000);  // Wait for 1 second
}

