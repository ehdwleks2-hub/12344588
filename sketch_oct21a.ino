#include <ESP8266WiFi.h>
#include <ESP8266WebServer.h>
#include <TM1638.h>

//Soft AP
const char* ssid="홍준영";
const char* password ="12341234";

TM1638 aa(D2,D1,D0);
ESP8266Webserver server(80);

void setup() {
Serial.begin(9600);
aa.setDisplayToDecNumber(12345678,0);
connectToWiFi();
server.on("/",handleRoot);//2.핸들러 등록(Request 처리)
server.begin();//3. 웹 서버 시작
}

void connectToWiFi() 
{
  Serial.println("Connecting to ");
  Serial.println(ssid);
  Serial.println(password);

  WiFi.softAP(ssid,password);

  Serial.println("");
  Serial.println("");
  Serial.println("");

}
