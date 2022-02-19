#include <Servo.h>

Servo myservo; // create servo object from servo library.

int pos = 0; // value used to determine the turning angle of servo.

void setup() {
   myservo.attach(9); // declare the pin of Arduino connected to servo.
}

void loop() {
// turn the servo from 0 to 180 degree. 
  for (pos = 0; pos <= 180; pos += 1) {
     myservo.write(pos);
// turn servo to “pos” angle.
     delay(15);
// pause the program to wait for the servo turning.
   }
// turn servo from 180 to 0 degree.
   for (pos = 180; pos >= 0; pos -= 1) {
      myservo.write(pos);
// turn servo to “pos” angle
      delay(15);
// pause the program until the servo turns to “val” angle.
   }
} 
