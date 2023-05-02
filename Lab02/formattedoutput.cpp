#include <iostream>
#include <bitset>
#include <cmath>

using namespace std;

int main() {
  int x;
  cin >> x;

  while (x >= 0) {
    cout << "Hexadecimal Format:" << hex << x << endl;
    cout << "Binary Format:" << bitset<8>(x) << endl;
    cin >> x;
  }
}