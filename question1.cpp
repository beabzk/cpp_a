// a function to check if a number is prime or not

#include<iostream>
using namespace std;

int main() {
	// declare variables
	int num, i, flag = 0;
	// get input from user
	cout << "Enter a positive integer enter to check: ";

	cin >> num;

	// check if num is a prime number
	for (i = 2; i <= num / 2; i++) {
		// condition for non-prime number
		if (num % i == 0) {
			flag = 1;
			break;
		}
	}
	if (flag == 1)
		cout << num << " is not a prime number.";
	else if (num == 1)
		cout << num << " is not a prime number.";
	else
		cout << num << " is a prime number.";
	return 0;
}