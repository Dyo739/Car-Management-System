#ifndef REGULARCUSTOMER_H
#define REGULARCUSTOMER_H

#include "Customer.h"

class RegularCustomer : public Customer {
public:
    RegularCustomer(int c, string n, string a, string p);
    RegularCustomer(const RegularCustomer& other);
    ~RegularCustomer();
    void print() const override;
};

#endif