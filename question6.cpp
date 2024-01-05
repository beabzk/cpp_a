// assume an array has 5 elements with the following values for time in minutes:
// {12.0, 15.0, 24.0, 90.0, 120.0}
// write a program to convert these values in the same array to hours like this: {0.2, 0.25, 0.4, 1.5, 2.0}
// you must use a function named Conv_To_Hour that should take the array as an input.

#include <iostream>
using namespace std;

// a function that takes an array of doubles and converts each element to hours
void Conv_To_Hour(double arr[], int size) {
	for (int i = 0; i < size; i++) {
		arr[i] = arr[i] / 60;
	}
}

int main() {
	double arr[5] = {12.0, 15.0, 24.0, 90.0, 120.0};
	// call the function with the array as an input
	Conv_To_Hour(arr, 5);
	for (int i = 0; i < 5; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
	return 0;
}