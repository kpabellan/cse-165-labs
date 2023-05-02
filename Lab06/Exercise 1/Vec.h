#ifndef VEC_H
#define VEC_H

#include <iostream>

class Vec {
  public:
    float x;
    float y;

    Vec() {
      x = 0;
      y = 0;
    }

    Vec(float x, float y) {
      this->x = x;
      this->y = y;
    }

    void set(float x, float y) {
      this->x = x;
      this->y = y;
    }

    void add(Vec v) {
      x += v.x;
      y += v.y;
    }

    void print() {
      std::cout << "(" << x << ", " << y << ")" << std::endl;
    }
};

#endif