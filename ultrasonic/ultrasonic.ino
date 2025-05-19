long duration;
int distance;

void setup() {
long duration;
int distance;

void setup() {
  Serial.begin(9600);
  pinMode(7,OUTPUT);
  pinMode(8,INPUT);

}

void loop() {
  // Clear trig
  digitalWrite(7, LOW);
  delayMicroseconds(2);
  
  // Trigger the wave
  digitalWrite(7, HIGH);
  delayMicroseconds(10);
  digitalWrite(7, LOW);

  // Measure Echo
  duration = pulseIn(8, HIGH);
  
  // Calculate distance (cm)
  distance = duration * 0.034 / 2;

  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  delay(500);

}