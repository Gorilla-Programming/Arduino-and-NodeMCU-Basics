void setup() 
{
  pinMode(D0, OUTPUT);  
  pinMode(D1, INPUT); 
  Serial.begin(9600);  
}
void loop() 
{
  digitalWrite(D0, LOW);  
  delayMicroseconds(2);   
  digitalWrite(D0, HIGH); 
  delayMicroseconds(10);
  digitalWrite(D0, LOW);
  int duration = pulseIn(D1,HIGH);
  int distance = duration*0.034/2;
  Serial.print("Distance : ");
  Serial.println(distance);
  delay(1000);
}
