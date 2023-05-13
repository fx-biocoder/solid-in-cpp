#pragma once
#include "Vehicle.h"

class Car : public Vehicle
{
    public:
        Car(int _power, int _id) 
        {
            this->power = _power;
            this->vehicleID = _id;
        }
        ~Car() = default;
        int getID() override;
};
