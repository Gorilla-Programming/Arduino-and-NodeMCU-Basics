void setup() 
{
  pinMode(D2, OUTPUT);
}


void loop() 
{
  analogWrite(D2,0);
  delay (500);
  analogWrite(D2,64);
  delay (500);
  analogWrite(D2,127);
  delay (500);
  analogWrite(D2,191);
  delay (500);
  analogWrite(D2,255);
  delay (500); 
}
