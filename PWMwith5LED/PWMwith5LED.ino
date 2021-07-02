void setup() 
{
  pinMode(D2, OUTPUT);
  pinMode(D5, OUTPUT);
  pinMode(D6, OUTPUT);
  pinMode(D8, OUTPUT);
  pinMode(D4, OUTPUT);
}


void loop() 
{
  analogWrite(D2,0);
  analogWrite(D4,64);
  analogWrite(D5,127);
  analogWrite(D6,191);
  analogWrite(D8,255);
}
