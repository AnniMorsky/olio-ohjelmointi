#ifndef CAR_H
#define CAR_H

#include <string>
#include "engine.h"
#include "wheel.h"

class Car {
private:
    Engine objEngine;
    Wheel objWheel1;
    Wheel objWheel2;
    Wheel objWheel3;
    Wheel objWheel4;
    std::string model;
    std::string brand;

public:
    Car();
    Car(std::string b, std::string m);

    void setEngine();
    void setWheels();

    std::string getModel() const;
    void setModel(std::string m);

    std::string getBrand() const;
    void setBrand(std::string b);

    void printDetails() const;
};

#endif // CAR_H