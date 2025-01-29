#include "oldrobot.h"

// Old robot class
class OldRobot{
    public:
    virtual void goTo(double x, double y){
        std::cout<< "Stary robot poszedl do: " << x << ", " << y << std::endl;
    }
};
