#include<Adafuit_Sensor.h>
#include<DHT.h>
#include<DHT_U.h>

#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64

#define LOGO_HEIGHT   16
#define LOGO_WIDTH    16
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, LED_BUILTIN); //display is a constructor

void setup() {
  // put your setup code here, to run once:
    Serial.begin(9600);
    pinMode(LED_BUILTIN,OUTPUT);

    if(!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) { // Address 0x3D for 128x64
    Serial.println(F("SSD1306 allocation failed"));
    for(;;);
    
}

void loop() {
 if (Serial.available())
  {
      digitalWrite(LED_BUILTIN, LOW);
      delay(500);
      digitalWrite(LED_BUILTIN, HIGH);
      delay(500);
  }  
}

