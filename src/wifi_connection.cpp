#include <ESP8266WiFi.h>

const char* ssid = "la_SSID";
const char* password = "la_PASSWORD";

void setup() {
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(1000); // darle tiempo para conectarse
  }
}
