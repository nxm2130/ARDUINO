/* Blink
 * Turns on an LED on for one second, then off for one second,
 * repeatedly.
 * Created 1 June 2005 By David Cuartielles
 * http://arduino.cc/en/Tutorial/Blink
 * based on an orginal by H. Barragan for the Wiring i/o board
 */
int ledPin =  9;    // LED connected to digital pin 13
// The setup() method runs once, when the sketch starts
void setup()   {                  // initialize the digital pin as an output:
  pinMode(ledPin, OUTPUT);     }
// the loop() method runs over and over again,
// as long as the Arduino has power
void loop() {
  analogWrite(ledPin, 255);
  delay(500);
  analogWrite(ledPin, 10);
  delay(500);
}
// set the LED on
// wait for a second
// set the LED off
// wait for a second
