/* Sonar Read
 * Function designed to read the analog output of the LV-MaxSonar sensors by MaxBotix Inc.
 * These sensors are used in the "Spider" prototype.
 * Fluvio L. Lobo Fenoglietto 03/06/2016
 */

int analogPin = 0;
int val;

void setup() {
  
  Serial.begin(9600);
  
} // End of setup loop

void loop () {
  
  val = analogRead(analogPin);
  Serial.println(val);
  
} // End of void loop
