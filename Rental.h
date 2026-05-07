#ifndef  RENTAL_H
#define RENTAL_H
#include<iostream>
#include "Car.h"
using namespace std;
class Rental{
private:
    Car* car;
    string rentalDate;
    string returnDate;
    bool returned;
public:
    Rental(Car* c, string rDate);
    Rental(const Rental &other);
    ~Rental();
    Car* getCar() const;
    void returnCar(string rDate);

    void print() const;
};
#endif
