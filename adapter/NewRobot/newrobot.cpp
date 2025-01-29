#include "newrobot.h"

// New Rbotot class
class NewRobot {
public:
    void goTo(double deg, double dist){
        std::cout<< "Nowy robot poszedl do: "<< dist << "exp(" << deg << ")" << std::endl;
    }
};