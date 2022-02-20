/* Example 2.1k: Turn lights on gradually using millis() function */

int led1 = 13;
unsigned long time; //variable to store the time value for millis()

void setup()
{
  pinMode(led1, OUTPUT);
}

void loop()
{
time = millis(); // assign time value to time variable
analogWrite(led, time / 100);
// control the brightness of the LED based on the value of the time variable
}
