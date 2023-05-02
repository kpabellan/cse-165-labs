#ifndef DYNARRAY_H
#define DYNARRAY_H

#include <iostream>

template<class T>
class DynArray {
  private:
    T *data;
    int size;
    int limit;

  public:
    DynArray() {
      size = 0;
      limit = 4;
      data = new T[limit];
    }

    ~DynArray() {
      delete[] data;
    }

    void add(T value) {
      if (size == limit) {
        limit *= 2;
        T *newData = new T[limit];
        for (int i = 0; i < size; i++) {
          newData[i] = data[i];
        }
        delete[] data;
        data = newData;
      }
      data[size++] = value;
    }

    T& operator[](int index) {
      return data[index];
    }

    const T& operator[](int index) const {
      return data[index];
    }

    int getSize() const {
      return size;
    }
};

#endif