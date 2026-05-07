#include <iostream>
#include "StandardCar.h"
#include "LuxuryCar.h"

using namespace std;

int main() {
    Car* car1 = new StandardCar(1001);
    Car* car2 = new LuxuryCar(2001);
    Car* car3 = new StandardCar(1002);

    car1->print(); 
    car2->print(); 
    car3->print();

    delete car1;
    delete car2;
    delete car3;
    return 0;
}