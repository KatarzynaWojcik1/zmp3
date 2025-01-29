#pragma once

#include <iostream> 
#include <string>
#include "robotdecorator.h"

/// @brief SoundRobot class
/// @details This class is a decorator for the Robot class that adds the ability to make sound.
class SoundRobot : public RobotDecorator {
public:
    /// @brief Constructor
    SoundRobot(Robot* var) : RobotDecorator(var){    };

    /// @brief Function to go to a location and make sound as constructor suggests
    /// @return string
    string goTo() const override;

    /// @brief Function to perform an operation and make sound as constructor suggests
    /// @return string
    string operation() const override;
};