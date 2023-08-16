
// connecting to a wifi network with a esp32 is very simple requiring very few lines of code.

// the first step is to import the WiFi library which gives you access to all the functions you need.
#include <WiFi.h>
void setup() {
  Serial.begin(115200);
  // next you will have to put your device into station mode this allows it to connect to a network instead of hosting one
  WiFi.mode(WIFI_STA);
  // finally to finish all required steps you simply have to run the begin function and pass your networks name and password as parameters
  WiFi.begin("network name", "password");
}

void loop() {
// you can also check the WiFI status of your device with the function WiFi.status() this can have many results but the most usefull to know are WL_CONNECTED which means the device has succsefully connected to a network and WL_DISCONNECTED which means you are disconnected form a network
  if(WiFi.status() == WL_CONNECTED)
  {
    Serial.println("connected");
  }
}
