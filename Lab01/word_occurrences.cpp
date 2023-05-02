#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
  string targetWord = "";
  int matchCount = 0;
  fstream wordFile;
  wordFile.open("words.txt");

  cin >> targetWord;

  while (!wordFile.eof()) {
    string word;
    string wordClean;

    wordFile >> word;

    // Remove non alphanumeric characters
    for (int i = 0; i < word.length(); i++) {
      if (isalnum(word[i])) {
        wordClean += word[i];
      }
    }

    // Convert target word to lowercase
    for (int i = 0; i < word.length(); i++) {
      targetWord[i] = tolower(targetWord[i]);
    }
  
    // Convert words to lowercase
    for (int i = 0; i < word.length(); i++) {
      wordClean[i] = tolower(word[i]);
    }

    // Check if word matches target word
    if (wordClean == targetWord) {
      matchCount++;
    }
  }

  cout << "There are " << matchCount << " occurrences of the word " << targetWord << " in the file." << endl;
  return 0;
}