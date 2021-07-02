void setup() {
  pinMode(D0,OUTPUT);
  pinMode(D1,OUTPUT);
  pinMode(D2,OUTPUT);
}

void loop() {
   int POTValue = analogRead(A0);
   int val = map(POTValue,0,1023,0,255);
   analogWrite(D0,val);
   delay(1000);
   analogWrite(D1,val);
   delay(1000);
   analogWrite(D2,val);
   delay(1000);
   
}
