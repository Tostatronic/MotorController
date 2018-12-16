#include <Motor.h>
Motor motor = Motor(5, 6, 7, 120);;
void setup() {
  // put your setup code here, to run once:
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int x = 0; x <= 255; x = x + 15)
  {
    motor.SetMotorSpeed(x);
    motor.MoveFoward();
    delay(1000);
    motor.Stop();
    delay(1000);
  }
  for (int x = 255; x >= 0; x = x - 15)
  {
    motor.SetMotorSpeed(x);
    motor.MoveFoward();
    delay(1000);
    motor.Stop();
    delay(1000);
  }
}
