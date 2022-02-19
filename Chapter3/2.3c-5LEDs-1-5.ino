int led1 = 13;
int led2 = 12;
int led3 = 11;
int led4 = 10;
int led5 = 9;
const int ledNumber= 5;

int Pin[ledNumber]= {led1, led2, led3,
led4, led5}; /* Declare an array containing the pins
connected to the lights, with size = number of lights */

void setup() {
//use the OUTPUT function for the pins
for(int i=0; i < ledNumber; ++i) {
  pinMode(Pin[i], OUTPUT);
}
}
void loop() {
  /* turn on the lights in the order the pins are
  arranged in the array. */
  int i = 0;
  while (i<=5){
    digitalWrite(i, HIGH); /*turn on the light at
    the signal pin corresponding to the i value of this
    iteration */
  ++i;
}
/* turn off the lights in the order the pins are
arranged in the array.*/
  for(int i=ledNumber-1; i >= 0; --i){
    digitalWrite(Pin[i], LOW);
  }
}
