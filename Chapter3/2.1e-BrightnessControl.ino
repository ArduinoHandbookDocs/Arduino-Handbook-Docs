/* Example 2.1e: Using analogWrite() to 
turn on 3 lights with 3 different brightness: 
no light, dim light and bright */

// declare 3 LEDs at 3 pins digital signal with the symbol PWM ~
int led1 = 3; //declare led1 on pin 3
int led2 = 5; //declare led1 on pin 5
int led3 = 6; //declare led1 on pin 6

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
}

void loop() {
  analogWrite(led1, 0); // led1 is not lit
  analogWrite(led2, 127); // led2 is half lit
  analogWrite(led3, 255); // led3 is on
}
