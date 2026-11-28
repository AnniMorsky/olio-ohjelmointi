#include "wheel.h"

Wheel::Wheel() : size(0), type("") {}

Wheel::Wheel(int s, std::string t) : size(s), type(t) {}

int Wheel::getSize() const {
    return size;
}

void Wheel::setSize(int s) {
    size = s;
}

std::string Wheel::getType() const {
    return type;
}

void Wheel::setType(std::string t) {
    type = t;
}