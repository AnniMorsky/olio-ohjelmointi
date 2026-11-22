#include "Animal.h"
#include "Dog.h"
#include <iostream>
#include <memory>

int main() {
    Animal animal;
    Dog dog;

    animal.callOut(); 
    dog.callOut();

    std::unique_ptr<Animal> polyDog = std::make_unique<Dog>();
    polyDog->callOut();

    return 0;
}