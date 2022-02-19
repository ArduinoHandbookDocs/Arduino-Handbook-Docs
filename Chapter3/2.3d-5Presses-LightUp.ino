int button= 10; //button connected to pin 10
int buttonState= 0; /*set the button state test
variable = 0, equivalent to the state that the button
has not been pressed */
int led= 13;
int count= 0;

void setup() {
  pinMode(button, INPUT); /* assuming that the
  button is an input */
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  /* while loop checks the number of button presses.
  If the button has not been pressed 5 times, the
  following commands outside the loop will not be
  executed 
  Variable count controls the number of button
  presses */
  while(count < 5) {
    buttonState = digitalRead(button);
    if(buttonState == HIGH) {
      count= count +1;
      delay(50); // wait 50ms to avoid Arduino misreading the button signal
    }
  }
  digitalWrite(led, HIGH); //turn on the light
}
