#ifndef ANIMAL_H
#define ANIMAL_H

class Animal {
public:
    virtual ~Animal() = default;
    virtual void callOut() const;
};

#endif // ANIMAL_H