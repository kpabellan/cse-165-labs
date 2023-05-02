#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<int> numbers;
  int input = 0;

  while (cin >> input) {
    if (input == 0) {
      int sum = 0;
      cout << numbers.size() << ' ';
      for (const int& number : numbers) {
        sum += number;
      }
      cout << sum << endl;
    } else if (input > 0) {
      numbers.push_back(input);
    } else if (input < 0) {
      for (vector<int>::iterator it = numbers.begin(); it != numbers.end();) {
        if (*it == (~input + 1)) {
          it = numbers.erase(it);
        } else {
          ++it;
        }
      }
    }
  }
}