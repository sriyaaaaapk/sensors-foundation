int irSensorPin= 2; //OUT pin 2 on arduino
int sensorState=0;  //variable to store the state of the sensor
void setup() {
  Serial.begin(9600);
  pinMode(irSensorPin, INPUT);
}

void loop() {
  // Read the value from the IR sensor
  sensorState = digitalRead(irSensorPin);  //digitalRead(irSensorPin) checks if sensor is detecting object
   if (sensorState == HIGH) {
    Serial.println("Object detected!");
  } else {
    Serial.println("No object detected.");
  }

   delay(500); //delay for 500ms

}
