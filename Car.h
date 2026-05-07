#ifndef CAR_H
#define CAR_H

#include <iostream>
#include <string>
using namespace std;

class Car{
protected:
    int car_id;
    string type;
    bool available;
public:
    Car(int id,  string t, bool f);
    Car( const Car &other);
    virtual ~Car();
    int getCarId() const;
    void setCarId(int id);
    string getType() const;
    void setType(string t);
    bool isAvailable() const;
    void setAvailable(bool f);

  virtual void print() const = 0;
};


#endif