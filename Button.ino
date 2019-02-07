// https://www.arduino.cc/en/tutorial/pushbutton- Just used this to see how to use the Push Button 
// https://www.arduino.cc/en/Tutorial/LiquidCrystalAutoscroll - This is helper coder for autoScroll 
// 
//


#include <LiquidCrystal.h>
const int rs = 13, en = 12, d4 = 11, d5 = 10, d6 = 9, d7 = 8;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
int inPingr = 3;  // grey button 
int inPinge = 4;  // green button
int inPinre = 5;  // red button
int inPinbl = 6;  // blue button
int inPinye =7;   // Yellow button 
int valgr = 0;    // variable for reading the pin status of the grey button 
int valge = 0;    // variable for reading the pin status of the green button 
int valre = 0;    // variable for reading the pin status of the red button 
int valbl = 0;    // variable for reading the pin status of the blue button
int valye = 0;    // variable for reading the pin status of the Yellow button  

void setup() {
  (lcd, OUTPUT);             // declare lcd (Liquid Crystal Display)  as output
  pinMode(inPingr, INPUT);    // declare grey pushbutton as input
  lcd.begin(16, 1);        // set up the LCD's number of columns and rows:
                        
}


void loop(){
  valgr = digitalRead(inPingr);  // read input value
  valye = digitalRead(inPinye); // read input value
  if (valgr == HIGH) {    lcd.setCursor(16, 1)
  lcd.autoscroll();            // set the display to automatically scroll:
    lcd.print("You have clicked the grey button, and you have 10mins to sleep ");
    delay(500);
  } else if  (valye == HIGH) {
    digitalWrite;             // turn off automatic scrolling
  lcd.noAutoscroll();         // clear screen for the next loop:
  lcd.clear();                // turn LED OFF 
  } else {
    (lcd, HIGH);              // turn LED ON
  }
}
 
