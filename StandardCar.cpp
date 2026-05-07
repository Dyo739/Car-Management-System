#include "StandardCar.h"
StandardCar::StandardCar(int id):Car(id,"Standard",true){}
StandardCar::StandardCar(const StandardCar& other):Car(other){}
StandardCar::~StandardCar(){}
void StandardCar::print()const {
  cout << "Standard Car | ID: " <<getCarId()<<"| Available: "<<(isAvailable())<< endl;
}