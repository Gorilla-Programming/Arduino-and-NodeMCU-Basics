void setup() 
{
  pinMode(D2, OUTPUT);
}


void loop() 
{
  for(int i=0;i<=255;i+=10)
  {
    analogWrite(D2,i);
    delay(500);
  }
  for(int i=255;i>=20;i-=10)
  {
    analogWrite(D2,i);
    delay(500);
  }
}
