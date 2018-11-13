void setup() {
  //The 8-pin ATTinys has 5 usable digital output pins 0-4
  pinMode(0, OUTPUT);
}
void loop() {
  digitalWrite(0, HIGH);    //Set the LED pins to HIGH. This gives power to the LED and turns it on
  delay(500);   // Wait for a half a second
  digitalWrite(0, LOW);   // Set the LED pins to LOW. This turns it off
  delay(1000);    // Wait for a half second
}
