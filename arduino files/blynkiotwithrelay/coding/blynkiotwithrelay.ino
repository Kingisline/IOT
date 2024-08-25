#define BLYNK_TEMPLATE_ID "TMPL3CQ8LTfDx"
#define BLYNK_TEMPLATE_NAME "led"
#define BLYNK_AUTH_TOKEN "l_2VdFh9euZYf6xqBuWR1ekopOJ32uaJ"

#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h> 
 
#include <BlynkSimpleEsp8266.h>
 

char auth[] = BLYNK_AUTH_TOKEN;

char ssid[] = "realme 7 pro";  // type your wifi name
char pass[] = "abcdefghi";  // type your wifi password

int relaypin = D4;
void setup()
{     
  Serial.begin(115200);
  Blynk.begin(auth, ssid, pass);    
  pinMode(relaypin,OUTPUT);
 
  }

void loop()
{
  Blynk.run(); 
 }