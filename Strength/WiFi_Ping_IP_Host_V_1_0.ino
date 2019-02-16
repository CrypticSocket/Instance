#include "ESP8266WiFi.h"
 
void setup() {
 
  Serial.begin(115200);
 
  int numberOfNetworks = WiFi.scanNetworks();
 
  for(int i =0; i<numberOfNetworks; i++){
 
      Serial.print("Network name: ");
      Serial.println(WiFi.SSID(i));
      Serial.print("Signal strength: ");
      Serial.println(WiFi.RSSI(i));
      Serial.println("-----------------------");
 
  }
 
}
 
void loop() {
  
  int numberOfNetworks = WiFi.scanNetworks();
  
  for(int i =0; i<numberOfNetworks; i++){
      if(WiFi.SSID(i)=="POCO PHONE")
      {
        Serial.print("Network name: ");
        Serial.println(WiFi.SSID(i));
        Serial.print("Signal strength: ");
        Serial.println(WiFi.RSSI(i));
        Serial.println("-----------------------");
      }
  }
  
}
