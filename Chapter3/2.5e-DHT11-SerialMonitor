#include “DHT.h” // add DHT library into the program.
#define DHTPIN 2 // declare the pin reading the data is pin 2 on Arduino.
#define DHTTYPE DHT11 // declare the sensor type in use is DHT11
DHT dht(DHTPIN, DHTTYPE): // declare the dht object dht using DHT library.
void setup() {
  Serial.begin(9600);
  Serial. Println(“DHT11 test!”);
  dht.begin(): // start dht object.
}
void loop() {
  delay(2000); // read data every 2 seconds.
  float t = dht.readTemperature(); // read the temperature value.
  float h = dht.readHumidity(); // read the humidity value.
  float realfeel = dht.computeHeatIndex(t, h, false);
  Serial.print(“Temperature: “);
  Serial.print(t); // display the temperature on Serial Monitor.
  Serial.print(“ °C  ”);
  Serial.print(“Humidity: “);
  Serial.print(h); //  display the humidity on Serial Monitor.
  Serial.print(“%  “);
  Serial.print(“Real Feel: “); // display the real feel temperature on Serial Monitor.
Serial.print(“ °C  ”);

}
