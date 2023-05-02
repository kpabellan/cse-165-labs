#ifndef DATA_H
#define DATA_H

#include <iostream>
#include <vector>
#include "Sortable.h"

class Data {
  private:
    std::vector<Sortable*> values;

  public:
    void add(Sortable* value) {
      values.push_back(value);
    }

    void sort() {
      for (int i = 0; i < values.size(); i++) {
        Sortable* key = values[i];
        int j = i - 1;

        while (j >= 0 && values[j]->compare(key)) {
          values[j + 1] = values[j];
          j--;
        }
        values[j + 1] = key;
      }
    };

    void print() {
      for (int i = 0; i < values.size(); i++) {
        values[i]->print();
      }
      std::cout << std::endl;
    };
};

#endif