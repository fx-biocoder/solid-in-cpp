#pragma once
class Vehicle
{
    protected:
        int power;
        int vehicleID;
    public:
        Vehicle() = default;
        Vehicle(int _power, int _id) : power(_power), vehicleID(_id) {}
        virtual ~Vehicle() = default;
        virtual int getID() = 0;
};
