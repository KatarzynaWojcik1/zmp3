#include <iostream>
#include <string>
#include "Adapter/adapter.h"
#include "OldRobot/oldrobot.h"
#include "NewRobot/newrobot.h"


int main()
{
    OldRobot robot;
    NewRobot roomba;
    RobotAdapter adapter;

    robot.goTo(2,4);
    roomba.goTo(2,4);
    adapter.goTo(2,4);

    return 0;
}