char data; // declare the variable.
void setup() {
  Serial.begin(9600); // start Serial with baudrate 9600.
  pinMode(13, OUTPUT); // declare using digital pin 13, OUTPUT
}
void loop() {
  if (Serial.available()){
    data = Serial.read(); // read data sent from computer.
    Serial.print(“The received data: “);
    Serial.println(data); // send data to the computer for checking.
    if (data == ‘1’) digitalWrite(13,  HIGH); // turn the light on if data equals ‘1’.
    if (data == ‘0’) digitalWrite(13,  LOW); // turn the light off if data equals ‘0’.
  }
}
