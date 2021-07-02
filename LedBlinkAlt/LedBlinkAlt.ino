
void setup() {
  pinMode(D0, OUTPUT);
  pinMode(D1, OUTPUT);
}

void loop() {
  digitalWrite(D0, HIGH);
  digitalWrite(D1, LOW);
  delay(2000);                       
  digitalWrite(D0, LOW); 
  digitalWrite(D1, HIGH);
  delay(2000); 
}                      
