int led = 13;
void setup()
{
    pinMode(13, led);
    int a = 10;
    Serial.begin(9600);
    Serial.println(a);
}

void loop()
{
    digitalWrite(led, HIGH);
    int b = 5;
    Serial.println(b); // print a value of 5.

    for (int i = 0; i <= 5; i++)
    {
        int b = 10;
        Serial.println(b); // print a value of 10.
    }
    Serial.println(b); // print a value of 5.
}
