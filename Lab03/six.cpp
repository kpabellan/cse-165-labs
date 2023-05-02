#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
  vector<string> strings;
  string input = "";

  while (cin >> input) {
    if (input == "quit") {
      break;
    }

    int length = input.length();

    if (length >= 4) {
      strings.push_back(input);
    } else if (length <= 3) {
      for (int i = 0; i < strings.size(); i++) {
        if (length == 3) {
          if (input[0] == strings[i][0] && input[1] == strings[i][1] && input[2] == strings[i][2]) {
            cout << strings[i] << endl;
          }
        } else if (length == 2) {
          if (input[0] == strings[i][0] && input[1] == strings[i][1]) {
            cout << strings[i] << endl;
          }
        } else if (length == 1) {
          if (input[0] == strings[i][0]) {
            cout << strings[i] << endl;
          }
        }
      }
    }
  }

  return 0;
}