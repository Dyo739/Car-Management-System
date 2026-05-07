#include "CorporateCustomer.h"
CorporateCustomer::CorporateCustomer(int c, string n, string a, string p,string compagny):Customer(c,n,a,p,true){ 
  companyName = compagny;}
CorporateCustomer::CorporateCustomer(const CorporateCustomer& other):Customer(other){
  companyName = other.companyName;}
CorporateCustomer::~CorporateCustomer(){}
void CorporateCustomer::print()const{
  cout << "Corporate Customer: " << getName() << " | compagny: "<< companyName << endl;
}


