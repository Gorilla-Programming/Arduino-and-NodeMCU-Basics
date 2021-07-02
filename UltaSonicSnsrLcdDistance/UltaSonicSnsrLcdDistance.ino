const int trigger = 8;
const int echo = 9;
long waqt = 0;
int duri = 0;
#include <LiquidCrystal.h>
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);


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
  duri = (waqt * 0.034)/2;
  lcd.print("Time = ");
  lcd.print(waqt);
  lcd.print("ms");
  lcd.setCursor(0,1);
  if(waqt>=3000)
  lcd.print("Item notin range");
  else{
  lcd.print("Distance= ");
  lcd.print(duri);
  lcd.print(" cm");
  }
  delay(1000);
  lcd.clear();
}
