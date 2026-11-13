#include <iostream>
#include <vector>
#include "Car.h"

int main() {
    std::vector<Car> carList;

    carList.push_back(Car("Toyota", "Avensis", 2009));
    carList.push_back(Car("Tesla", "Model 3", 2022));
    carList.push_back(Car("Citroen ", "C3", 2015));

    std::cout << "--- Toisen auton tiedot ---" << std::endl;
    carList[1].printData();
    std::cout << std::endl;

    std::cout << "--- Kaikkien autojen tiedot ---" << std::endl;
    for (size_t i = 0; i < carList.size(); ++i) {
        carList[i].printData();
    }

    return 0;
}