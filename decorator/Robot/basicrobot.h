#pragma once

#include "robot.h"
#include <iostream>
#include <string>

using namespace std;

/// @brief BasicRobot class 
/// @details This class is a basic robot that can move and operate, but does not have any additional features, derived from the Robot class.
class BasicRobot : public Robot {
public:

    /// @brief Function to go to a location
    /// @return string
    string goTo() const override;

    /// @brief Function to perform an operation
    /// @return string
    string operation() const override;
};