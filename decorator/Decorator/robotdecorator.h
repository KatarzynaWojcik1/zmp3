#pragma once
#include "../Robot/robot.h"

class RobotDecorator : public Robot {
protected:
    Robot* robot;

public:
    RobotDecorator(Robot* rb) : robot(rb){};
    string goTo() const override;
    string operation() const override;
};