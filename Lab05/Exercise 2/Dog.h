#ifndef DOG_H
#define DOG_H

#include "Animal.h"

class Dog : public Animal {
  public:
    Dog(string name, int age) {
      cout << "Creating Dog" << endl;
      this->name = name;
      this->age = age;
    }
    
    ~Dog() {
      cout << "Deleting Dog" << endl;
    }

    void feed() {
      cout << "Dog food, please!" << endl;
    }
};

#endif