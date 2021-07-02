#include <LiquidCrystal.h>
const int en = D0;
const int rs = D1;
int count = 0;
LiquidCrystal lcd(rs,en,D3,D4,D5,D6);
void setup() 
{
  pinMode (D7, INPUT);
  lcd.begin(16,2);
  Serial.begin(9600);
}
void loop()
{
  int x = digitalRead(D7);
  
  if(x == 1)
  {
    count = count+1;
  }
  printcount();
}
void printcount()
{
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print(count);
}
