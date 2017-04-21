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


char auth[] = "abcc3fc6a52e441c874b9cd8593d70f6";

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
  led(17.727,17.971);
  led(18.788,19.060);
  led(39.924,44.426);
  led(59.1703,59.4563);
  led(68.702,69.615);
  led(73.615,74.815);
  led(115.715,118.945);
  led(119.875,120.795);
  led(121.705,122.635);
  led(131.225,134.543);
  led(151.125,152.995);
  led(162.645,163.145);
  led(168.32,174.061);
  led(181.935,185.705);
  led(196.902,205.962);
  led(280.962,286.229);
  led(288.933,290.837);
  led(306.961,308.037);
  
  
  
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

