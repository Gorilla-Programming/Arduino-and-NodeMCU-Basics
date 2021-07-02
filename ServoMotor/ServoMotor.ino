#include<Servo.h>
Servo servo;    
 
void setup() 
{ 
  servo.attach(D1);
} 
  
void loop() 
{                                  
    servo.write(30);
    delay(500);  
    servo.write(60);
    delay(500);
    servo.write(90);
    delay(500);
    servo.write(120);
    delay(500);
    servo.write(150);
    delay(500);   
    servo.write(180);
    delay(500);                   
}
