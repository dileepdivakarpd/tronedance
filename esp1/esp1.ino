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


char auth[] = "e56af2e17c884df1a35a1ebda60af907";
char ssid[] = "trone";
char pass[] = "connection";
int pinData = 0;
float prev_data=0;

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
 led(8.04,9.596);
 led(12.809,13.1);
 led(13.283,14.645);
 led(17.3,17.465);
 led(18.315,18.558);
 led(32.873,34);
 led(43.226,43.740);
 led(46.397,46.779);
 led(58.0263,58.312);
 led(67.9103,69.615);
 led(71.625,72.825);
 led(106.145,111.399);
 led(126.075,126.645);
 led(129.775,130.355);
 led(138.45,141.933);
 led(142.045,144.132);
 led(157.461,158.17);
 led(161.145,161.645);
 led(185.702,187.577);
 led(198.962,200.962);
 led(241.932,263.520);
  
}
void led( float t1,float t2)
{
  float del_s_off=t1-prev_data;
  float del_s_on=t2-t1;
  prev_data=t2;digitalWrite(2, HIGH);
  delay(1000*del_s_off);
  digitalWrite(2,LOW);
  delay(1000*del_s_on);
  digitalWrite(2, HIGH);
  
}

