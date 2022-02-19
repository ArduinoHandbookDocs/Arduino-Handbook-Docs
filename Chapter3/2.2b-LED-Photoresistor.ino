int photo = A1; //specifies the analog pin A1 to read the photoresistor
int photoValue; //initialize the variable to read the photoresistor value
int led= 10;

void setup(){
  pinMode(led, OUTPUT);
}

void loop() {
  photoValue= analogRead(photo); // read analog signal from photoresistor
  if (photoValue <= 15){
    digitalWrite(led, HIGH)
  } else {
    digitalWrite(led, LOW);
  }
}
