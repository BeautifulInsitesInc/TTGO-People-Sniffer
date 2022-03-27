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
