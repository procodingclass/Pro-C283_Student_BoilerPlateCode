

#include <webots/altimeter.h>
#include <webots/led.h>
#include <webots/motor.h>
#include <webots/robot.h>

#include <stdio.h>

int main(int argc, char **argv) {
  wb_robot_init();
  int time_step = (int)wb_robot_get_basic_time_step();

  // Get the altimeter and enable it.
  WbDeviceTag altimeter = wb_robot_get_device("altimeter");
  wb_altimeter_enable(altimeter, time_step);

  