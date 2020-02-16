#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128 
#define SCREEN_HEIGHT 64

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, LED_BUILTIN); //display is a constructor





void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
   if(!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) { // Address 0x3D for 128x64
    Serial.println(F("SSD1306 allocation failed"));
    for(;;); // Don't proceed, loop forever
  }

  
  display.display();
  delay(2000); // Pause for 2 seconds

  display.clearDisplay();

  // Draw a single pixel in white
  display.drawPixel(10, 10, WHITE);

  // Show the display buffer on the screen. You MUST call display() after
  // drawing commands to make them visible on screen!
  display.display();
  delay(2000);
}

void loop() {
  // put your main code here, to run repeatedly:
  char reading[100];
  for(int i=0; i<100;i++ ){
    reading[i]=Serial.read();
    delay(100);

  }
  
  display.clearDisplay();
  display.setTextSize(2); // Draw 2X-scale text
  display.setTextColor(WHITE);
  display.println(reading);
  display.display();
  delay(500);
  
}
