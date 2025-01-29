#include "robotdecorator.h"

string RobotDecorator :: goTo() const {
    return robot->goTo();
}

string RobotDecorator :: operation() const {
    return robot->operation();
}