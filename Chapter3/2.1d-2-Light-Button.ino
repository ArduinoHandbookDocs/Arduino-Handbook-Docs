int button = 12; //button connected to pin 12
boolean buttonState = false; //set the button state test variable to 1, equivalent to the initial state of the button (not yet pressed)
int led = 13;

void setup() {
  pinMode(button, INPUT_PULLUP); //button is an input
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}
  void loop() {
  buttonState = digitalRead(button); // digitalRead function helps to read / check the state of the button, return false if pressed, otherwise return about true
  digitalWrite(led, buttonState);
}
