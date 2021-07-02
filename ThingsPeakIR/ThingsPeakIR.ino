#include<ESP8266WiFi.h>

String apiKey = "D0D7I58JLPIK2TMS";

const char *ssid = "JioGigaFiber";
const char *pass = "MeraPassword";
const char *server = "api.thingspeak.com";


WiFiClient client;

void setup()
{
    pinMode(D0,INPUT);
    Serial.begin(115200);
    delay(10);
    Serial.println("Connecting to ");
    Serial.println(ssid);
    
    
    WiFi.begin(ssid, pass);
    while (WiFi.status() != WL_CONNECTED)
    {
    delay(500);
    Serial.print(".");
    }
    Serial.println("");
    Serial.println("WiFi connected");

}

void loop()
{
  int x = digitalRead(D0);
  if (isnan(x))
  {
  Serial.println("Failed to read from IR sensor!");
  return;
  }
  if (client.connect(server,80))
  {
    String postStr = apiKey;
    postStr +="&field1=";
    postStr += String(x);
    postStr += "\r\n\r\n";
    
    client.print("POST /update HTTP/1.1\n");
    client.print("Host: api.thingspeak.com\n");
    client.print("Connection: close\n");
    client.print("X-THINGSPEAKAPIKEY: "+apiKey+"\n");
    client.print("Content-Type: application/x-www-form-urlencoded\n");
    client.print("Content-Length: ");
    client.print(postStr.length());
    client.print("\n\n");
    client.print(postStr);
    
    if(x==1)
    {
    Serial.print("Object is Detected");
    Serial.print(x);
    Serial.println("%. Send to Thingspeak.");
    }
  }
  client.stop();
  Serial.println("Waiting...");
  delay(1000);
}
