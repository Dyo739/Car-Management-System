#ifndef  CORPORATECUSTOMER_H
#define CORPORATECUSTOMER_H
#include "Customer.h"
class CorporateCustomer : public Customer {
private:
string companyName;
public:
    CorporateCustomer(int c, string n, string a, string p, string company);
    CorporateCustomer(const CorporateCustomer &other);
    ~CorporateCustomer();
    void print() const override;
};
#endif