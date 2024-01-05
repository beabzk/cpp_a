#include <iostream>
using namespace std;

int main()
{
	int num;
	cout << "Enter a number: ";
	cin >> num;
	cout << "You entered " << num << "." << endl;
	cout << "The square of " << num << " is " << num * num << "." << endl;
	
	// If the user enters -100, the program will terminate.
	if (num == -100) {
		cout << "You entered -100." << endl;
		cout << "The square of -100 is 10000." << endl;
		return 0;
	}
	// If the user enters a number other than -100, the program will continue to ask for a number.
	while (num != -100) {
		cout << "Enter a number: ";
		cin >> num;
		cout << "You entered " << num << "." << endl;
		cout << "The square of " << num << " is " << num * num << "." << endl;
	}
	return 0;
}