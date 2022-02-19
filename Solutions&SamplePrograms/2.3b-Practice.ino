int led1 = 13;
int led2 = 12;
int led3 = 11;
int led4 = 10;
int led5 = 9;
int ledNumber = 5;                                   // number of LEDs
int Pin[ledNumber] = {led1, led2, led3, led4, led5}; // Declare an array containing the number of pins, size = number of lights.
void setup()
{
    for (int i = 0; i < ledNumber; ++i)
    {
        pinMode(Pin[i], OUTPUT);
    }
}
void loop()
{
    for (int i = 1; i < ledNumber; ++i)
    {
        // each time one light is on, the others are turned off; Here, we use 2 nested loops to be able to execute more complex statements and conditions for one or more objects.
        for (int j = 1; j < ledNumber; ++j)
        {
            digitalWrite(Pin[j], LOW);
        }
        digitalWrite(Pin[i], HIGH); // turn on the lights in the order the pins are arranged in the array.
        delay(2000);
    }
}
