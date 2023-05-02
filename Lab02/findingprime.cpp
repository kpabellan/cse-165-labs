#include <iostream>

using namespace std;

bool isPrime(int x) {
  if (x <= 1) {
    return false;
  }
  
  for (int i = 2; i <= x/2; i++) {
    if (x % i == 0) {
      return false;
    }
  }
  return true;
}

int main() {
  int x = 0;
  cin >> x;

  for (int i = 2; i <= x; i++) {
    if (isPrime(i)) {
      cout << i << endl;
    }
  }
  return 0;
}