void setup()
{
  pinMode(D2, OUTPUT); 
  pinMode(D4, INPUT); 
  Serial.begin(9600);
}
void loop()
{
  int val = digitalRead(D4);
  if (val == HIGH)
  {
    digitalWrite(D2, HIGH);
    Serial.println("LED is ON - 5V");
  } 
  else 
  {
    digitalWrite(D2, LOW); 
    Serial.println("LED is OFF - 0V");
  }
}
