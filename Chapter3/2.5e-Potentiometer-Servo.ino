#include <Servo.h>
Servo myservo; // create Servo object from Servo library.
int servoPin = 0; // the pin of Arduino pin connected to the potentiometer.
int val; // variable reading the value from potentiometer.
void setup() {
   myservo.attach(9); // declare the pin of Arduino connected to servo.
}

void loop() {
   val = analogRead(A0);
// read the potentiometer signal.
   val = map(val, 0, 1023, 0, 180); // convert the value range read from the potentiometer to angle value.
  myservo.write(val);
// turn the servo to “val” angle.
  delay(15);
// pause the program until the servo turns to “val” angle.
