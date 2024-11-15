#include <Arduino.h>

#define led 15

#define analogPin 5

int val;

int ledBrightness;

int invert() // * inverts the photoresistor value
{
    val = 1023 - val;
    return val;
}

void setup()
{
    Serial.begin(9600);
    pinMode(15, OUTPUT);

    analogSetAttenuation(ADC_11db); // * sets it to 3.3V

    Serial.println("light level: ");

    delay(1000);
}

void loop()
{
    analogReadResolution(10); // 0 - 1023

    val = analogRead(analogPin);

    ledBrightness = invert();

    Serial.println(val / 4); // brightness
    analogWrite(led, ledBrightness / 4);

    delay(10);
}