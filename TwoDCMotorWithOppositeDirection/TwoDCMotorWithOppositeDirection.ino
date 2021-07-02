const int lf= D0;
const int lb= D1;
const int rf= D2;
const int rb= D3;

void setup()
{
  pinMode(lf,OUTPUT);
  pinMode(lb,OUTPUT);
  pinMode(rf,OUTPUT);
  pinMode(rb,OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  Serial.println("Stop");
  digitalWrite(lf,LOW);
  digitalWrite(lb,LOW);
  digitalWrite(rf,LOW);
  digitalWrite(rb,LOW);
  delay(1000);
  
  Serial.println("One Forward");
  digitalWrite(lf,HIGH);
  digitalWrite(lb,LOW);
  Serial.println("One Backward");
  digitalWrite(rf,LOW);
  digitalWrite(rb,HIGH);
  delay(5000);
}
