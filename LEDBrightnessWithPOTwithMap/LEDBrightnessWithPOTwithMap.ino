void setup() {
  pinMode(D0,OUTPUT);
}

void loop() {
   int POTValue = analogRead(A0);
   int val = map(POTValue,0,1023,0,255);
   analogWrite(D0,val);
}
