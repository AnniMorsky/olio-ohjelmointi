#include "car.h"
#include <iostream>

void Car::printData() const {
    std::cout << "Auton tiedot - Merkki: " << brand 
              << ", Malli: " << model 
              << ", Vuosimalli: " << yearModel << std::endl;
}

void Car::setBrand(const std::string& brand) {
    this->brand = brand;
}

void Car::setModel(const std::string& model) {
    this->model = model;
}

void Car::setYearModel(int yearModel) {
    this->yearModel = yearModel;
}