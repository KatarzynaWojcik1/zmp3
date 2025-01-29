#pragma once

#include <iostream>
#include <string>

using namespace std;

/// @brief Robot class interface
class Robot {
public:
    virtual string goTo() const = 0;
    virtual string operation() const = 0;
};