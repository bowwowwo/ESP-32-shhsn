#include <Arduino.h>
#include <LiquidCrystal_I2C.h>

#define SDA 21
#define SCL 47

int randX;
int randY;
int randZ;
int randomClearX;
int randomClearY;

unsigned long previousMillis = 0UL;
unsigned long interval = 1000UL;

LiquidCrystal_I2C lcd(0x27, 16, 2);

void random1()
{
    randX = random(0, 16);
    randY = random(0, 1);
    randZ = random(1, 5);
    randomClearX = random(0, 16);
    randomClearY = random(0, 1);
}
void spellbook()
{
    lcd.setCursor(randX, randY);
    switch (randZ)
    {
    case 1:
        lcd.print("@");
        break;
    case 2:
        lcd.print("#");
        break;
    case 3:
        lcd.print("$");
        break;
    case 4:
        lcd.print("%");
        break;
    case 5:
        lcd.print("&");
        break;
    }
}

void clearbook()
{
    lcd.setCursor(randomClearX, randomClearY);
    lcd.print(" ");
}

void setup()
{
    Serial.begin(9600);
    Serial.println("1");
    pinMode(15, OUTPUT);

    lcd.noCursor();
    lcd.init(SDA, SCL);
    lcd.backlight();
    lcd.setContrast(127);
}

void loop()
{
    unsigned long currentMillis = millis();

    random1();
    spellbook();
    if (currentMillis - previousMillis > interval)
    {
        clearbook();
    }
    delay(100);
}