int greenLed= 6;
int button= 13;
int currentStatus = 0; //set the variable that controls the lamp's current mode

void setup()
{
  pinMode(greenLed, OUTPUT);
  pinMode(button, INPUT);
}

void loop(){
boolean buttonState= digitalRead(button); //read button value.
// each time the button is pressed, the control variable is added 1 value
if (buttonState ==1) {
delay(30);
currentStatus = currentStatus + 1;
}
/* perform the division by 3 to get the remainder for the currentStatus variable. 
The result is 0, 1, 2 corresponding to 3 modes of lights: off, medium
light, bright light */
switch (currentStatus % 3) {
  case 0: //mode 0, light is off
    analogWrite(greenLed, 0);
  break;
    
  case 1: //mode 1, medium light
    analogWrite(greenLed, 99);
  break;
    
  case 2: //mode 2, the light is on
    analogWrite(greenLed, 255);
  break;
default:
break;
}
}
