## push button init
#press to turn on/off

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
```
## toggle on/off
```C++
bool on = 0;
int button_press = 0;

void loop()
{
    button_press = digitalRead(buttonPin);
    if (button_press == 1)
    {
        on = !on;
    }

    if (on)
    {
        digitalWrite(ledPin, 1);
    }
    else
    {
        digitalWrite(ledPin, 0);
    }
}
```
