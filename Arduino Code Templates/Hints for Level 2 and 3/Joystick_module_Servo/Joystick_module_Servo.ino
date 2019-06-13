#include <Servo.h>

Servo servo1, servo2;

int joyx = 0;
int joyy= 1;

int joyVal;

void setup()
{
  servo1.attach(3);
  servo2.attach(5);
}

void loop()
{
  joyVal = analogRead(joyx);
  joyVal = map(joyVal, 0, 1023, 0, 180);
  servo1.write(joyVal);

  joyVal = analogRead(joyy);
  joyVal = map(joyVal, 0, 1023, 0, 180);
  servo2.write(joyVal);
}
