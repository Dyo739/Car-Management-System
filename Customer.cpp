#include "Customer.h"
Customer::Customer(int c, string n, string a, string p,bool co){
  customer_id = c;
  name = n;
  address = a;
  phone_number = p;
  corporate = co;
  rentalcount =0;
}
string Customer::getName() const {
    return name;
}
Customer::Customer(const Customer& other){
  customer_id = other.customer_id;
  name = other.name;
  address = other.address;
  phone_number = other.phone_number;
  corporate = other.corporate;
  rentalcount = other.rentalcount;
  for (int i=0; i<rentalcount; i++)
     rentals[i] = new Rental(*other.rentals[i]);
}
Customer::~Customer(){
  for (int i=0; i<rentalcount; i++)
     delete rentals[i];
}
void Customer::rentCar(Car* c, string rDate){
  if (c->isAvailable())
    rentals[rentalcount++] = new Rental(c, rDate);
}
void Customer::returnCar(int id, string rDate){
  for (int i=0; i<rentalcount; i++)
    if (rentals[i]->getCar()->getCarId() == id)
      rentals[i]->returnCar(rDate);
  }
void Customer::printRentals()const{
  if (rentalcount == 0) {
    cout << "No rentals yet.\n";
    return;
  }
  for (int i=0; i<rentalcount; i++)
     rentals[i]->print();
    cout << endl;
}


