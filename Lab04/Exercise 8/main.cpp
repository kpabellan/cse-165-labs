#include <iostream>
#include "Stash.h"

using namespace std;

int main() {
  Stash stash;
  
  // Get increment amount
  int incrementAmount = 0;
  cin >> incrementAmount;

  stash.initialize(sizeof(char), incrementAmount);

  char character;
  int number = 0;

  while (cin >> character >> number) {
    if (character == '&' && number == 99) {
      for (int i = 0; i < stash.next; i++) {
        cout << *(char*)stash.fetch(i);
      }
      cout << endl;
      break;
    }

    if (number > 0) {
      for (int i = 0; i < number; i++) {
        stash.add(&character);
      }
    } else if (number < 0) {
      for (int i = 0; i < (~number + 1); i++) {
        stash.add(&character);
      }
      stash.add("\n");
    }
  }

  cout << stash.inflateCounter << ' ' << stash.quantity << endl;

  stash.cleanup();
}