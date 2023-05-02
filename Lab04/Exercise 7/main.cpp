#include <iostream>

using namespace std;

// 1 char and 1 double
struct struct1 {
  char c;
  double d;
};


// 2 chars and 1 double
struct struct2 {
  char c;
  char c1;
  double d;
};

// 3 chars and 1 double
struct struct3 {
  char c;
  char c1;
  char c2;
  double d;
};

// 4 chars and 1 double
struct struct4 {
  char c;
  char c1;
  char c2;
  char c3;
  double d;
};

// Empty
struct struct5 {};

// 1 char, 1 int, and 1 char
struct struct6 {
  char c;
  int i;
  char c1;
};

// 2 chars and 1 int
struct struct7 {
  char c;
  char c1;
  int i;
};

int main() {
  cout << "Size of struct containing 1 char and 1 double: " << sizeof(struct1) << endl;
  cout << "Size of struct containing 2 chars and 1 double: " << sizeof(struct2) << endl;
  cout << "Size of struct containing 3 chars and 1 double: " << sizeof(struct3) << endl;
  cout << "Size of struct containing 4 chars and 1 double: " << sizeof(struct4) << endl;
  cout << "Size of an empty struct: " << sizeof(struct5) << endl;
  cout << "Size of struct containing 1 char, followed by 1 int and then 1 char: " << sizeof(struct6) << endl;
  cout << "Size of struct containing 2 chars followed by 1 int: " << sizeof(struct7) << endl;
}