#include <LiquidCrystal.h>
// TIME VARIABLES
int hours = 0; // start hours
int minutes = 0; //start min
int seconds = 30; //start seconds
int counter = 1; // initial amount of presses
int counternow = 0; //intitial countercalc
const int rs = 13, en = 12, d4 = 11, d5 = 10, d6 = 9, d7 = 8;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

  
// ONE TIME RUN
void setup() {
  // put your setup code here, to run once:
  lcd.begin(16, 2);
  // Print a message to the LCD.
  lcd.setCursor(0,0);
  lcd.print("30 Sec PRO");
  lcd.setCursor(0,1);
  lcd.print("Push To Start!");

}

// REPEATED RUN
void loop() {
  buttonprog();
  // put your main code here, to run repeatedly:

}


void buttonprog() {
  int x;
  x = analogRead (0);
  lcd.setCursor(0,1);
  if (x < 60) {
    lcd.print ("Right ");
  }
  else if (x < 200) {
    lcd.print ("Up    ");
  }
  else if (x < 400){
    lcd.print ("Down  ");
  }
  else if (x < 600){
    counterprog();
    lcd.print (counternow);
 countdown();
  }
  else if (x < 800){
    lcd.print ("Select");
  }
}

void countdown() {
    delay(150);   
           while (hours > 0 || minutes > 0 || seconds >= 0) {
           lcd.setCursor(0, 1);
           (hours < 10) ? lcd.print("0") : NULL;
           lcd.print(hours);
           lcd.print(":");
           (minutes < 10) ? lcd.print("0") : NULL;
           lcd.print(minutes);
           lcd.print(":");
           (seconds < 10) ? lcd.print("0") : NULL;
           lcd.print(seconds);

           lcd.display();
           stepDown();
           delay(1000);
          }
}

void counterprog() {
    lcd.setCursor(12,0);
    counternow = ( counter++ );
    delay(400);
}


void trigger() {
  
}

void stepDown() {
 if (seconds > 0) {
 seconds -= 1;
 } else {
 if (minutes > 0) {
 seconds = 59;
 minutes -= 1;
 } else {
 if (hours > 0) {
 seconds = 59;
 minutes = 59;
 hours -= 1;
 } else {
 trigger();
 }
 } } }
