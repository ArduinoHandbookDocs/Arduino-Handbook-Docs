/* Example 2.1j: Random light on control */
void setup() {
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
}

void loop()
{
  digitalWrite(13, LOW);
  digitalWrite(12, LOW);
  digitalWrite(11, LOW);
  digitalWrite(10, LOW);
  digitalWrite(9, LOW);
  // turn off all lights.
  delay(500);
  long rand = random(9,14); // choose a random number
  from 9 to 13
  digitalWrite(rand, HIGH); // light up the corresponding light to a random value
  delay(500);
  digitalWrite(rand, LOW); // turn off the light you just turned on
}
