#pragma once

#include <iostream>
#include <string>
#include "robotdecorator.h"

class TemperatureRobot : public RobotDecorator {
public:
    TemperatureRobot(Robot* var) : RobotDecorator(var){};
    string goTo() const override;
    string operation() const override;
};
