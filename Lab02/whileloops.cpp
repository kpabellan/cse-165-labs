#include <iostream>
using namespace std;

int main() {
  bool on = true;

  while (on == true) {
    int x = 0;
    cin >> x;

    if (x != 0) {
      if (x < 0) {
        cout << "NEGATIVE" << endl;
      } else if (x > 0) {
        cout << "POSITIVE" << endl;
      }

      if (x % 2 == 0) {
        cout << "EVEN" << endl;
      } else {
        cout << "ODD" << endl;
      }
    } else {
      on = false;
    }
  }
}