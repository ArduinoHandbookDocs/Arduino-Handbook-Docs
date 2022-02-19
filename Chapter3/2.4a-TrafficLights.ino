int red = 13; //the pin of red light
int yellow = 12; //the pin of yellow light
int green = 11; //the pin of green light

void setup() {
   pinMode(red, OUTPUT);
   pinMode(yellow, OUTPUT);
   pinMode(green, OUTPUT);
   Serial.begin(9600);
}

void loop() {
   ledControl(red, 5000); //call out ledControl to control the red light in 5 seconds
   ledControl(yellow, 2000); //call out ledControl to control the yellow light in 2 seconds
   ledControl(green, 6000); //call out ledControl to control the green light in 6 seconds
}

// the function controls the light, the parameters include the signal pin of the light, “time” is the duration of the light being on. ledControl turns on the light connected to the pin, wait for “time”, then turns it off.

void ledControl(int pin, int time) {
    digitalWrite(pin, HIGH);
    delay(time);
    digitalWrite(pin, LOW);
