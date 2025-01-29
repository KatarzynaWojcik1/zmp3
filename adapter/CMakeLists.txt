cmake_minimum_required(VERSION 3.10)

# Set the project name
project(RobotProject)

# Add the executable
add_executable(RobotProject
    main.cpp
    Adapter/adapter.cpp
    OldRobot/oldrobot.cpp
    NewRobot/newrobot.cpp
)

# Include directories
target_include_directories(RobotProject PRIVATE
    Adapter
    OldRobot
    NewRobot
)