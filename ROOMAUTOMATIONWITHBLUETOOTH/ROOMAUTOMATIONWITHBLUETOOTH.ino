#include <SoftwareSerial.h>
const int fanRelay = D0;
const int lightRelay = D1;
String value;
int TxD = D2;
int RxD = D3;
SoftwareSerial bluetooth(TxD, RxD);

void setup() 
{
  pinMode(fanRelay, OUTPUT);
  pinMode(lightRelay, OUTPUT);
  bluetooth.begin(9600);
}

void loop() 
{
 if (bluetooth.available())
 {
    value = bluetooth.readString();
    if(value == "TURN ON LIGHT")
    {
      digitalWrite(lightRelay, HIGH);
    }
    if(value == "TURN ON FAN")
    {
      digitalWrite(fanRelay, HIGH);      
    }
    if(value == "CLOSE LIGHT")
    {
      digitalWrite(lightRelay, LOW); 
    }
    if (value == "CLOSE FAN")
    {
      digitalWrite(fanRelay, LOW);         
    }
    if (value == "ACTIVATE MY ROOM")
    {
      digitalWrite(lightRelay, HIGH); 
      digitalWrite(fanRelay, HIGH); 
    }
    if (value == "DEACTIVATE MY ROOM")
    {
      digitalWrite(lightRelay, LOW);   
      digitalWrite(fanRelay, LOW);     
    }
 }
}
