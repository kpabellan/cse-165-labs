#include <iostream>
#include "Stash.h"

using namespace std;

int main() {
  int N = 0;
  cin >> N;

  // Initialize Stash
  Stash doubleStash;
  doubleStash.initialize(sizeof(double));

  // Store values
  for (int i = 0; i < N; i++) {
    double d;
    cin >> d;
    doubleStash.add(&d);
  }

  // Print out values
  for (int i =0; i < N; i++) {
    cout << *(double*)doubleStash.fetch(i) << endl;
  }

  // Free up memory
  doubleStash.cleanup();

  return 0;
}