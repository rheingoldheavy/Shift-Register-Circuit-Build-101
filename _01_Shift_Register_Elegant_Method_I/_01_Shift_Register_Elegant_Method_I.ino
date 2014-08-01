/*

Basic Sketch To Control a 74HC595.
Brute Force Method 04
http://rheingoldheavy.com/shift-register-circuit-build-101/
 
*/

// Set the pin connections from the shift register
int dataPin    = 4;
int latchPin   = 5;
int clockPin   = 6;

// Create a variable to hold the 8-bit pattern for the leds
byte leds      = 0;

void setup() 
{
  pinMode(latchPin,   OUTPUT);
  pinMode(dataPin,    OUTPUT);  
  pinMode(clockPin,   OUTPUT);
}


void loop() 
{

  // Elegant Method 01

  for (int i = 0; i < 8; i++)
  {
    bitSet                (leds, i);
    if (i > 0)  bitClear  (leds, i-1);
    if (i == 0) bitClear  (leds, 7);
    refreshShiftRegister  ();
    delay                 (500);
  }
}

void refreshShiftRegister()
{
  digitalWrite  (latchPin, LOW);
  shiftOut      (dataPin, clockPin, MSBFIRST, leds);
  digitalWrite  (latchPin, HIGH);
}

