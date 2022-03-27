#include <Arduino.h>
#include <LittleFS.h>

#define DEBUG

#ifdef DEBUG
#define out(x) Serial.print(x)
#define outln(x) Serial.println(x)
#else
#define out(x)
#define outln(x)
#endif