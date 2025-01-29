#include "basicrobot.h"

// Concrete Component - the basic robot class.
string BasicRobot :: goTo() const {
        return "Robot is moving";
    }

string BasicRobot :: operation() const{
         return "Robot is operating"; 
         }