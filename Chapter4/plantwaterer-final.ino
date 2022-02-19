int sensorPin = A0; // read signal from soil moisture sensor
int sensorData;     // soil moisture value

int yellowLED = 11; // yellow light signal pin
int greenLED = 12;  // green light signal pin
int redLED = 13;    // red light  signal pins and buzzer

void setup()
{
    pinMode(redLED, OUTPUT);    // red light
    pinMode(greenLED, OUTPUT);  // green light
    pinMode(yellowLED, OUTPUT); // yellow light
}

void loop()
{

    sensorData = analogRead(sensorPin);

    // To get the soil moisture values ​​for comparison, you can see the soil moisture measurement experiment in the Solution section.
    if (sensorData >= 785)
    {
        signalLED(1, 0, 0); // signals that the soil is dry and needs watering
    }
    else if (sensorData <= 205)
    {
        signalLED(0, 0, 1); // signals the soil has been watered too much
    }
    else
        signalLED(0, 1, 0); // signals that the soil is wet enough

    delay(50);
}

// function to light up the notification light
// red light is on when parameter red = 1, same for green and yellow
void signalLED(boolean red, boolean green, boolean yellow)
{
    digitalWrite(redLED, red);
    digitalWrite(greenLED, green);
