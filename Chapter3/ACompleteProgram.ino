#include <Wire.h>
#include <DHT.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x3F, 16, 2); // initialize the input for LCD (I am using 1602 version), with 16 as the number of columns, 2 as the number of lines.
const int DHTPIN = 2;               // initialize the pin of DHT variable is pin 2.
const int DHTTYPE = DHT11;
DHT dht(DHTPIN, DHTTYPE);
int photoPin = A1; // analog pin reading the value of photoresistor.
int ledPin = 12;   // digital pin controlling the LED.
unsigned long currentTime;
unsigned long lastTime;

void setup()
{
    lcd.init();      // start the LCD display and allow Arduino to use the display.
    lcd.backlight(); // start LCD background light 16x2.
    lcd.clear();
    dht.begin(); // start DHT sensor.
    pinMode(ledPin, OUTPUT);
    digitalWrite(ledPin, LOW); // turn off LED light.
}
void loop()
{
    float t = dht.readTemperature(); // assign the temperature value to variable t.
    float h = dht.readHumidity();    // assign the humidity value to variable h.
    currentTime = miilis();          // read and print the humidity value on LCD.
                                     // each time is 1 second apart.
    if ((currentTime – lastTime) >= 1000)
    {
        sensorDisplay(t, h);
        photoDisplay(photoPin, ledPin); // check the surrounding light and turn on the LED if it is dark.
        lastTime = currentTime;
    }
}
// the function showing the temperature value
void sensorDisplay(float t, float h)
{
    lcd.setCursor(0, 0);
    lcd.print(“Temperature
              : “);
    lcd.setCursor(10, 0);
    lcd.print(t);
    lcd.setCursor(0, 1);
    lcd.print(“Humidity
              : “);
    lcd.setCursor(7, 1);
    lcd.print(h);
}
// the function turning the LED light on-off when the photoresistor is dark-bright
void photoDisplay(int photoPin, int ledPin)
{
    int photoData = analogRead(photoPin);
    if (photoData <= 30)
        digitalWrite(ledPin, HIGH);
    else
        digitalWrite(ledPin, LOW); // if there is only 1 command after if/else command block, you will not need to use {}
}
