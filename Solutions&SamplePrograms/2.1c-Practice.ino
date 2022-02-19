int buzzerPin = 13;
void setup()
{
    pinMode(buzzerPin, OUTPUT); //    pin13 OUTPUT
}
void loop()
{
    digitalWrite(buzzerPin, HIGH); // output HIGH level signal buzzerPin pin.
    delay(1000);                   // stop program 1000ms(1 second).
    digitalWrite(buzzerPin, LOW);  // output LOW level signal on the buzzerPin.
    delay(1000);                   // stop program 1000ms(1 second).
}
