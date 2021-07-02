const int en = D0;
const int rs = D1;
const int trigger = D6;
const int echo = D7;
int waqt = 0;
float doori = 0;

#include <LiquidCrystal.h>
LiquidCrystal lcd(rs,en,D2,D3,D4,D5);

void setup() {
lcd.begin(16, 2);
pinMode(trigger, OUTPUT);
pinMode(echo, INPUT);
}

void loop() 
{
  digitalWrite(trigger, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigger, LOW);
  waqt = pulseIn(echo, HIGH);
  doori = (waqt * 0.034)/2;
  lcd.setCursor(0,0);
  lcd.print("Distance= ");
  lcd.print(doori);
  lcd.print(" cm");
  delay(1000);
  lcd.clear();
}
