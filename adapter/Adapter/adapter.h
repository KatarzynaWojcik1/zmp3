#include <iostream>
#include <string>
#include <iomanip>
#include "../OldRobot/oldrobot.h"
#include <corecrt_math_defines.h>

/// @brief Adapter class
/// @details This class is used to adapt the OldRobot class to the NewRobot class
class RobotAdapter : public OldRobot {
public:

    /// @brief  Function to move the robot to a specific location
    /// @param x 
    /// @param y 
    virtual void goTo(double x, double y);

    /// @brief  Function to convert cartesian coordinates to polar coordinates
    /// @param x 
    /// @param y 
    virtual void cartesiantopolar(double x, double y);       
};

