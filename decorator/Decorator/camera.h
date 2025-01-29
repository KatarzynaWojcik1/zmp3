#pragma once

#include <iostream>
#include <string>
#include "robotdecorator.h"

using namespace std;

/// @brief CameraRobot class
/// @details This class is a decorator for the Robot class that adds the ability to film.
class CameraRobot : public RobotDecorator {
public:
    /// @brief Constructor
    CameraRobot(Robot* var) : RobotDecorator(var){ };
    
    /// @brief Function to go to a location and film as constructor suggests
    /// @return string
    string goTo() const override;

    /// @brief Function to perform an operation and film as constructor suggests
    /// @return string
    string operation() const override;
};