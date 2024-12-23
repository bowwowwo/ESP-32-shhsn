## init
```C++
const int buzzer = 33; // Buzzer pin
```
```C++
void setup()
{
    pinMode(buzzer, OUTPUT);
}
```
### smn
```C++
tone(buzzer, note, melodyDuration); //note ex. NOTE_C7 // check pitches.h
```
