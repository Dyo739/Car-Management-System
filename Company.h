#ifndef COMPANY_H
#define COMPANY_H

#include "LuxuryCar.h"
#include "StandardCar.h"
#include "Customer.h"
class Company{
private:
    Car* cars[1000];
    Customer* customers[1000];
    int carCount;
    int customerCount;
public:
    Company();
    ~Company();
    void addCar(Car* car);
    void addCustomer(Customer* customer);

    Car* findCar(int car_id) const;
   
};

#endif