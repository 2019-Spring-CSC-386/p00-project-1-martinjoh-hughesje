// Help https://www.arduino.cc/en/tutorial/pushbutton
//
//
//


#include <LiquidCrystal.h>
const int rs = 13, en = 12, d4 = 11, d5 = 10, d6 = 9, d7 = 8;
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
                        
}


void loop(){
  valgr = digitalRead(inPingr);  // read input value
  valye = digitalRead(inPinye);  // read input value
  valge = digitalRead(inPinge);  // read input value
  valre = digitalRead(inPinre);  // read input value
  valbl = digitalRead(inPinbl);  // read input value
  if (valgr == HIGH) {    lcd.setCursor(16, 1);
    Serial.print("Hello");
  // set the display to automatically scroll:
  lcd.autoscroll();
    lcd.print("You have 10mins to sleep");
    while (valye == LOW);
      delay(600000);
      //TURN ON BUZZER
    //TURN OFF BUZZER
    delay(500);
  }
  else if (valge == HIGH) {    lcd.setCursor(16, 1);
    Serial.print("Hello");
  // set the display to automatically scroll:
  lcd.autoscroll();
    lcd.print("You have 20mins to sleep");
    while (valye == LOW);
      delay(1200000);
      //TURN ON BUZZER
    //TURN OFF BUZZER
    delay(500);
  }
  else if (valre == HIGH) {    lcd.setCursor(16, 1);
    Serial.print("Hello");
  // set the display to automatically scroll:
  lcd.autoscroll();
    lcd.print("You have 60mins to sleep");
    while (valye == LOW);
      delay(3600000);
      //TURN ON BUZZER
    //TURN OFF BUZZER
    delay(500);
  }
  else if (valbl == HIGH) {    lcd.setCursor(16, 1);
    Serial.print("Hello");
  // set the display to automatically scroll:
  lcd.autoscroll();
    lcd.print("You have 90mins to sleep");
    while (valye == LOW);
      delay(5400000);
      //TURN ON BUZZER
    //TURN OFF BUZZER
    delay(500);
  }
  else if  (valye == HIGH) {
    digitalWrite; // turn off automatic scrolling
  lcd.autoscroll();
    lcd.print("Stopped. Hit reset.");
  // clear screen for the next loop:
  lcd.clear(); // turn LED OFF
  delay(100);
  } else {
    (lcd, HIGH);  // turn LED ON
  }
}
