#include <iostream>

using namespace std;

int main() {
  int input1 = 0;
  int input2 = 0;

  int *p1 = &input1;
  int *p2 = &input2;

  int sum = 0;
  int diff = 0;
  int product = 0;
  float quotient = 0;

  cin >> input1;
  cin >> input2;

  // Addition
  sum = *p1 + *p2;
  cout << "Sum: " << sum << endl;

  // Subtract
  diff = *p1 - *p2;
  cout << "Difference: " << diff << endl;


  // Multiply
  product = *p1 * *p2;
  cout << "Product: " << product << endl;

  // Divide
  quotient = (float)(*p1) / (float)(*p2);
  cout << "Quotient: " << quotient << endl;

  return 0;
}