#include "adapter.h"

void RobotAdapter::cartesiantopolar(double x, double y){
       using namespace std;
        
       double deg;
       double dist;
       
       deg = atan(y/x)*180/M_PI;
       dist = sqrt(pow(x,2)+pow(y,2));
       
       std::cout<< fixed << setprecision(0) << dist << "exp(" <<deg<<")"<<std::endl;
       
    }

// Adapter class to make the OldRobot compatible with NewRobot
void RobotAdapter::goTo(double x, double y){
    std::cout<< "Stary robot poszedl do: ";
    cartesiantopolar(x,y);
};




//  : public OldRobot {
// public:
//     void cartesiantopolar(double x, double y){
//        using namespace std;
        
//        double deg;
//        double dist;
       
//        deg = atan(y/x)*180/M_PI;
//        dist = sqrt(pow(x,2)+pow(y,2));
       
//        std::cout<< fixed << setprecision(0) << dist << "exp(" <<deg<<")"<<std::endl;
       
//     }
//      void goTo(double x, double y) override{
//         std::cout<< "Stary robot poszedl do: ";
//         cartesiantopolar(x,y);
//     }
// };