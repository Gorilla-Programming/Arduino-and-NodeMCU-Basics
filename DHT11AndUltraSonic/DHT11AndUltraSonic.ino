#include<dht.h>
dht DHT;

void setup() {
  pinMode(D0, OUTPUT);  
  pinMode(D1, INPUT);
  Serial.begin(9600);
}

void loop() 
{
  int value = DHT.read11(D3);
  Serial.print(" Humidity of My Room : ");
  Serial.println(DHT.humidity,1);
  Serial.print(" Temperature of My Room : ");
  Serial.println(DHT.temperature,1);
  digitalWrite(D0, LOW);  
  delayMicroseconds(2);   
  digitalWrite(D0, HIGH); 
  delayMicroseconds(10);
  digitalWrite(D0, LOW);
  int duration = pulseIn(D1,HIGH);
  int distance = duration*0.034/2;
  Serial.print("Distance between TV screen and Eyes is : ");
  Serial.println(distance);
  delay(1000);
}
