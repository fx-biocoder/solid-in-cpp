#include <iostream>
#include "Model.h"

class Car
{
    private:
        std::string plateNumber;
        int oilVolume = 100;
    public:
        Car(std::string plate) : plateNumber(plate) {}
        ~Car();
        void startCar() {std:: cout << "Engine started" << std::endl; }
        int measureOil() { return oilVolume; }
        void stopCar() { std::cout << "Car has stopped." << std::endl; }
};