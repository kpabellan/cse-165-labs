#ifndef RECT_H
#define RECT_H

#include <iostream>
#include "Vec.h"

class Rect {
  public:
    float x;
    float y;
    float width;
    float height;

    Rect(float x, float y, float width, float height) {
      this->x = x;
      this->y = y;
      this->width = width;
      this->height = height;
    }

    bool contains(Vec v) {
      if ((v.x >= x) && (v.x <= x + width) && (v.y <= y) && (v.y >= y - height)) {
        return true;
      } else {
        return false;
      }
    }
};

#endif