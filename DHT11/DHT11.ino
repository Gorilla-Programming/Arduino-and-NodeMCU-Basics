#include<dht.h>
dht DHT;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int value = DHT.read11(D0);
  Serial.println(" Humidity ");
  Serial.println(DHT.humidity,1);
  Serial.println(" Temperature ");
  Serial.println(DHT.temperature,1);
  

}
