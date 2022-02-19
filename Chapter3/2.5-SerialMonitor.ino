char data; //declare the variable reading this data.
void setup() {
   Serial.begin(9600); //start Serial.
}
void loop() {

// check if there is data being sent to Arduino board
   if (Serial.available()){
      data = Serial.read(); // read the data sent to Arduino board from Serial Monitor.
      Serial.println(data); // send this data to Serial Monitor.
   }
}
