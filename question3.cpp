// a program that asks for an integer representing the months and depending on the input, show the name of the month as a word using switch statement

#include <iostream>
using namespace std;

int main() {
	int month;
	cout << "Enter a number between 1 and 12: ";
	cin >> month;

	switch (month) {
		case 1:
			cout << "January" << endl;
			break;
		case 2:
			cout << "Febuary" << endl;
			break;
		case 3:
			cout << "March" << endl;
			break;
		case 4:
			cout << "April" << endl;
			break;
		case 5:
			cout << "May" << endl;
			break;
		case 6:
			cout << "June" << endl;
			break;
		case 7:
			cout << "July" << endl;
			break;
		case 8:
			cout << "August" << endl;
			break;
		case 9:
			cout << "September" << endl;
			break;
		case 10:
			cout << "October" << endl;
			break;
		case 11:
			cout << "November" << endl;
			break;
		case 12:
			cout << "December" << endl;
			break;
		default:
			cout << "Invalid input" << endl;
	}
	return 0;
}