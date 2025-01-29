#pragma once

#include <iostream>
#include <string>

using namespace std;

// Component interface - defines the basic robot operations
class Robot {
public:
    virtual string goTo() const = 0;
    virtual string operation() const = 0;
};