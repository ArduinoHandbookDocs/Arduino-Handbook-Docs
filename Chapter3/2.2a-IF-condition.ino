int led = 13;

void setup(){
  pinMode(led, OUTPUT);
  int a = 2; //create variable a to compare in if statement

  if (a < 5){
    digitalWrite(led, HIGH); //because a = 2 and 2 < 5, the LED is on
  } else digitalWrite(led, LOW);

  delay(2000);

  if (a > 5){
    digitalWrite(led, HIGH);
  } else digitalWrite(led, LOW); //because a = 2 and 2 < 5 the LED is off
  
  delay(2000);
  digitalWrite(led, LOW);
}

void loop(){ }
