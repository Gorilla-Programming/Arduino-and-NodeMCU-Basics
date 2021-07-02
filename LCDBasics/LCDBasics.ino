#include <LiquidCrystal.h>
const int en = D0;
const int rs = D1;
LiquidCrystal lcd(rs,en,D3,D4,D5,D6);

void setup() {
  lcd.begin(16,2);
}

void loop() {
  lcd.setCursor(1,0);
  lcd.print("Ankit");
  lcd.setCursor(0,1);
  lcd.print("11901110");

}
