int led1 = 3;
int led2 = 6;
int led3 = 9;
int poten = A2;
int potenValue;
void setup()
{
    pinMode(led1, OUTPUT);
    pinMode(led2, OUTPUT);
    pinMode(led3, OUTPUT);
}
void loop()
{
    potenValue = analogRead(A2);
    if (potenValue > 0 && potenValue <= 341)
    {
        digitalWrite(led1, HIGH);
        digitalWrite(led2, LOW);
        digitalWrite(led3, LOW);
    }
    else if (potenValue > 341 && potenValue <= 682)
    {
        digitalWrite(led1, LOW);
        digitalWrite(led2, HIGH);
        digitalWrite(led3, LOW);
    }
    else if (potenValue > 682 && potenValue <= 1023)
    {
        digitalWrite(led1, LOW);
        digitalWrite(led2, LOW);
        digitalWrite(led3, HIGH);
    }
}
