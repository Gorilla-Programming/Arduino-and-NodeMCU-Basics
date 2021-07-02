#include <LiquidCrystal.h>
const int en = D0;
const int rs = D1;
int count;
bool inside = false;
bool outside = false;
int state =0;
LiquidCrystal lcd(rs,en,D3,D4,D5,D6);
void setup() 
{
  pinMode (D7, INPUT);
  pinMode (D2, INPUT);
  lcd.begin(16,2);
  Serial.begin(9600);
}
void loop()
{
  if(digitalRead(D7))
  {
    if(outside!=true){
      inside=true;
      state=1;
    }
  }
  if(digitalRead(D2))
  {
    if(inside!=true){
      outside=true;
      state=1;
    }
  }
  if(state==1 && outside==true)
  {
    count--;
    printcount();
    state=0;
    inside = false;
    outside = false;
  }
  if(state==1 && inside==true)
  {
    count++;
    printcount();
    state=0;
    inside = false;
    outside = false;
  }
}
void printcount()
{
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print(count);
}
