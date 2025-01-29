#include "camera.h"

string CameraRobot :: goTo() const {
    return robot->goTo()
           + " and filming";
}

string CameraRobot :: operation() const {
    return robot->operation() + " but also filming";
}
