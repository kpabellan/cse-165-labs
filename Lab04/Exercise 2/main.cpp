#include <iostream>
#include "Stack.h"

using namespace std;

int main() {
  int N = 0;
  cin >> N;

  // Initialize Stack
  Stack stack;
  stack.initialize();

  // Store values
  for (int i = 0; i < N; i++) {
    double* d = new double;
    cin >> *d;
    stack.push(d);
  }

  // Print out values
  double* value;
  while ((value = (double*)stack.pop()) != nullptr) {
    cout << *value << endl;
  }

  // Cleanup
  stack.cleanup();
}