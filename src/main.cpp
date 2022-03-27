#include "main.h"
#include "ttgo.h"

//#include "FS.h"





void setup(){
  Serial.begin(115200);
  ttgoInit(); // Initiallize the TTGO OLED display
  out("Starting...");
  

}

void loop(){

}