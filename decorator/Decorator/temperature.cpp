#include "temperature.h"

string TemperatureRobot :: goTo() const {
    return robot->goTo()
           + " and it measures temperature";
}

string TemperatureRobot :: operation() const {
    return robot->operation() + " but also measures temperature";
}