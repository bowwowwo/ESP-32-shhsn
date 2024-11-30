## pwm init
```C++
int brightStep = 1;
int brightness = 0;

const int PWM_CHANNEL = 0;
const int PWM_FREQ = 500;
const int PWM_RESOLUTION = 8;

const int MAX_DUTY_CYCLE = (int)(pow(2, PWM_RESOLUTION) - 1);

int DELAY_MS = 4;
```
```C++
void setup()
{
  delay(1000);

  ledcSetup(PWM_CHANNEL, PWM_FREQ, PWM_RESOLUTION);
  ledcAttachPin(led, PWM_CHANNEL);
}
```
## led esp32 analogWrite
```C++
void loop()
{
  for (int dutyCycle = 0; dutyCycle <= MAX_DUTY_CYCLE; dutyCycle++)
  {
    ledcWrite(PWM_CHANNEL, dutyCycle);
    delay(DELAY_MS);
  }

  for (int dutyCycle = MAX_DUTY_CYCLE; dutyCycle >= 0; dutyCycle--)
  {
    ledcWrite(PWM_CHANNEL, dutyCycle);
    delay(DELAY_MS);
  }
}
```
