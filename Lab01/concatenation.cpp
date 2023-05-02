#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int main() {
	vector<string> v;
  string code;
	ifstream in( "code.cpp" );
	string line;
	
	while( getline( in, line ) ) // getline returns true if read successfully
		v.push_back( line ); // add the line to the end of v

	for( int i = 0; i < v.size(); i++ ) {
    code.append(v[i]);
  }

  cout << code << endl;
}