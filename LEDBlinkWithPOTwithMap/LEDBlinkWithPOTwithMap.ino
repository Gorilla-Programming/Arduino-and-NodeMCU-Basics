void setup() {
  pinMode(D2,OUTPUT);
}

void loop() {
   int POTValue = analogRead(A0);
   int val = map(POTValue,0,1023,0,255);
   digitalWrite(D2,HIGH);
   delay(val);
   digitalWrite(D2,LOW);
   delay(val);
}
