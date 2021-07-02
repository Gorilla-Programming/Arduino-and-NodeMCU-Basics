#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char auth[] = "IaJA1Q0M9A1ZdVWM7p9S0_NJ5O7bPY-9";
char ssid[] = "Rail-Wire-2.0";
char pass[] = "Estes@1201";

void setup()
{
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass);
}

void loop()
{
  Blynk.run();
}
