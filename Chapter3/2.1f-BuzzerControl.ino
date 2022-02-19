int photo= A1; //specifies the analog pin A1 to read the photoresistor
int photoValue; //initialize the variable to read the photoresistor value
int led= 6; // pin 6 can use analogWrite() function

void setup(){
pinMode(led, OUTPUT);
}

void loop() {
photoValue = analogRead(photo); // read analog signal, get photoresistance value
analogWrite(led, photoValue/4); // turn on the light at pin 6 based on the light intensity read from the photoresistor
}
