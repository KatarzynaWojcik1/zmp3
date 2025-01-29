#include "sound.h"

string SoundRobot :: goTo() const {
    return robot->goTo()
           + " and screams";
}

string SoundRobot :: operation() const {
    return robot->operation() + " but also screaming";
}
