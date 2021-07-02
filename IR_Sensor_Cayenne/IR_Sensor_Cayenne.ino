#define CAYENNE_PRINT Serial
#include <CayenneMQTTESP8266.h>

char ssid[]="FastFiber";
char pass[]="MeraPassword";
char username[] = "de89a320-8d59-11eb-8779-7d56e82df461";
char password[] = "86fa9daffc88122b19991195b8a6aae7387a8b2a";
char clientID[] = "6284f380-8d5c-11eb-8779-7d56e82df461";

void setup()
{
  pinMode (D0, INPUT);
  Cayenne.begin(username, password, clientID, ssid, pass);
  delay(200);
}

void loop()
{
  Cayenne.loop();
  publishdata();
  delay(2000);
}
void publishdata()
{
  int x = digitalRead(D0);
  Cayenne.virtualWrite(V0, x);
}
