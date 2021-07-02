#include <LiquidCrystal.h>
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);


void setup() {
  lcd.begin(16, 2);
  
}

void loop() {
  int sensorValue = analogRead(A0);
  float Voltage = sensorValue*(5.0/1023.0);
  lcd.print("VOLTAGE = ");
  lcd.print(Voltage);
  delay(1000);
  lcd.clear();
}
