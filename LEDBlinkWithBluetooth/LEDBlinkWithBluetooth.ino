void setup() {
  Serial.begin(9600);
  pinMode(D0,OUTPUT);

}

void loop() {
  if(Serial.available())
  {
    int a=Serial.read();
    if(a==1)
    digitalWrite(D0,HIGH);
    else if(a==0)
    digitalWrite(D0,LOW);
  }
}
