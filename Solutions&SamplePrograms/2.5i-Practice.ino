#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x3F, 16, 2); // create input for LCD (I use type 1602) where 16 is the number of columns, 2 is the number of rows.
int photoresistor = A0;             // initialize the photoresistor pin A0.
void setup()
{
    lcd.init();
    start the LCD,
        start allowing the Arduino to use the screen.lcd.backlight(); // turn on the 16x2 LCD backlight.
}
void loop()
{
    lcd.clear();                                        // clear the LCD screen.
    int PhotoresistorValue = analogRead(photoresistor); // read the photoresistor value (analog).
    lcd.setCursor(0, 0);                                // move the cursor to row 1, column 1.
    lcd.print(PhotoresistorValue);                      // print the photoresistor value into the LCD.
    delay(1000);                                        // delay the program for 1 second.
}
