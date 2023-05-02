#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
  vector<vector<string>*> V(10);
  string input = "";

  while (true) {
    cout << "Enter the input: ";
    cin >> input;

    // Print out character count and string count
    if (input == "quit") {
      for (int i = 0; i < 10; i++) {
        if (V[i] != nullptr && V[i]->size() > 0) {
          int charCount = 0;
          for (int j = 0; j < V[i]->size(); j++) {
            charCount += ((*V[i])[j]).length();
          }
          cout << charCount << ' ' << V[i]->size();
          cout << endl;
        }
      }
      break;
    }

    // Get length of input
    int length = input.length();

    // Continue if length is greater than 10
    if (length > 10) {
      continue;
    }

    // Allocate memory if needed
    if (V[length - 1] == nullptr) {
      V[length - 1] = new std::vector<std::string>;
    }

    // Check if input already exists
    bool exists = false;
    for (int i = 0; i < V[length-1]->size(); i++) {
      if ((*V[length-1])[i] == input) {
        exists = true;
        break;
      }
    }

    // Add input to vector if it doesn't exist
    if (!exists) {
      V[length-1]->push_back(input);
    }
  }

  // Deallocate memory
  for (int i = 0; i < 10; i++) {
    if (V[i] != nullptr) {
      delete V[i];
    }
  }
}