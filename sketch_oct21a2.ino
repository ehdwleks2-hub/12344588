#include <ESP8266WiFi.h>
#include <ESP8266WebServer.h>
#include <TM1638.h>


//Soft
const char* ssid="홍준영";
const char* password ="12341234";

TM1638 aa(D2,D1,D0);
ESP8266Webserver server(80);

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}
