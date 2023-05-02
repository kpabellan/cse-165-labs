#include <iostream>
#include <vector>
#include "Rect.h"
#include "Vec.h"

using namespace std;

int main(){
  vector<Rect> rects;
  float x, y, width, height;

  cout << "Type 4 floats to define a rectangle: ";

  while (cin >> x >> y >> width >> height) {
    if ((x < 0) && (y < 0) && (width < 0) && (height < 0)) {
      break;
    }

    rects.push_back(Rect(x, y, width, height));
    cout << "Type 4 floats to define a rectangle: ";
  }
  
  cout << endl;

  cout << "Type 2 floats to define the next point: ";

  while (cin >> x >> y) {
    if ((x == -99.0f) && (y == -99.0f)) {
      break;
    }

    for (int i = 0; i < rects.size(); i++) {
      if (rects[i].contains(Vec(x, y))) {
        cout << "The point is INSIDE of rectangle " << i << endl;
      } else {
        cout << "The point is OUTSIDE of rectangle " << i << endl;
      }
    }

    cout << endl;

    cout << "Type 2 floats to define the next point: ";
  }

  cout << "Finished!";

  return 0;
}