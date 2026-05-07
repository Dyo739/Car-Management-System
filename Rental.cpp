#include "Rental.h"
using namespace std;

Rental::Rental(Car* c, string rDate){
  car = c;
  rentalDate = rDate;
  returnDate = "";
  returned = false;
  car->setAvailable(false); 
}
Rental::Rental(const Rental& other){
  car = other.car;
  rentalDate = other.rentalDate;
  returnDate = other.returnDate; 
}
Rental::~Rental(){}
void Rental::returnCar(string rDate){
  returnDate = rDate;
  car->setAvailable(true);
   returned = true;
}
Car* Rental::getCar()const{return car;}


void Rental::print() const {
    cout << "Car ID: " << car->getCarId()
         << " | Rented: " << rentalDate 
         << " | Returned: ";
    if (returned) cout << returnDate;
    else cout << "not returned";
    cout << endl;
}
