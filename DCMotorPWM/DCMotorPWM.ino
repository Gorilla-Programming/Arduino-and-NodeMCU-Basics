int i;
void setup()
{
pinMode(10,OUTPUT);
pinMode(9,OUTPUT);
pinMode(8,OUTPUT);
pinMode(7,OUTPUT);
pinMode(6,OUTPUT);
}
void loop()
{
//left

for(i=0;i<=255;i=i+20)
{
  digitalWrite(10,HIGH);
  digitalWrite(9,LOW);
  digitalWrite(8,HIGH);
  digitalWrite(7,LOW);
  analogWrite(6,i);
  delay(1000);
}

}
