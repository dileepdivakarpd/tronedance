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


char auth[] = "e1911d69bd8b4c4796c6fdb245a95212";

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
  led(9.956,11.2);
  led(12.00,12.210);
  led(14.645,16.5);
  led(19.060,19.476);
  led(41.8546,42.3689);
  led(45.994,46.19);
  led(51.4215,52.4304);
  led(59.5516,59.837);
  led(59.933,61.567);
  led(67.4841,69.615);
  led(70.625,71.825);
  led(115.715,118.945);
  led(119.875,120.795);
  led(121.705,122.635);
  led(131.225,132.985);
  led(134.876,138.579);
  led(149.645,150.925);
  led(163.145,163.641);
  led(169.315,172.948);
  led(191.329,193.201);
  led(211.911,241.932);
  led(279.692,286.229);
  
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

