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
#include <map>
/*--------------End Lib--------------*/




/*--------------Star Var--------------*/
extern const char* ssid;
extern const char* password;

extern AsyncWebServer server;

extern IPAddress ip;
extern IPAddress gateways;
extern IPAddress subnets;
extern IPAddress dns;

extern std::map<String, String> env_vars;

extern String MODES;
extern String AP_SSID;
extern String AP_PSK;
extern String STA_SSID;
extern String STA_PSK;
extern String mqtt_enable;
extern String mqtt_broker;
extern String mqtt_port;
extern String mqtt_topic;
extern String mqtt_username;
extern String mqtt_password;
extern String mqtt_interval;
extern String RTU_enable;
extern String RTU_deviceID;
extern String RTU_baudRate;
extern String TCP_wifi_enable;
extern String TCP_eth_enable;
extern String local_IP;
extern String gateway;
extern String subnet;
extern String dnss;
/*--------------End Var--------------*/




/*--------------Start Func--------------*/
void writeEnvFile();
void readEnvFile();
void updateEnvVariable(const String &key, const String &value);
bool configureNetwork(String IPAddressStr, String gatewatStr, String subnetStr, String dnsa);
IPAddress stringToIPAddress(String ipStr);

void setup_wifi();
void setup_wifiAP();

void config_server();
void handleIndex(AsyncWebServerRequest *request);
void handleSaveConfig(AsyncWebServerRequest *request);
void handleNetworksConfig(AsyncWebServerRequest *request);


/*--------------End Func--------------*/




/*--------------Debug Section--------------*/
#define DEBUG

/*--------------End Debug Section--------------*/


#endif

