#ifndef MOTOR_H
#define MOTOR_H
#include <Arduino.h>
class Motor
{
  public:
    Motor(uint8_t _motorPin1,uint8_t _motorPin2);
    Motor(uint8_t _motorPin1,uint8_t _motorPin2,uint8_t _motorEnable, uint8_t _motorSpeed);
    void SetMotorSpeed(uint8_t _motorSpeed);
    void MoveFoward();
    void MoveBackward();
    void Stop();
  private:
    uint8_t motorSpeed=255;
    uint8_t motorPin1,motorPin2,motorEnable;
};
#endif
