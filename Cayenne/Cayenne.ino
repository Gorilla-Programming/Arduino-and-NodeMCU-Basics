/*
This example sketch shows how a value can be sent from the Arduino to the Cayenne Dashboard at automatic intervals.

The CayenneMQTT Library is required to run this sketch. If you have not already done so you can install it from the Arduino IDE Library Manager.

Steps:
1. Set the Cayenne authentication info to match the authentication info from the Dashboard.
2. Compile and upload the sketch.
3. A temporary widget will be automatically generated in the Cayenne Dashboard. To make the widget permanent click the plus sign on the widget.
*/

#define CAYENNE_PRINT Serial     // Comment this out to disable prints and save space
#include <CayenneMQTTESP8266.h> // Change this to use a different communication device. See Communications examples.


char ssid[]="FastFiber";
char pass[]="Ankit@32";
char username[] = "de89a320-8d59-11eb-8779-7d56e82df461";
char password[] = "86fa9daffc88122b19991195b8a6aae7387a8b2a";
char clientID[] = "6284f380-8d5c-11eb-8779-7d56e82df461";

#define VIRTUAL_CHANNEL 1

void setup()
{
	Serial.begin(9600);
	Cayenne.begin(username, password, clientID,ssid,pass);
  pinMode(D0,OUTPUT);
}
void publishData()
{
  int val=random(0,100);
  Cayenne.virtualWrite(V2, val);
}
void loop()
{
  
}
