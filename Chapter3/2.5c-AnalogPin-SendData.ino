int inputPin = A0;
void setup()
{
   Serial.begin(9600); //start Serial communication, set baudrate of 9600.
}
void loop () 
{
   int data = 0 // declare variable data of type int.
   data = analogRead(inputPin); // read analog data from inputPin.
   Serial.println(data); // send data to the computer.
   delay(1000); // wait 1s before continuing reading and sending data.
}  
