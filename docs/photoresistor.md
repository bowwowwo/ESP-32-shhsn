## to define
```C++
#define analogPin 5
```
```C++
int val;
```
```C++
void setup()
{
    analogSetAttenuation(ADC_11db); // * sets it to 3.3V
}
```
```C++
void loop()
{
    analogReadResolution(10); // 0 - 1023

    val = analogRead(analogPin);
}
```
