// https://www.arduino.cc/en/Tutorial/LiquidCrystalAutoscroll - same as what is here but there might be more info
// https://forum.arduino.cc/index.php?topic=387784.0 - this is some code someone did on the forum to make a timer 
// This is the Autoscroll Helper code set up for Our Arduino 
//

#include <LiquidCrystal.h>
const int rs = 13, en = 12, d4 = 11, d5 = 10, d6 = 9, d7 = 8; // but in our pin numbers 
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 1); // this sets rows and columns 
}

void loop() {
  // set the cursor to (0,0):
  // iterates through the numbers 
  lcd.setCursor(0, 0); // starts cursor in a more appropriate reading place
  // print from 0 to 9:
  for (int thisChar = 0; thisChar < 10; thisChar++) {
    lcd.print(thisChar);
    delay(500);
  }

  // set the cursor to (16,1):
  lcd.setCursor(16, 1);
  // set the display to automatically scroll:
  lcd.autoscroll();
  // print from 0 to 9:
  for (int thisChar = 0; thisChar < 10; thisChar++) {
    lcd.print(thisChar);
    delay(500);
  }
  // turn off automatic scrolling
  lcd.noAutoscroll();

  // clear screen for the next loop:
  lcd.clear();
}
