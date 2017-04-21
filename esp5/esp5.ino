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


char auth[] = "bea8a6dca0e7484784bf65d3335ca163";

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
 digitalWrite(2, HIGH);
  Blynk.begin(auth, ssid, pass);
  pinMode(2, OUTPUT);
}

void loop()
{
  digitalWrite(2,HIGH);
  while(pinData ==0)
  {
    Blynk.run();
  }
  pinData = 0; 
  led(12.468,12.699);
  led(17.465,17.727);
  led(18.558,18.788);
  led(21.888,24.994);
  led(28.611,32.03);
  led(35.4,38.865);
  led(42.5403,43.0546);
  led(46.19,46.397);
  led(58.4076,58.6936); 
  led(67.058,69.61);
  led(69.625,70.825);
  led(107.058,112.399);
  led(125.145,125.715);
  led(128.845,129.415);
  led(138.488,141.933);
  led(154.890,157.461);
  led(163.645,164.145);
  led(170.336,172.17);
  led(181.935,183.822);
  led(195.962,205.962);
  led(271.622,279.692);
  led(282.962,286.229);
  
  
  
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

