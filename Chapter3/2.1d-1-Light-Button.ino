/*
Example 2.1d: Read the signal from the push button and then turn on-off the corresponding light
Method 1: use pinMode(INPUT) to read the value from the push button.
*/

int button = 10; //button connected to pin 10
boolean buttonState = false; //set the button state test variable to 0, equivalent to the state that the button has not been pressed
int led = 13;

void setup() {
  pinMode(button, INPUT); //the button is an input
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}
void loop() {
  buttonState = digitalRead(button); // function digitalRead helps to read and check the state of the button, returns true if pressed, otherwise returns false
  digitalWrite(led, buttonState);
}
