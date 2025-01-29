#pragma once

#include <iostream>
#include <string>
#include "robotdecorator.h"

using namespace std;

class CameraRobot : public RobotDecorator {
public:
    CameraRobot(Robot* var) : RobotDecorator(var){ };
    string goTo() const override;
    string operation() const override;
};