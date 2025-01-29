#include <iostream>
#include <string>
#include <math.h>
#include <iomanip>
#include "../OldRobot/oldrobot.h"

#define _USE_MATH_DEFINES

class RobotAdapter : public OldRobot {
public:
    virtual void goTo(double x, double y);
           
};

