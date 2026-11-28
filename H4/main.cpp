#include "car.h"

int main() {
    Car myCar("Citroen", "C3");
    myCar.setEngine();
    myCar.setWheels();
    myCar.printDetails();

    return 0;
}