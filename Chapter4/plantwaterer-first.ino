int signalPin = 13; // signal pins for red light and buzzer
int sensorPin = A0; // signals read signal from soil moisture sensor
int sensorData;     // soil moisture value
const int FLAG;     // date value to compare soil moisture

void setup()
{
    pinMode(signalPin, OUTPUT); // pin13 OUTPUT
    Serial.begin(9600);
}

void loop()
{
    sensorData = analogRead(sensorPin);
    // the more moist the soil, the smaller sensorData is
    //  the drier the soil, the larger sensorData is

    // if sensorData >= 500, the soil is dry, warning
    if (sensorData >= 500)
    {
        digitalWrite(signalPin, HIGH);
        delay(500);
        digitalWrite(signalPin, LOW);
        delay(500);
    }
}
