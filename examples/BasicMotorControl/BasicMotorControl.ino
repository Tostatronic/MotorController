#include <Motor.h>
Motor motor = Motor(5, 6);;
void setup() {
  // put your setup code here, to run once:
}

void loop() 
{
    motor.MoveFoward();
    delay(1000);
    motor.Stop();
    delay(1000);
    motor.MoveBackward();
    delay(1000);
    motor.Stop();
    delay(1000);
}
