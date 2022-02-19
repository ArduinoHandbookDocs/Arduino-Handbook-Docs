#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2); // declare the pins.

void setup()
{
   lcd.begin(16,2); // declare the lcd parameters: there are 16 columns and 2 rows; this can be changed depends on which LCD you buy, e.g., the one with 8 columns and 4 rows, it would be (8,4).

}
void loop()
{
  lcd.clear();
  lcd.setCursor(0,0); // set the cursor at column 1, line 1.
  lcd.print(“Hello World.”); // print Hello World on LCD display.
  lcd.setCursor(0,1); // set the cursor at column 1, line 2.
  lcd.print(millis()/1000); // print the time since initialization.
  lcd.setCursor(5,1); // set the curson at column 5, line 2.
  lcd.print(“giay”);
  delay(1000); //pause 1 second between counts.
}
