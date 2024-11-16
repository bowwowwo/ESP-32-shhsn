## to define

```C++
#include <LiquidCrystal_I2C.h>
```
```C++
#define SDA 21
#define SCL 47
```
```C++
LiquidCrystal_I2C lcd(0x27, 16, 2);
```
```C++
 void setup(){
  lcd.init(SDA, SCL);
  lcd.backlight();
}
```
```C++
void loop(){
lcd.setCursor(0, 0);
lcd.print(" ");
}
```
