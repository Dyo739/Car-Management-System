#ifndef STANDARDCAR_H
#define STANDARDCAR_H
#include "Car.h"
#include <iostream>
class StandardCar : public Car {
public:
    StandardCar(int id);
    StandardCar(const StandardCar &other);
    ~StandardCar();
    void print() const override;
};
#endif