#ifndef ADDRESSBOOK_H
#define ADDRESSBOOK_H

#include <iostream>
#include <string>
#include <vector>

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



struct AddressBook {
  std::vector<Entry> entries;

  AddressBook(std::string& firstName, std::string& lastName, std::string& email) {
    Entry entry;
    entry.setName(firstName);
    entry.setLastname(lastName);
    entry.setEmail(email);
    entries.push_back(entry);
  }

  void add(AddressBook* addressBook) {
    for (int i = 0; i < addressBook->entries.size(); i++) {
      entries.push_back(addressBook->entries[i]);
    }
  }

  void print() {
    for (int i = 0; i < entries.size(); i++) {
      entries[i].print();
    }
  }
};

#endif