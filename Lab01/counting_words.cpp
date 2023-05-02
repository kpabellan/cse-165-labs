#include <iostream>
#include <fstream>
#include <string>

using namespace std;

bool punctuation(string &word) {
  return word.find(',') != string::npos || word.find('.') != string::npos || word.find('?') != string::npos;
}

int main() {
  int wordCount = 0;
  fstream wordFile;
  wordFile.open("words.txt");

  while (!wordFile.eof()) {
    string word;
    wordFile >> word;
    if (!punctuation(word)) {
      wordCount++;
    }
  }

  cout << "There are " << wordCount << " words in the file." << endl;
  return 0;
}