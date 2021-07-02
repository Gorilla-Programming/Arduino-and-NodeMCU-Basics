#include<dht.h>
#include <LiquidCrystal.h>
const int en = D1;
const int rs = D2;
dht DHT;
LiquidCrystal lcd(rs,en,D3,D4,D5,D6);
void setup() {
  lcd.begin(16,2);
}

void loop() {
  DHT.read11(D0);
  lcd.setCursor(0,0);
  lcd.print(DHT.humidity,1);
  lcd.setCursor(0,1);
  lcd.print(DHT.temperature,1);
}
