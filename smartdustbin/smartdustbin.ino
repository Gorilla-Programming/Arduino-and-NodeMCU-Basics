#include<Servo.h>
Servo servo;  
int dustBinOpen = 0;  
void setup() 
{
  pinMode (D0, INPUT);
  servo.attach(D1);
  pinMode(D2, OUTPUT);  
  pinMode(D3, INPUT);
  Serial.begin(9600);
}
void loop()
{
  
  int x = digitalRead(D0);
  
  if(x == 1)
  {
    digitalWrite(D2, LOW);  
    delayMicroseconds(2);   
    digitalWrite(D2, HIGH); 
    delayMicroseconds(10);
    digitalWrite(D2, LOW);
    int duration = pulseIn(D3,HIGH);
    int distance = duration*0.034/2;
    if(distance<30){
      servo.write(90);
      delay(2000);
      dustBinOpen = 1;
    }
  }
  else{
    if(dustBinOpen == 1)
    {
      servo.write(0);
      delay(2000);
      dustBinOpen = 0;
    }
  }
}
