const int lf= D0;
const int lb= D1;
void setup()
{
  pinMode(lf,OUTPUT);
  pinMode(lb,OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  Serial.println("Stop");
  digitalWrite(lf,LOW);
  digitalWrite(lb,LOW);
  delay(1000);
  
  Serial.println("Forward");
  digitalWrite(lf,HIGH);
  digitalWrite(lb,LOW);
  delay(5000);
  
  Serial.println("Stop");
  digitalWrite(lf,HIGH);
  digitalWrite(lb,HIGH);
  delay(1000);
  
  Serial.println("Backward");
  digitalWrite(lf,LOW);
  digitalWrite(lb,HIGH);
  delay(5000);
}
