void setup() {
  pinMode(D2,OUTPUT);
  pinMode(A0,INPUT);
}

void loop() {
   int POTValue = analogRead(A0);
   digitalWrite(D2,HIGH);
   delay(POTValue);
   digitalWrite(D2,LOW);
   delay(POTValue);
}
