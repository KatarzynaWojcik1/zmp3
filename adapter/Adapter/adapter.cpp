#include "adapter.h"

void RobotAdapter::cartesiantopolar(double x, double y) {
    using namespace std;

    // Declare variables for polar coordinates
    double deg;  // Angle in degrees
    double dist; // Distance from origin

    // Calculate the angle in degrees
    deg = atan(y / x) * 180 / M_PI;

    // Calculate the distance from the origin
    dist = sqrt(pow(x, 2) + pow(y, 2));

    // Print the polar coordinates in the format "distance exp(angle)" with 0 decimal places
    std::cout << fixed << setprecision(0) << dist << "exp(" << deg << ")" << std::endl;
}

// Adapter class to make the OldRobot compatible with NewRobot
void RobotAdapter::goTo(double x, double y){
    std::cout<< "Stary robot poszedl do: ";
    cartesiantopolar(x,y);
};