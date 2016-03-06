/* Sonar Read
 * Function designed to read the analog output of the LV-MaxSonar sensors by MaxBotix Inc.
 * These sensors are used in the "Spider" prototype.
 * Fluvio L. Lobo Fenoglietto 03/06/2016
 */
 
 /* In flaggedRead, a threshold value is given to determine an exact proximity limit.
  * The idea is for the flag to be visible within the serial monitor window and through an LED.
  */

int analogPin = 0;
int digitalPin = 8;
int signalThreshold = 25;
int val;

void setup() {
  
  Serial.begin(9600);
  pinMode(digitalPin, OUTPUT);
  digitalWrite(digitalPin, LOW);
  
} // End of setup loop

void loop () {
  
  val = analogRead(analogPin);
  
  if (val <= signalThreshold) {
   
    String outString = "Threshold Met";
    Serial.println(outString);
    digitalWrite(digitalPin, HIGH);  
    
  } // End of if statement
  
  digitalWrite(digitalPin, LOW);
  
} // End of void loop
