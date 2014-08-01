/*

 Basic Sketch To Control a 74HC595.
 Brute Force Method 03
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

  // Brute Force Method 03

  bitClear             (leds, 3);
  bitSet               (leds, 4);
  refreshShiftRegister ();
  delay                (125);

  bitClear             (leds, 4);
  bitSet               (leds, 3);
  refreshShiftRegister ();
  delay                (125);

}

void refreshShiftRegister()
{
  digitalWrite  (latchPin, LOW);
  shiftOut      (dataPin, clockPin, MSBFIRST, leds);
  digitalWrite  (latchPin, HIGH);
}

