#ifndef CIRLCE_H
#define CIRCLE_H

class Circle : public Sortable {
  private:
    float radius;

  public:
    Circle () {
      radius = 0;
    }

    Circle(float radius) {
      this->radius = radius;
    }

    bool compare(const Sortable* other) {
      Circle* otherCircle = (Circle*)other;
      return this->radius > otherCircle->radius;
    }

    void print() {
      std::cout << "Circle with radius: " << radius << std::endl;
    }
};

#endif