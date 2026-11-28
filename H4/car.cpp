#include "car.h"
#include <iostream>

Car::Car() : model(""), brand("") {}

Car::Car(std::string b, std::string m) : model(m), brand(b) {}

void Car::setEngine() {
    objEngine.setHorsepower(110);
    objEngine.setDisplacement(1.2);
}

void Car::setWheels() {
    objWheel1.setSize(15);
    objWheel1.setType("kesarengas");

    objWheel2.setSize(15);
    objWheel2.setType("kesarengas");

    objWheel3.setSize(15);
    objWheel3.setType("kesarengas");

    objWheel4.setSize(15);
    objWheel4.setType("kesarengas");
}

std::string Car::getModel() const {
    return model;
}

void Car::setModel(std::string m) {
    model = m;
}

std::string Car::getBrand() const {
    return brand;
}

void Car::setBrand(std::string b) {
    brand = b;
}

void Car::printDetails() const {
    std::cout << "Auto : " << model << " " << brand << "\n";
    std::cout << "Moottori: " << objEngine.getHorsepower() << " hp, "
              << objEngine.getDisplacement() << " L\n";
    std::cout << "Rengas 1: " << objWheel1.getSize() << " tuumaa, " << objWheel1.getType() << "\n";
    std::cout << "Rengas 2: " << objWheel2.getSize() << " tuumaa, " << objWheel2.getType() << "\n";
    std::cout << "Rengas 3: " << objWheel3.getSize() << " tuumaa, " << objWheel3.getType() << "\n";
    std::cout << "Rengas 4: " << objWheel4.getSize() << " tuumaa, " << objWheel4.getType() << "\n";
}