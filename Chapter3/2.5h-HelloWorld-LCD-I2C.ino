#include <Wire.h>
#include <LiquidCrystal.I2C.h>
LiquidCrystal.I2C lcd(0x3F,16,2); // initialize the input for LCD with 16 as the number of columns, 2 as the number of lines, 0x3F as the I2C address.
void setup()
{
  lcd.init(); // start the LCD display and allow the Arduino to use this display.
  lcd.backlight(); // switch on the LCD background light.
}
void loop()
{
  lcd.clear();
  lcd.setCursor(0,0); // set the cursor at line 1, column 1.
  lcd.print(“Hello World”); // print “Hello World” on LCD display.
  lcd.setCursor(0,1);
  lcd.print(millis()/1000); // print the duration since the startup of the program.
  lcd.setCursor(3,1);
  lcd.print(“giay”);
  delay(1000); // pause 1 second between counts.
}
