#include "LuxuryCar.h"
LuxuryCar::LuxuryCar(int id):Car(id,"Luxury",true){}
LuxuryCar::LuxuryCar(const LuxuryCar& other):Car(other){}
LuxuryCar::~LuxuryCar(){}
void LuxuryCar::print()const {
  cout << "Luxury Car | ID: " <<getCarId()<<"| Available: "<<(isAvailable() )<<endl;
}