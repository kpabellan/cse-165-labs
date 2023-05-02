#include <iostream>
using namespace std;

int main() {
  char character;
  int number = 0;

  while (cin >> character >> number) {
    if (number == -2) {
      break;
    }

    if (number == -1) {
      cout << endl;
    } else {
      for (int i = 0; i < number; i++) {
        cout << character;
      }
    }
  }

}