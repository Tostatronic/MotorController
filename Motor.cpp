#include "Motor.h"
Motor::Motor(uint8_t _motorPin1,uint8_t _motorPin2)
{
  motorPin1=_motorPin1;
  motorPin2=_motorPin2;
  pinMode(motorPin1,OUTPUT);
  pinMode(motorPin2,OUTPUT);
  Stop();
}
Motor::Motor(uint8_t _motorPin1,uint8_t _motorPin2,uint8_t _motorEnable, uint8_t _motorSpeed)
{
  motorPin1=_motorPin1;
  motorPin2=_motorPin2;
  motorEnable=_motorEnable;
  pinMode(motorPin1,OUTPUT);
  pinMode(motorPin2,OUTPUT);
  pinMode(motorEnable,OUTPUT);
  SetMotorSpeed(motorSpeed);
  Stop();
}
void Motor::SetMotorSpeed(uint8_t _motorSpeed)
{
  if(_motorSpeed < 0)
    motorSpeed=0;
  else if(_motorSpeed>255)
    motorSpeed=255;
  else
    motorSpeed=_motorSpeed;
  digitalWrite(motorEnable,motorSpeed);
}
void Motor::MoveFoward()
{
  digitalWrite(motorPin1,HIGH);
  digitalWrite(motorPin2,LOW);
}
void Motor::MoveBackward()
{
  digitalWrite(motorPin1,LOW);
  digitalWrite(motorPin2,HIGH);
}
void Motor::Stop()
{
  digitalWrite(motorPin1,LOW);
  digitalWrite(motorPin2,LOW);
}

