#define LDR_DO 2  // Digital pin connected to DO of LDR module

void setup() {
  pinMode(LDR_DO, INPUT);
  Serial.begin(9600);
}

void loop() {
  int lightState = digitalRead(LDR_DO);

  if (lightState == LOW) {
    Serial.println("🌑 It's DARK.");
  } else {
    Serial.println("☀️ It's LIGHT.");
  }

  delay(500);
}
