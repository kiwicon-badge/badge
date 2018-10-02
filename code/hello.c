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
  char MESSAGE[] = "HELLOWORLD";
  
  for (counter = 0; counter < sizeof(MESSAGE); counter++) {
    long character;

    character = (long) MESSAGE[counter];

//  if (character == 'A') character = 0b01101001111110011001;
//  if (character == 'B') character = 0b01101001111110011001;
//  if (character == 'C') character = 0b01111000100010000111;
    if (character == 'D') character = 0b11101001100110011110;
    if (character == 'E') character = 0b11111000111010001111;
//  if (character == 'F') character = 0b11111000111010001000;
//  if (character == 'G') character = 0b01111000101110010110;
    if (character == 'H') character = 0b10011001111110011001;
//  if (character == 'I') character = 0b01110010001000100111;
//  if (character == 'J') character = 0b01110010001010100100;
//  if (character == 'K') character = 0b10011010110010101001;
    if (character == 'L') character = 0b10001000100010001111;
//  if (character == 'M') character = 0b10011111111110011001;
//  if (character == 'N') character = 0b10011101101110011001;
    if (character == 'O') character = 0b01101001100110010110;
//  if (character == 'P') character = 0b11101001111010001000;
//  if (character == 'Q') character = 0b01101001101101100001;
    if (character == 'R') character = 0b11101001111010101001;
//  if (character == 'S') character = 0b11111000111100011111;
//  if (character == 'T') character = 0b01110010001000100010;
//  if (character == 'U') character = 0b10011001100110010110;
//  if (character == 'V') character = 0b10011001100110100100;
    if (character == 'W') character = 0b10011001111111110110;
//  if (character == 'X') character = 0b10011001011010011001;
//  if (character == 'Y') character = 0b10011001011000101100;
//  if (character == 'Z') character = 0b11110001001001001111;
    if (character == '!') character = 0b01000100010000000100;
    if (character == '#') character = 0b11111111111111111111;
    if (character == ' ') character = 0b00000000000000000000;
    
    displayCharacterBlock(character);
  }
}
