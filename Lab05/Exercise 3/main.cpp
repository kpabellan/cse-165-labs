#include <iostream>
#include <string>
#include <vector>

#include "Dog.h"
#include "display.h"

vector<Animal*> list;

using namespace std;

int main() {
  int N = 0;

  cin >> N;

  for (int i = 0; i < N; i++) {
    char animalType;
    string name;
    int age;

    cin >> animalType >> name >> age;

    if (animalType == 'A') {
      Animal* myAnimal = new Animal;

      myAnimal->setName(name);
      myAnimal->setAge(age);

      list.push_back(myAnimal);
    } else if (animalType == 'D') {
      list.push_back(new Dog(name, age));
    }
  }

  display(list);
}