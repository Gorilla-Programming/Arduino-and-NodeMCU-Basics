#define CAYENNE_PRINT Serial
#include <CayenneMQTTESP8266.h>


char ssid[]="FastFiber";
char pass[]="Ankit@32";
char username[] = "de89a320-8d59-11eb-8779-7d56e82df461";
char password[] = "86fa9daffc88122b19991195b8a6aae7387a8b2a";
char clientID[] = "6284f380-8d5c-11eb-8779-7d56e82df461";

int led=D2;
void setup()
{
  Serial.begin(9600);
  Cayenne.begin(username, password, clientID, ssid, pass);
  pinMode(led,OUTPUT);
  delay(200);
}

void loop()
{
  Cayenne.loop();
  publishdat();
  delay(2000);
}

void publishdat()
{
  int POTval=analogRead(A0);
  Cayenne.virtualWrite(V0, POTval);
}
CAYENNE_IN(V0)
{
  int val = getValue.asInt();
  Serial.println(val);
  analogWrite(led,val);
}
