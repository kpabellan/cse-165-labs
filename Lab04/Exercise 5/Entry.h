#ifndef ENTRY_H
#define ENTRY_H

#include <iostream>
#include <string>

using namespace std;

struct Entry {
  std::string firstName;
  std::string lastName;
  std::string email;

  // Getters
  std::string getName() {
    return firstName;
  }

  std::string getLastname() {
    return lastName;
  }

  std::string getEmail() {
    return email;
  }

  // Setters
  void setName(std::string& firstNameInput) {
    firstName = firstNameInput;
  }

  void setLastname(std::string& lastNameInput) {
    lastName = lastNameInput;
  }

  void setEmail(std::string& emailInput) {
    email = emailInput;
  }

  void print() {
    std::cout << getName() << " " << getLastname() << " " << getEmail() << std::endl;
  }
};

#endif