#include <iostream>
#include <bitset>

using namespace std;

/*
Retrieve a bit from a number "n" in binary format at position "index"
Input: number n, position index with 0 being the right most (least
significant) bit
Output: bit at position "index"
Example: Input: n=1010, index=1, output=1
*/
int getBit(int n, int index) {
  return (n >> index) & 1;
}

/*
Set a bit at position "index"
Input: number n, position index with 0 being the right most (least
significant) bit
Output: the binary number after the bit is set at position "index"
Example: Input: n=1010, index=0, output=1011
*/
int setBit(int n, int index) {
  return n | (1 << index);
}

/*
Clear a bit at position "index"
Input: number n, position index with 0 being the right most (least
significant) bit
Output: the binary number after the bit is cleared at position "index"
Example: Input: n=1010, index=1, output=1000
*/
int clearBit(int n, int index) {
  return n & ~(1 << index);
}

int main() {
  int n = 0;
  int position = 0;

  cin >> n;
  cin >> position;

  // Print number in binary format
  cout << bitset<8>(n) << endl;

  // Print the original bit at position "position" of "n"
  int ogBitNum = getBit(n, position);
  cout << "Original bit at position " << position << ": " << ogBitNum << endl;

  // Print the number "n" with the bit at "position" set;
  int setBitNum = setBit(n, position);
  cout << "Set bit at position " << position << ": " << bitset<8>(setBitNum) << endl;

  // Print the number "n" with the bit at "position" cleared.
  int clearBitNum = clearBit(n, position);
  cout << "Clear bit at position " << position << ": " << bitset<8>(clearBitNum) << endl;

  return 0;
}