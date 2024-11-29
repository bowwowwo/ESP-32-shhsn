## push button init

```C++
const int buttonPin = 26;
const int ledPin = 25;

int on = 0;

void setup()
{
    pinMode(ledPin, OUTPUT);
    pinMode(buttonPin, INPUT);
}
```
```C++
void loop()
{
    on = digitalRead(buttonPin);

    if (on == HIGH)
    {
        digitalWrite(ledPin, 1);
    }
    else
    {
        digitalWrite(ledPin, 0);
    }
}
