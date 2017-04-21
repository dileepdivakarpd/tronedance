/**************************************************************
 * Blynk is a platform with iOS and Android apps to control
 * Arduino, Raspberry Pi and the likes over the Internet.
 * You can easily build graphic interfaces for all your
 * projects by simply dragging and dropping widgets.
 *
 *   Downloads, docs, tutorials: http://www.blynk.cc
 *   Sketch generator:           http://examples.blynk.cc
 *   Blynk community:            http://community.blynk.cc
 *   Social networks:            http://www.fb.com/blynkapp
 *                               http://twitter.com/blynk_app
 *
 * Blynk library is licensed under MIT license
 * This example code is in public domain.
 *
 **************************************************************
 * This example runs directly on ESP8266 chip.
 *
 * Note: This requires ESP8266 support package:
 *   https://github.com/esp8266/Arduino
 *
 * Please be sure to select the right ESP8266 module
 * in the Tools -> Board menu!
 *
 * Change WiFi ssid, pass, and Blynk auth token to run :)
 *
 **************************************************************/

#define BLYNK_PRINT Serial    // Comment this out to disable prints and save space
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
#include <SPI.h>


char auth[] = "a89b85bcf6cf49e2a22b85108de11c2f";

// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "trone";
char pass[] = "connection";
int pinData = 0;
float prev=0;
BLYNK_WRITE(V1)
{
  pinData = param.asInt(); // assigning incoming value from pin V1 to a variable
} 

void setup()
{
  pinMode(2, OUTPUT);
  digitalWrite(2,HIGH);
  Blynk.begin(auth, ssid, pass);

  
}

void loop()
{
  digitalWrite(2,HIGH);
  while(pinData ==0)
  {
    Blynk.run();
  }
  pinData = 0; 
  led(11.20,13.283);
  led(16.5,19.476);
  led(26.096,27.297);
  led(41.167,41.6832);
  led(45.65,45.994);
  led(58.789,59.075);
  led(68.3365,69.615);
  led(72.615,73.825);
  led(107.576,112.399);
  led(124.225,124.645);
  led(127.875,128.445);
  led(138.488,141.933);
  led(152.488,154.895);
  led(162.145,162.645);
  led(169.318,172.948);
  led(197.962,200.962);
  led(271.622,279.692);
  led(286.932,288.933);
  led(306.462,308.037);  
}
void led( float del_s_off,float del_s_on)
{
  digitalWrite(2, HIGH);
  delay(1000*(del_s_off-prev));
  digitalWrite(2,LOW);
  delay(1000*(del_s_on-del_s_off));
  digitalWrite(2, HIGH);
  prev=del_s_on;
}

