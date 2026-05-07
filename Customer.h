#ifndef CUSTOMER_H
#define CUSTOMER_H
#include "Rental.h"
#include <iostream>
#include <string>
using namespace std;

class Customer{
private:
    int customer_id;
    string name;
    string address;
    string phone_number;
    bool corporate;
protected:
    Rental *rentals[100];
    int rentalcount;
public:
    Customer(int c, string n, string a, string p, bool co);
    Customer(const Customer &other);
    virtual ~Customer();
    string getName() const;
    void rentCar(Car* c, string rDate);
    void returnCar(int car_id, string rDate);
    void printRentals() const;
    virtual void print() const = 0;
};

#endif