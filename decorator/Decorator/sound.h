#pragma once

#include <iostream> 
#include <string>
#include "robotdecorator.h"

//concrete decorator class
class SoundRobot : public RobotDecorator {
public:
    SoundRobot(Robot* var) : RobotDecorator(var){    };
    string goTo() const override;
    string operation() const override;
};