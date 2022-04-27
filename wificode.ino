
#define BLYNK_PRINT Serial


#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char auth[] = "PsD1GU61xmcL-Ypbo02ycdE47sGaou11"; // the auth code that you got on your gmail
char ssid[] = "Pikachu"; // username or ssid of your WI-FI
char pass[] = "05061994"; // password of your Wi-Fi

void setup()
{
  // Debug console
  Serial.begin(115200);
  pinMode(D1,OUTPUT); 
  pinMode(D2,OUTPUT);
  pinMode(D3,OUTPUT);
  pinMode(D4,OUTPUT);

  digitalWrite(D1,HIGH);  
  digitalWrite(D2,HIGH); 
  digitalWrite(D3,HIGH);
  digitalWrite(D4,HIGH);
  
  

  Blynk.begin(auth, ssid, pass);
}

void loop()
{
  Blynk.run();
}
