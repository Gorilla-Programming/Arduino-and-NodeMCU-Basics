
void setup() {
  pinMode(D2, OUTPUT);
  pinMode(D5, INPUT);
}

void loop() {
  int val = digitalRead(D5); 
  if(val == HIGH)
  digitalWrite(D2, 1);
  else
  digitalWrite(D2, 0); 
}                      
