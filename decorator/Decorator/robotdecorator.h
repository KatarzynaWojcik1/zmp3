#pragma once
#include "../Robot/robot.h"

/// @brief RobotDecorator class
/// @details This class is a decorator for the Robot class that adds the ability to decorate a robot.
class RobotDecorator : public Robot {
protected:
    Robot* robot;

public:
    /// @brief Constructor
    RobotDecorator(Robot* rb) : robot(rb){};

    /// @brief Function to go to a location 
    /// @return string
    string goTo() const override;

    /// @brief Function to perform an operation
    /// @return string
    string operation() const override;
};