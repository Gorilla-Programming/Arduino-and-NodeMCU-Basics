
void setup()
{
  pinMode(D4, OUTPUT); 
  pinMode(D5, INPUT); 
void loop()
{
  int val = digitalRead(D5);
  if (val == HIGH)
  {
    digitalWrite(D4, LOW);
  } 
  else 
  {
    digitalWrite(D4, HIGH); 
  }
}
