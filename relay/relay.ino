const int fanRelay = D1;
const int lightRelay = D2;
void setup() 
{
  pinMode (D0, INPUT);
  pinMode(fanRelay,OUTPUT);
  pinMode(lightRelay,OUTPUT);
}
void loop()
{
  int x = digitalRead(D0);
  
  if(x == 1)
  {
    digitalWrite(lightRelay,HIGH);
    digitalWrite(fanRelay,HIGH);
  }
}
