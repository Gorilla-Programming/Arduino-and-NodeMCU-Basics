#include<Servo.h>
Servo servo;    
 
void setup() 
{ 
  servo.attach(D1);
  Serial.begin(9600);
} 
  
void loop() 
{                                  
   int POTValue = analogRead(A0);
   int val = map(POTValue,0,1023,0,180);
   Serial.println("Position = ");
   Serial.println(val);  
   servo.write(val); 
   delay(500);                 
}
