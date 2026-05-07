#include "Car.h"
Car::Car(int id, string t,bool f){
  car_id = id;
  type = t;
  available = true;
}
Car::Car(const Car& other){
  car_id = other.car_id;
  type = other.type;
  available = other.available;
}
Car::~Car(){}
int Car::getCarId()const{return car_id;}
string Car::getType()const{return type;}
bool Car::isAvailable()const{return available;}
void Car::setAvailable(bool f){available = f;}
void Car::setCarId(int id){car_id = id;}
void Car::setType(string t){type = t;}
void Car::print()const{}