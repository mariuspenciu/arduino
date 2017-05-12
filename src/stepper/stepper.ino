#include "accelstepper.h"

int step_pin = 3;
int dir_pin = 2;
int enable_pin = 4;


AccelStepper motor( AccelStepper::DRIVER, step_pin, dir_pin);

void setup() {
  // put your setup code here, to run once:
  motor.setSpeed (1000);
  motor.setMaxSpeed (1000);
  motor.setAcceleration (1000);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (motor.distanceToGo() == 0){
    int dir = rand() % 2;
    if (dir == 0)
      motor.move(100);
    else 
      motor.move(-100);
  }

  motor.run();
}
