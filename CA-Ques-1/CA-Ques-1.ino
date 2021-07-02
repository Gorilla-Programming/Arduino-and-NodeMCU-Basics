#include<dht.h>
#include <LiquidCrystal.h>
const int DHTPIN = D0;
const int rs = D1;
const int en = D2;
dht DHT;
LiquidCrystal lcd(rs,en,D3,D4,D5,D6);
void setup() {
  lcd.begin(16,2);
}

void loop() {
  DHT.read11(DHTPIN);
  lcd.setCursor(0,0);
  lcd.print("Humidity of Room");
  lcd.setCursor(0,1);
  lcd.print(DHT.humidity,1);
  delay(1000);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Room Temperature");
  lcd.setCursor(0,1);
  lcd.print(DHT.temperature,1);
  delay(1000);
  lcd.clear();
}
