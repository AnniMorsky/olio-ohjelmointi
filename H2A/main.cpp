#include <iostream>
#include <memory>
#include "car.h"
#include "rectangle.h"
#include "student.h"

int main() {
    Car myCar;
    myCar.setBrand("Citroen");
    myCar.setModel("C3");
    myCar.setYearModel(2015);
    myCar.printData();
    std::cout << std::endl;

    Rectangle* myRectangle = new Rectangle();
    myRectangle->setWidth(4.5);
    myRectangle->setHeight(2.5);

    std::cout << "Suorakulmion pinta-ala: "<< myRectangle->getArea() << std::endl;
    std::cout << "Suorakulmion ymparysmitta: " << myRectangle->getCircum() << std::endl;

    delete myRectangle;
    myRectangle = nullptr;
    std::cout << std::endl;

    std::unique_ptr<Student> myStudent = std::make_unique<Student>();
    myStudent->setName("Matti Meikalainen");
    myStudent->setStudentNumber(123456);
    myStudent->setAverage(4.25);

    std::cout << "Opiskelijan nimi: " << myStudent->getName() << std::endl;
    std::cout << "Opiskelijanumero: " << myStudent->getStudentNumber() << std::endl;
    std::cout << "Keskiarvo: " << myStudent->getAverage() << std::endl;

    return 0;
}