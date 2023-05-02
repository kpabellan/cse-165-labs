#include <iostream>
#include <string>

#include "Data.h"
#include "Circle.h"
#include "Participant.h"

using namespace std;

int main( int argc, const char* argv[] )
{
	Data myData;

	char choice = ' ';
	cin >> choice;

	while (choice != 'q' || choice != 'Q') {
		
		if (choice == 'c' || choice == 'C') {
			float radius = 0;
			cin >> radius;
			myData.add(new Circle(radius));
			cout << "Circled added" << endl;
		} else if (choice == 't' || choice == 'T') {
			string name = "";
			int age = 0;
			int score = 0;
			cin >> name >> age >> score;
			cout << "Participant added" << endl;
			myData.add(new Participant(name, age, score));
		} else if (choice == 's' || choice == 'S') {
			myData.sort();
			cout << "Data sorted" << endl;
		} else if (choice == 'p' || choice == 'P') {
			myData.print();
		} else if (choice == 'q' || choice == 'Q') {
			break;
		}
		cin >> choice;
	}
	return 0;
}