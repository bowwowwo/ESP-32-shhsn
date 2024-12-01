#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128 // OLED display width, in pixels
#define SCREEN_HEIGHT 64 // OLED display height, in pixels

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1); // default wire pins on esp32 are 21, 22

void setup()
{
    Serial.begin(115200);

    if (!display.begin(SSD1306_SWITCHCAPVCC, 0x3C))
    { // Address 0x3D for 128x64
        Serial.println(F("SSD1306 allocation failed"));
        for (;;)
            ;
    }
    delay(1000);
    display.clearDisplay();
    // display.setTextSize(1);
    display.setTextColor(WHITE); // necessary to have something show up

    display.fillCircle(50, 20, 15, WHITE); // x0, y0, r, color
    display.fillCircle(78, 20, 15, WHITE);
    display.fillTriangle(44, 35, 84, 35, 64, 50, WHITE); // x0, y0, x1, y1, x2, y2, color
    display.fillTriangle(50, 35, 80, 35, 64, 25, WHITE);
    display.display();
}

void loop()
{
}