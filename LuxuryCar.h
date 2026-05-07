#ifndef LUXURYCAR_H
#define LUXURYCAR_H
#include "Car.h"
class LuxuryCar : public Car{
public:
    LuxuryCar(int id);
    LuxuryCar(const LuxuryCar &other);
    ~LuxuryCar();
    void print() const override;

};
#endif