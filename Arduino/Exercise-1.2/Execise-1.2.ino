/* This example shows how to get single-shot range
  measurements from the VL53L0X. The sensor can optionally be
  configured with different ranging profiles, as described in
  the VL53L0X API user manual, to get better performance for
  a certain application. This code is based on the four
  "SingleRanging" examples in the VL53L0X API.

  The range readings are in units of mm. */

#include <Wire.h>

#include <VL53L0X.h>

#include "RumiCar.h"

VL53L0X sensor0;
VL53L0X sensor1;
VL53L0X sensor2;

void setup()
{
  RC_setup();
}

void loop()
{
  Serial.print("Sensor0:");
  Serial.print(sensor0.readRangeSingleMillimeters());
  Serial.print("  Sensor1:");
  Serial.print(sensor1.readRangeSingleMillimeters());
  Serial.print("  Sensor2:");
  Serial.println(sensor2.readRangeSingleMillimeters());

}
