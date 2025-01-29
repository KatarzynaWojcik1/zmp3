#pragma once

#include <iostream>
#include <string>
#include "robotdecorator.h"

/// @brief TemperatureRobot class
/// @details This class is a decorator for the Robot class that adds the ability to measure temperature.
class TemperatureRobot : public RobotDecorator {
public:
    /// @brief Constructor
    TemperatureRobot(Robot* var) : RobotDecorator(var){};

    /// @brief Function to go to a location and measure temperature as constructor suggests
    /// @return string
    string goTo() const override;

    /// @brief Function to perform an operation and measure temperature as constructor suggests
    /// @return string
    string operation() const override;
};
