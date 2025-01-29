# Decorator Robot Project

This project demonstrates the Decorator design pattern using a Robot example. The Decorator pattern allows behavior to be added to an individual object, dynamically, without affecting the behavior of other objects from the same class.

## Classes

### Robot

An abstract base class for all robots.

#### Methods

- `virtual std::string goTo() = 0`: Pure virtual method to define the movement of the robot.
- `virtual std::string operation() = 0`: Pure virtual method to define the operation of the robot.

### BasicRobot

A concrete implementation of the simple `Robot` class without features.

#### Methods

- `std::string goTo() override`: Returns a string describing the movement of the basic robot.
- `std::string operation() override`: Returns a string describing the operation of the basic robot.

### RobotDecorator

An abstract decorator class that implements the `Robot` interface and contains a reference to a `Robot` object.

#### Methods

- `RobotDecorator(Robot* robot)`: Constructor that initializes the decorator with a `Robot` object.
- `std::string goTo() override`: Calls the `goTo` method of the wrapped `Robot` object.
- `std::string operation() override`: Calls the `operation` method of the wrapped `Robot` object.

### CameraRobot

A concrete decorator that adds camera functionality to a `Robot`.

#### Methods

- `CameraRobot(Robot* robot)`: Constructor that initializes the decorator with a `Robot` object.
- `std::string goTo() override`: Returns a string describing the movement of the robot with camera functionality.
- `std::string operation() override`: Returns a string describing the operation of the robot with camera functionality.

### TemperatureRobot

A concrete decorator that adds temperature measurement functionality to a `Robot`.

#### Methods

- `TemperatureRobot(Robot* robot)`: Constructor that initializes the decorator with a `Robot` object.
- `std::string goTo() override`: Returns a string describing the movement of the robot with temperature measurement functionality.
- `std::string operation() override`: Returns a string describing the operation of the robot with temperature measurement functionality.

### SoundRobot

A concrete decorator that adds sound functionality to a `Robot`.

#### Methods

- `SoundRobot(Robot* robot)`: Constructor that initializes the decorator with a `Robot` object.
- `std::string goTo() override`: Returns a string describing the movement of the robot with sound functionality.
- `std::string operation() override`: Returns a string describing the operation of the robot with sound functionality.

## Usage
### Building the Project
To build the project, you can use CMake. Here are the steps:

1. Create a build directory:
```
mkdir build
cd build
```
2. Configure the project:
```
cmake ..
```
3. Build the project:
```
cmake --build .
```
4. Change directory:
```
cd Debug
```
5. Run the executable:
```
./DecoratorRobot
```
6. Expected output
```
Usage of simple robot: Robot is moving
Operation: Robot is operating

Usage of camera robot: Robot is moving and filming
Operation: Robot is operating but also filming

Usage of camera robot: Robot is moving and it measures temperature
Operation: Robot is operating but also measures temperature

Usage of camera robot: Robot is moving and screams
Operation: Robot is operating but also screaming

Usage of multi robot: Robot is moving and filming and screams and it measures temperature
Operation: Robot is operating but also filming but also screaming but also measures temperature
```

