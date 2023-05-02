#include <iostream>

using namespace std;

int main() {
  double radius;
  double area;
  cin >> radius;
  area = 3.14 * radius * radius;
  cout << "The area of a circle with radius " << radius << " is " << area << endl;
  return 0;
}