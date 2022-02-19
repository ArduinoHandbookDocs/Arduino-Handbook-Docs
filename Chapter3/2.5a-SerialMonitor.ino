char data;
String text = “”;
void setup() {
   Serial.begin(9600);
}
void loop() {
// check whether the data is being sent to Arduino board.
    if (Serial.available()){
       data = Serial.read(); // read the data
       text += data // add the data to the text
       // check whether the string has ended.
       if (data == ‘.’) {
           Serial.print(“The received text: “);
           Serial.println(text) // send the string to the computer.
           text = “”; // reset the string.
       }
}
