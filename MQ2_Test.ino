const int sensorPin = 7;  // MQ-2 connected to GPIO3X

void setup() {
  Serial.begin(115200); // Start serial communication
  delay(2000);  // Give the sensor time to warm up
  Serial.println("MQ-2 Gas Sensor Test Starting...");
}

void loop() {
  unsigned int sensorValue = analogRead(sensorPin);  // Read MQ-2 sensor value
  Serial.print("MQ-2 Reading: ");
  Serial.println(sensorValue); // Print value to Serial Monitor
  delay(500);  // Wait 500ms before next reading
}
