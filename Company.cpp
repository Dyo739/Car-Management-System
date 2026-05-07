#include "Company.h"

Company::Company() {
    carCount = 0;
    customerCount = 0;
}
Company::~Company() {
    for (int i = 0; i < carCount; i++)
        delete cars[i];

    for (int i = 0; i < customerCount; i++)
        delete customers[i];
}

void Company::addCar(Car* car) {
    cars[carCount++] = car;
}

void Company::addCustomer(Customer* customer) {
    customers[customerCount++] = customer;
}
Car* Company::findCar(int id) const{
  for (int i=0; i<carCount; i++)
    if (cars[i]->getCarId() == id)
      return cars[i];
  return nullptr;
  
}
