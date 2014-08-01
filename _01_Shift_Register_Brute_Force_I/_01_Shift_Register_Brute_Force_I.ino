/*

 Basic Sketch To Control a 74HC595.
 Brute Force Method 01
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

  // Brute Force Method 01

  digitalWrite  (clockPin, LOW);
  digitalWrite  (dataPin,  LOW);

  // Clock in a single ONE
  digitalWrite  (latchPin, LOW);
  digitalWrite  (dataPin,  HIGH);
  digitalWrite  (clockPin, HIGH);
  digitalWrite  (clockPin, LOW);
  digitalWrite  (dataPin,  LOW);
  digitalWrite  (latchPin, HIGH);
  delay         (500);

  // Clock in a single ONE
  digitalWrite  (latchPin, LOW);
  digitalWrite  (dataPin,  HIGH);
  digitalWrite  (clockPin, HIGH);
  digitalWrite  (clockPin, LOW);
  digitalWrite  (dataPin,  LOW);
  digitalWrite  (latchPin, HIGH);
  delay         (500);

  // Clock in seven ZEROS
  for (int i = 0; i < 6; i++) {
    digitalWrite  (latchPin, LOW);
    digitalWrite  (clockPin, HIGH);
    digitalWrite  (clockPin, LOW);
    digitalWrite  (latchPin, HIGH);
    delay         (500);
  }

}

