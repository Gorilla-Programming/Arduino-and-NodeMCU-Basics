const int lf= D0;
const int lb= D1;
const int en1= D2;
void setup()
{
  pinMode(lf,OUTPUT);
  pinMode(lb,OUTPUT);
  pinMode(en1,OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  Serial.println("Stop");
  digitalWrite(lf,LOW);
  digitalWrite(lb,LOW);
  delay(1000);
  
  Serial.println("Forward");
  analogWrite(en1,191);
  digitalWrite(lf,HIGH);
  digitalWrite(lb,LOW);
  delay(5000);
  
  Serial.println("Stop");
  digitalWrite(lf,HIGH);
  digitalWrite(lb,HIGH);
  delay(1000);
  
  Serial.println("Backward");
  analogWrite(en1,127);
  digitalWrite(lf,LOW);
  digitalWrite(lb,HIGH);
  delay(5000);
}
