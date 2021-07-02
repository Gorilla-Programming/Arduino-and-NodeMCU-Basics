void setup() 
{
  pinMode (D0, INPUT);
  Serial.begin(9600);
}
void loop()
{
  int x = digitalRead(D0);
  
  if(x == 1)
  {
    Serial.println("Object is Detected");
  }
  else
  {
    Serial.println("Object is not Not Detected");
  }
}
