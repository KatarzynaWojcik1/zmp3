// THE DECORATOR RAW PROJECT
#include <iostream>
#include <string>
#include "./Robot/robot.h"
#include "./Decorator/robotdecorator.h"
#include "./Robot/basicrobot.h"
#include "./Decorator/camera.h"
#include "./Decorator/temperature.h"
#include "./Decorator/sound.h"


int main()
{
    // Create a basic robot
    Robot* simplerobot = new BasicRobot();
    std::cout << "Usage of simple robot: " << simplerobot->goTo()<<endl
         << "Operation: " << simplerobot->operation()
         << endl << endl;

    // Wrap it with camera 
    Robot* camerarobot = new CameraRobot(simplerobot);
    cout << "Usage of camera robot: " << camerarobot->goTo()<<endl
         << "Operation: " << camerarobot->operation()
         << endl << endl;
         
     // Wrap it with temperature Decorator
    Robot* temprobot = new TemperatureRobot(simplerobot);
    cout << "Usage of temperature robot: " << temprobot->goTo()<<endl
         << "Operation: " << temprobot->operation()
         << endl << endl;
         
     // Wrap it with sound Decorator
    Robot* sondrobot = new SoundRobot(simplerobot);
    cout << "Usage of sound robot: " << sondrobot->goTo()<<endl
         << "Operation: " << sondrobot->operation()
         << endl << endl;
         
     //Wrapping with all available decorators at once
    Robot* multirobot = new TemperatureRobot(new SoundRobot(new CameraRobot(new BasicRobot)));
    cout << "Usage of multi robot: " << multirobot->goTo()<<endl
         << "Operation: " << multirobot->operation()
         << endl;

    return 0;
}
