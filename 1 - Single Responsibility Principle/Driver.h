#pragma once
#include <iostream>

class Driver
{
    private:
        std::string lastName;
        std::string firstName;
    public:
        Driver(std::string _firstName, std::string _lastName) : lastName(_lastName), firstName(_firstName) {}
        ~Driver();
};
