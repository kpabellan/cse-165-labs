#ifndef DATA_H
#define DATA_H

#include <iostream>
#include <vector>

class Data {
  private:
    std::vector<int> values;

  public:
    void add(int value) {
      values.push_back(value);
    }

    void sort() {
      for (int i = 0; i < values.size(); i++) {
        int key = values[i];
        int j = i - 1;

        while (j >= 0 && values[j] > key) {
          values[j + 1] = values[j];
          j--;
        }
        values[j + 1] = key;
      }
    };

    void print() {
      for (int i = 0; i < values.size(); i++) {
        std::cout << values[i] << " ";
      }
      std::cout << std::endl;
    };
};

#endif