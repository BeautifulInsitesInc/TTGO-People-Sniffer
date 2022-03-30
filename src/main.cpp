#include <Arduino.h>
#include "wifi_manager.h"

#include <TFT_eSPI.h> // Graphics and font library for ILI9341 driver chip
#include <SPI.h>
TFT_eSPI tft = TFT_eSPI();  // Invoke library, pins defined in User_Setup.h
#define TFT_GREY 0x5AEB // New colour

void ttgoInit(){
    tft.init(); tft.setRotation(1);
    tft.fillScreen(TFT_BLACK);  tft.setCursor(0, 0, 2);// X,Y, Font
    tft.setTextColor(TFT_WHITE,TFT_BLACK);  tft.setTextSize(2);
    tft.println("Starting...");
    delay(1000);
    tft.println("It's Alive!");

}
/*
void ttgoConnection(){
    tft.fillScreen(TFT_BLACK);  tft.setCursor(0, 0, 2);// X,Y, Font
    tft.setTextColor(TFT_WHITE,TFT_BLACK);  tft.setTextSize(2);
    tft.println("WiFi connected"); 
    //tft.print("SSID: "); 
    tft.println(WiFi.SSID()); 
    //tft.print(" ("); tft.print(WiFi.RSSI()); tft.println(")");
    //tft.print("Channel :"); tft.println(WiFi.channel());
    tft.print("IP: "); tft.print(WiFi.localIP());
}
*/
void setup()
{
  Serial.begin(115200);
  ttgoInit();

  wifiManagerSetup(); // WiFi Manager, SPIFF uploader, OTA Updates

  
}

void loop()
{
  wifiManagerLoop();
}