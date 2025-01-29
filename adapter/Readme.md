# Robot Project

This project demonstrates the use of the Adapter design pattern to make an old robot class compatible with a new robot class.

## Project Structure

### Files

- **CMakeLists.txt**: CMake configuration file to build the project.
- **Adapter/**: Contains the adapter class to adapt the OldRobot class to the NewRobot class.
  - `adapter.cpp`: Implementation of the adapter class.
  - `adapter.h`: Header file for the adapter class.
- **NewRobot/**: Contains the new robot class.
  - `newrobot.cpp`: Implementation of the new robot class.
  - `newrobot.h`: Header file for the new robot class.
- **OldRobot/**: Contains the old robot class.
  - `oldrobot.cpp`: Implementation of the old robot class.
  - `oldrobot.h`: Header file for the old robot class.
- **main.cpp**: Main entry point of the application, demonstrating the usage of the OldRobot, NewRobot, and RobotAdapter classes.

## Classes

### OldRobot

- **File:** `OldRobot/oldrobot.h`, `OldRobot/oldrobot.cpp`
- **Description:** Represents the old robot.
- **Method:**
  - `void goTo(double x, double y)`: Moves the robot to a specific location.

### NewRobot

- **File:** `NewRobot/newrobot.h`, `NewRobot/newrobot.cpp`
- **Description:** Represents the new robot.
- **Method:**
  - `void goTo(double deg, double dist)`: Moves the robot to a specific location using polar coordinates.

### RobotAdapter

- **File:** `Adapter/adapter.h`, `Adapter/adapter.cpp`
- **Description:** Adapts the `OldRobot` class to be compatible with the `NewRobot` class.
- **Methods:**
  - `void goTo(double x, double y)`: Moves the robot to a specific location.
  - `void cartesiantopolar(double x, double y)`: Converts Cartesian coordinates to polar coordinates.

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
./RobotProject
```