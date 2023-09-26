#include <Arduino.h>
#include <ESP8266WiFi.h>

void setup() {
    while (! Serial)
        ;

    Serial.begin(115200);

    WiFi.begin("OpenWrt", "12345678");

    while (WiFi.status() != WL_CONNECTED) {
        delay(1000);
        Serial.print(".");
    }

    Serial.println("Connected. IP Address: ");
    Serial.println(WiFi.localIP());
}

void loop() {
  // put your main code here, to run repeatedly:
}
