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


char auth[] = "19954c7052174e048d298893ed0ebc24";

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
  digitalWrite(2, HIGH);
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
  led(16.5,17.3);
  led(17.971,18.315);
  led(43.9117,44.426);
  led(48.274,51.078);
  led(52.834,57.931);
  led(61.567,64.60);
  led(69.188,69.615);
  led(74.615,75.825);
  led(115.715,118.015);
  led(118.945,119.875);
  led(120.795,121.705);
  led(131.225,134.543);
  led(146.645,149.645);
  led(161.645,162.145);
  led(170.336,172.17);
  led(194.902,205.902);
  led(271.622,279.692);
  led(282.962,286.224);
  led(296.677,298.464);
  led(307.462,308.037);
  
  
  
  
  
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

