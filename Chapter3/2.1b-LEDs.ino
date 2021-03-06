/* Example 2.1b: Using digitalWrite() to turn on LEDs from pins 11, 12 and 13 */

int greenLed = 11; //green light
int yellowLed = 12; //yellow light
int redLed = 13; // red light

void setup() {
  pinMode(greenLed, OUTPUT);
  pinMode(yellowLed, OUTPUT);
  pinMode(redLed, OUTPUT);
}

void loop() { //Open the lights one by one
  digitalWrite(greenLed, HIGH);
  delay(2000);
  digitalWrite(yellowLed, HIGH);
  delay(2000);
  digitalWrite(redLed, HIGH);
}
