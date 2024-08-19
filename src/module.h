#ifndef MODULE_H
#define MODULE_H

/*
WiFi 3 Mode
1 -> AP (Access Point)
2 -> STA (Station)
3 -> APSTA (Access Point and Station)
*/

/*--------------Start Lib--------------*/
#include <Arduino.h>
#include <WiFi.h>
#include <SPIFFS.h>
#include <AsyncTCP.h>
#include <ESPAsyncWebServer.h>
#include <ESPmDNS.h>
/*--------------End Lib--------------*/




/*--------------Star Var--------------*/
extern const char* ssid;
extern const char* password;
extern AsyncWebServer server;
/*--------------End Var--------------*/




/*--------------Start Func--------------*/
void setup_wifi();
void setup_wifiAP();

void config_server();
void handle_index(AsyncWebServerRequest *request);

/*--------------End Func--------------*/



#endif

