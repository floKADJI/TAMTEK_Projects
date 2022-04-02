#include <Arduino.h>

/*
  This example "WiFiAccessPoint" creates a WiFi access point with the given credentials.

*/

#include <WiFi.h>
#include <WiFiClient.h>
#include <WiFiAP.h>


// Set these to your desired credentials.
const char *ssid = "yourAP";
const char *password = "yourPassword";


void setup() {

  Serial.begin(115200);
  Serial.println();
  Serial.println("Configuring access point...");

  // You can remove the password parameter if you want the AP to be open.
  WiFi.softAP(ssid, password);
  IPAddress myIP = WiFi.softAPIP();
  Serial.print("AP IP address: ");
  Serial.println(myIP);

}

void loop() {
  delay(5000);
}