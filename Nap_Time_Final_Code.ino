// Jenna Hughes and John Martin
// CSC 386: Embedded Systems
// Nap Time

//Help from: https://www.arduino.cc/en/tutorial/pushbutton
//

#include <LiquidCrystal.h>
const int rs = 13, en = 12, d4 = 11, d5 = 10, d6 = 9, d7 = 8;
const int buzzer = 2;  //buzzer to arduino pin 2
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
int inPingr = 3;  // grey button 
int inPinge = 4;  // green button
int inPinre = 5;  // red button
int inPinbl = 6;  // blue button
int inPinye =7;  // yellow button and shut off button
int valgr = 0;    // variable for reading the pin status
int valge = 0;    // variable for reading the pin status
int valre = 0;    // variable for reading the pin status
int valbl = 0;    // variable for reading the pin status
int valye = 0;    // variable for reading the pin status

void setup() {
  (lcd, OUTPUT);             // declare lcd  as output
  pinMode(inPingr, INPUT);    // declare pushbutton as input
  lcd.begin(16, 1);        // set up the LCD's number of columns and rows:
  pinMode(buzzer, OUTPUT);  //Set buzzer at pin 2 as an output                      
}


void loop(){
  valgr = digitalRead(inPingr);  // read input value
  valye = digitalRead(inPinye);  // read input value
  valge = digitalRead(inPinge);  // read input value
  valre = digitalRead(inPinre);  // read input value
  valbl = digitalRead(inPinbl);  // read input value
  if (valgr == HIGH) {    lcd.setCursor(16, 1);
  // set the display to automatically scroll:
  lcd.autoscroll();
    lcd.print("You have 5sec to sleep");
    while (valye == LOW);{   //Code runs until the kill switch (Yellow) is hit
      delay(5000);       //Sleep for 5 seconds
      tone(buzzer, 1000);}    //buzzer sounds
      delay(1000);        //buzzer suonds for 1 seconds
    //if (valye == HIGH);    //attempting to make the buzzer turn off after the yellow button is hit
      noTone(buzzer);
      delay(500);
  }
  
  else if (valge == HIGH) {    lcd.setCursor(16, 1);
  // set the display to automatically scroll:
  lcd.autoscroll();
    lcd.print("You have 10sec to sleep");
    while (valye == LOW); {  ////Code runs until the kill switch (Yellow) is hit
      delay(10000);     //timer runs for 10 seconds
      tone(buzzer, 1000); }   //buzzer sounds
      delay(3000);        //buzzer suonds for 2 seconds
      noTone(buzzer);
    delay(500);
  }
  else if (valre == HIGH) {    lcd.setCursor(16, 1);
  // set the display to automatically scroll:
  lcd.autoscroll();
    lcd.print("You have 20sec to sleep");
    while (valye == LOW); {  //Code runs until the kill switch (Yellow) is hit
      delay(20000);      //timer runs for 20 seconds
      tone(buzzer, 1000); }   //buzzer sounds
      delay(3000);        //buzzer suonds for 3 seconds
      noTone(buzzer);
    delay(500);
  }
  else if (valbl == HIGH) {    lcd.setCursor(16, 1);
  // set the display to automatically scroll:
  lcd.autoscroll();
    lcd.print("You have 1min to sleep");    //Code runs until the kill switch (Yellow) is hit
    while (valye == LOW); {
      delay(60000);           //timer runs for 60 seconds
      tone(buzzer, 1000);}    //buzzer sounds
      delay(3000);        //buzzer suonds for 3 seconds
      noTone(buzzer);
    delay(500);
  }
  else if  (valye == HIGH) {
    digitalWrite; // turn on automatic scrolling
  lcd.autoscroll();
    lcd.print("Reset.");
    delay(3000);
  // clear screen for the next loop:
  lcd.clear(); // turn LED OFF
  delay(100);
  } else {
    (lcd, HIGH);  // turn LED ON
    lcd.clear();
  }
}
