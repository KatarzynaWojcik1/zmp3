// THE DECORATOR RAW PROJECT
#include <iostream>
#include <string>

using namespace std;

// Component interface - defines the basic robot operations
class Robot {
public:
    virtual string goTo() const = 0;
    virtual string operation() const = 0;
};

// Concrete Component - the basic robot class.
class BasicRobot : public Robot {
public:
    string goTo() const override
    {
        return "Robot is moving";
    }

    string operation() const override { return "Robot is operating";  }
};

// Decorator - abstract class that extends Robot.
class RobotDecorator : public Robot {
protected:
    Robot* robot;

public:
    RobotDecorator(Robot* rb) : robot(rb){
    }

    string goTo() const override
    {
        return robot->goTo();
    }

    string operation() const override
    {
        return robot->operation();
    }
};

// Concrete Decorator - adds camera feature.
class CameraRobot : public RobotDecorator {
public:
    CameraRobot(Robot* var) : RobotDecorator(var){
        
    }

    string goTo() const override
    {
        return robot->goTo()
               + " and filming";
    }

    string operation() const override
    {
        return robot->operation() + " but also filming";
    }
};

// Concrete Decorator - adds temperature measurement
class TemperatureRobot : public RobotDecorator {
public:
    TemperatureRobot(Robot* var) : RobotDecorator(var){
        
    }

    string goTo() const override
    {
        return robot->goTo()
               + " and it measures temperature";
    }

    string operation() const override
    {
        return robot->operation() + " but also measures temperature";
    }
};

//concrete decorator class
class SoundRobot : public RobotDecorator {
public:
    SoundRobot(Robot* var) : RobotDecorator(var){
        
    }

    string goTo() const override
    {
        return robot->goTo()
               + " and screams";
    }

    string operation() const override
    {
        return robot->operation() + " but also screaming";
    }
};

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
    cout << "Usage of camera robot: " << temprobot->goTo()<<endl
         << "Operation: " << temprobot->operation()
         << endl << endl;
         
         // Wrap it with sound Decorator
    Robot* sondrobot = new SoundRobot(simplerobot);
    cout << "Usage of camera robot: " << sondrobot->goTo()<<endl
         << "Operation: " << sondrobot->operation()
         << endl << endl;
         
         //Wrapping with all available decorators at once
    Robot* multirobot = new TemperatureRobot(new SoundRobot(new CameraRobot(new BasicRobot)));
    cout << "Usage of multi robot: " << multirobot->goTo()<<endl
         << "Operation: " << multirobot->operation()
         << endl;

    return 0;
}
