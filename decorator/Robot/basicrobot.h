#pragma once

#include "robot.h"
#include <iostream>
#include <string>

using namespace std;

// Concrete Component - the basic robot class.
class BasicRobot : public Robot {
public:
    string goTo() const override;
    string operation() const override;
};