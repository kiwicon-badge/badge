void writetoled(int high, int low) {
  pinMode(high, OUTPUT);
  pinMode(low, OUTPUT);
  digitalWrite(high, HIGH);
  digitalWrite(low, LOW);
  delayMicroseconds(10);
  digitalWrite(high, LOW);
  pinMode(high, INPUT);
  pinMode(low, INPUT);
  delayMicroseconds(10);
}

void displayCharacterBlock(long character) {
  char counter, high, low, row, skip;

  for (counter = 0; counter < 100; counter++) {
    for (low = 0; low < 5; low++) {
      row = character >> ((4 - low) * 4);
      skip = 0;
      for (high = 4; high >= 0; high--) {
        if (low == high) {
          skip = 1;
          continue;
        }
        if (row >> ((high - 1) + skip) & 0x01) {
          writetoled(high, low);
        } else {
          delayMicroseconds(20);
        }
      }
    }
  }
}

// the setup function runs once when you press reset or power the board
void setup() {
  
}

// the loop function runs over and over again forever
void loop() {
  int counter;
  
  // Legal characters for MESSAGE_STRING include A-Z, '!', ' ' (space), and '#' (block).
  char MESSAGE[] = "HELLO ";
  
  for (counter = 0; counter < (sizeof(MESSAGE) - 1); counter++) {
    long character = 0b11111111111111111111;

    if (MESSAGE[counter] == 'H') character = 0b10011001111110011001;
    if (MESSAGE[counter] == 'E') character = 0b11111000111010001111;
    if (MESSAGE[counter] == 'L') character = 0b10001000100010001111;
    if (MESSAGE[counter] == 'O') character = 0b01101001100110010110;
    if (MESSAGE[counter] == ' ') character = 0b00000000000000000000;
    
    displayCharacterBlock(character);
  }
}
