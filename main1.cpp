#include <Arduino.h>
#include <LiquidCrystal_I2C.h>

#define SDA 21
#define SCL 47

LiquidCrystal_I2C lcd(0x27, 16, 2);

int lcd1 = 0;
int lcd2 = 0;

void lcded()
{
    for (int i = 0; i < 17; i++)
    {
        lcd.setCursor(i, lcd2);
        if ((i % 2) == 0)
        {
            lcd.print("#");
        }
        else
        {
            lcd.print("%");
        }
        delay(70);
    }
    for (int i = 0; i < 17; i++)
    {
        lcd.setCursor(i, lcd2);
        lcd.print(" ");
        delay(70);
    }
}

void setup()
{
    Serial.begin(9600);
    Serial.println("1");
    pinMode(15, OUTPUT);
    lcd.init(SDA, SCL);
    lcd.backlight();
}

void loop()
{
    lcd.setCursor(0, 0);
    digitalWrite(15, 1);
    lcded();
    lcd2++;
    lcded();
    lcd2 = 0;
}