#include<SoftwareSerial.h>
SoftwareSerial BTSerial(D3,D4);

void setup()
{
  BTSerial.begin(9600);
  pinMode(D0,OUTPUT);
}

void loop()
{
  if(BTSerial.available())
  {
    int a=BTSerial.read();
    if(a==1)
    digitalWrite(D0,HIGH);
    else if(a==0)
    digitalWrite(D0,LOW);
  }
}
