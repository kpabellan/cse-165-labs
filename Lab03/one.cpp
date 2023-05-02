#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
  string input = "";
  vector<string> words;

  while (cin >> input) {
    if (input == "quit") {
      break;
    }

    if (input.length() > 1) {
      words.push_back(input);
    } else if (input.length() == 1) {
      for (const string& word : words) {
        if (tolower(word[0]) == tolower(input[0])) {
          cout << word << endl;
        }
      }
    }
  }
}