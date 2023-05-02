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
      const Circle* otherCircle = dynamic_cast<const Circle*>(other);
      if (otherCircle == nullptr) {
        return false;
      } else {
        return this->radius > otherCircle->radius;
      }
    }

    void print() {
      std::cout << "Circle with radius: " << radius << std::endl;
    }
};

#endif