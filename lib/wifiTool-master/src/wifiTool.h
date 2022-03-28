/**************************************************************
   wifiTool is a library for the ESP 8266&32/Arduino platform
   SPIFFS oriented AsyncWebServer based wifi configuration tool.
   https://github.com/oferzv/wifiTool
   
   Built by Ofer Zvik (https://github.com/oferzv)
   And Tal Ofer (https://github.com/talofer99)
   Licensed under MIT license
 **************************************************************/

#ifndef WIFITOOL_h
#define WIFITOOL_h

#include "Arduino.h"
#include <DNSServer.h>

#include <ArduinoOTA.h>
#ifdef ESP32
#include <FS.h>
#include <SPIFFS.h>
#include <ESPmDNS.h>
#include <WiFi.h>
#include <AsyncTCP.h>
#elif defined(ESP8266)
#include <ESP8266WiFi.h>
#include <ESPAsyncTCP.h>
#include <ESP8266mDNS.h>
#include <DoubleResetDetector.h>
#endif
#include <ESPAsyncWebServer.h>
#include <SPIFFSEditor.h>


#define WAIT_FOR_WIFI_TIME_OUT 6000UL
#define SECRETS_PATH "/secrets.json"



#endif
