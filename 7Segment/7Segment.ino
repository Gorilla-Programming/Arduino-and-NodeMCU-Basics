void setup() 
{ 
  pinMode(D0,OUTPUT);
  pinMode(D1,OUTPUT);
  pinMode(D2,OUTPUT);
  pinMode(D3,OUTPUT);
  pinMode(D4,OUTPUT);
  pinMode(D5,OUTPUT);
  pinMode(D6,OUTPUT);
}

void loop() 
{
  
   digitalWrite(D0, HIGH);
   digitalWrite(D1, HIGH);
   digitalWrite(D2, LOW);
   digitalWrite(D3, HIGH);
   digitalWrite(D4, HIGH);
   digitalWrite(D5, LOW);
   digitalWrite(D6, HIGH);
   delay(1000);
   digitalWrite(D0, HIGH);
   digitalWrite(D1, LOW);
   digitalWrite(D2, HIGH);
   digitalWrite(D3, HIGH);
   digitalWrite(D4, LOW);
   digitalWrite(D5, HIGH);
   digitalWrite(D6, HIGH);
   delay(1000);
}
 
