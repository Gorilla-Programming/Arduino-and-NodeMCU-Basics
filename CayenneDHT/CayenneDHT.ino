#define CAYENNE_PRINT Serial
#include <CayenneMQTTESP8266.h>
#include<dht.h>
dht DHT;
#define DHTpin D0

char ssid[]="FastFiber";
char pass[]="Ankit@32";
char username[] = "de89a320-8d59-11eb-8779-7d56e82df461";
char password[] = "86fa9daffc88122b19991195b8a6aae7387a8b2a";
char clientID[] = "6284f380-8d5c-11eb-8779-7d56e82df461";

void setup()
{
  Serial.begin(9600);
  Cayenne.begin(username, password, clientID, ssid, pass);
  delay(200);
}

void loop()
{
  Cayenne.loop();
  DHT.read11(DHTpin);
  float hum = DHT.humidity;
  float temp = DHT.temperature;
  Cayenne.virtualWrite(V0, hum);
  Cayenne.virtualWrite(V1, temp);
  delay(2000);
}
