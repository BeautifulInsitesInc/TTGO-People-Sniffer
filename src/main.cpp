#include <Arduino.h>
#include <TFT_eSPI.h> // Graphics and font library for ILI9341 driver chip
#include <SPI.h>
//#include "FS.h"
//#include <LittleFS.h>


#define DEBUG // Comment out to remove all Serial.prints

#ifdef DEBUG
#define out(x) Serial.print(x)
#define outln(x) Serial.println(x)
#else
#define out(x)
#define outln(x)
#endif


TFT_eSPI tft = TFT_eSPI();  // Invoke library, pins defined in User_Setup.h

#define TFT_GREY 0x5AEB // New colour



#include <wifiTool.h>
WifiTool wifiTool;

#define LED_BUILTIN 4



void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  digitalWrite(LED_BUILTIN, HIGH);
  Serial.begin(115200);
  Serial.println("System started");

  wifiTool.begin(false);
  if (!wifiTool.wifiAutoConnect())
  {
    Serial.println("fail to connect to wifi!!!!");
    wifiTool.runApPortal();
  }
}

void loop() {
  // put your main code here, to run repeatedly:

}