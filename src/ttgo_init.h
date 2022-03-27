#include <TFT_eSPI.h> // Graphics and font library for ILI9341 driver chip
#include <SPI.h>
//#include "ttgo.cpp"

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

