/*

 Basic Sketch To Control a 74HC595.
 Brute Force Method 02
 http://rheingoldheavy.com/shift-register-circuit-build-101/
 
 */

// Set the pin connections from the shift register
int dataPin    = 4;
int latchPin   = 5;
int clockPin   = 6;


void setup() 
{
  pinMode(latchPin,   OUTPUT);
  pinMode(dataPin,    OUTPUT);  
  pinMode(clockPin,   OUTPUT);
}


void loop() 
{

  // Brute Force Method 02
  digitalWrite  (latchPin, LOW);
  shiftOut      (dataPin, clockPin, MSBFIRST, B10101010);
  digitalWrite  (latchPin, HIGH);
  delay         (500);

  digitalWrite  (latchPin, LOW);
  shiftOut      (dataPin, clockPin, MSBFIRST, B01010101);
  digitalWrite  (latchPin, HIGH);
  delay         (500);

}

