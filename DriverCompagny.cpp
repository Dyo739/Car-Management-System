#include <iostream>
#include "Company.h"
#include "StandardCar.h"
#include "LuxuryCar.h"
#include "RegularCustomer.h"
#include "CorporateCustomer.h"

using namespace std;

int main() {
    Company company;

    Car* car1 = new StandardCar(1001);
    Car* car2 = new LuxuryCar(2001);
    Car* car3 = new StandardCar(1002);

    company.addCar(car1);
    company.addCar(car2);
    company.addCar(car3);

    Customer* john = new RegularCustomer(1, "John", "MTL", "123");
    Customer* alice = new CorporateCustomer(2, "Alice", "Toronto", "456", "TechCorp");

    company.addCustomer(john);
    company.addCustomer(alice);


    john->rentCar(car1, "2026-03-01");       
    john->rentCar(car3, "2026-03-02");      
    alice->rentCar(car2, "2026-03-02");     

    john->returnCar(1001, "2026-03-05");

    cout << "=== Customers ===" << endl;
    john->print();
    john->printRentals();
    cout << endl;

    alice->print();
    alice->printRentals();
    cout << endl;

    return 0;
}