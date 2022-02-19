int poten= A2; //Specify analog pin A2 to read rheostat
int led= 6;
void setup(){
pinMode(led, OUTPUT);
}
void loop() {
int potenValue = analogRead(poten); // read analog
signal, get rheostat value
analogWrite(led, potenValue);
}
