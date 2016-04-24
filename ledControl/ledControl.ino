/*
 * RGB LED
 * 
 * The following script was developed to test the functionality of the RGB-LEDs to be used for the spider prototype
 * 
 * Fluvio L. Lobo Fenoglietto 04/24/2016
 */


// Variable Definitions
int REDpin = 4;
int GREENpin = 5;
int BLUEpin = 6;

void setup() {

  pinMode(REDpin, OUTPUT);
  pinMode(GREENpin, OUTPUT);
  pinMode(BLUEpin, OUTPUT);

}

void loop() {

  delay(1000);
  analogWrite(REDpin, 255);
  delay(1000);
  analogWrite(REDpin, 0);

  delay(1000);
  analogWrite(GREENpin, 255);
  delay(1000);
  analogWrite(GREENpin, 0);

  delay(1000);
  analogWrite(BLUEpin, 255);
  delay(1000);
  analogWrite(BLUEpin, 0);
  

}
