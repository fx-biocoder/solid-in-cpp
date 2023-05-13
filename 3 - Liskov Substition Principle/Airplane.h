#pragma once
#include "Vehicle.h"

class Airplane : public Vehicle
{
    public:
        Airplane();
        ~Airplane();
        int getID() override;
        int getHeight();
};
