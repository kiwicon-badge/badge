void setup() {
  // The 8-pin ATTinys has 5 usable digital output pins 0-4
  // These can be set to input, output, or high impedeance
  pinMode(0, OUTPUT);
  pinMode(1, OUTPUT);
}
void loop() {
  digitalWrite(0, HIGH); // Set pin 0 to HIGH. This gives power to the LED and turns it on
  delay(500);            // Wait for a half a second
  digitalWrite(0, LOW);   // Set pin 0 to LOW. This turns it off
  digitalWrite(1, HIGH); // Set pin 1 to HIGH. This gives power to the LED and turns it on
  delay(500);            // Wait for a half a second
  digitalWrite(1, LOW);   // Set pin 1 to LOW. This turns it off
}
