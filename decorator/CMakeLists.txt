cmake_minimum_required(VERSION 3.10)

# Project name
project(DecoratorRobot)

# Set C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Include directories
include_directories(${PROJECT_SOURCE_DIR}/Robot)
include_directories(${PROJECT_SOURCE_DIR}/Decorator)

# Source files
set(SOURCES
    main.cpp
    Robot/basicrobot.cpp
    Decorator/robotdecorator.cpp
    Decorator/camera.cpp
    Decorator/temperature.cpp
    Decorator/sound.cpp
)

# Add executable
add_executable(DecoratorRobot ${SOURCES})