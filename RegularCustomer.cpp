#include "RegularCustomer.h"

RegularCustomer::RegularCustomer(int c, string n,string a, string p)
    : Customer(c, n, a, p, false) {}

RegularCustomer::RegularCustomer(const RegularCustomer& other)
    : Customer(other) {}

RegularCustomer::~RegularCustomer() {}

void RegularCustomer::print() const {
    cout << "Regular Customer: " << getName() << endl;
}