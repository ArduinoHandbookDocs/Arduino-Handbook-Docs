int led1 = 13;
int led2 = 12;
int led3 = 11;
int led4 = 10;
int led5 = 9;
const int ledNumber= 5;
int Pin[ledNumber]= {led1, led2, led3, led4, led5};
/* Declare an array containing the pins connected to
the lights, with size = number of lights */

void setup() {
  for(int i=0; i < ledNumber; ++i) {
  pinMode(Pin[i], OUTPUT); //use the OUTPUT function for the pins.
  }
}

void loop() {
  for(int i=0; i < ledNumber; ++i){
  digitalWrite(Pin[i], HIGH); 
  /* turn on the lights in the order the pins 
  are arranged in the array */
  delay(1000); 
  /* each time turn on 1 light, stop
  for 1 second */
  }
  
  for(int i=ledNumber-1; i >= 0; --i){
  digitalWrite(Pin[i], LOW); /* turn off the
  lights in the order of pins arranged above */
  }
}
