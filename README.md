Shift-Register-Circuit-Build-101
================================

http://rheingoldheavy.com/shift-register-circuit-build-101/

The files in this repo are the Arduino Sketches used on the Shift Register Circuit Build 101 page at www.rheingoldheavy.com

The idea is to go through the brute force methods for making bits flow into a shift register and slowly build
knowledge of how it is performed, how it can be automated, and how it can be performed more elegantly.

There are four sketches...

1. Brute Force Method I   - manual clocking of data
2. Brute Force Method II  - using shiftOut()
3. Brute Force Method III - using bitSet() and bitClear()
4. Elegant Method I       - using shiftOut, bitSet and bitClear with a for loop to reimplement Brute Force Method I
