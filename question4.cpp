// write a program that performs the following:
// 1/3 + 3/5 + 5/7 + 7/9 + ... + 95/97 + 97/99

#include <iostream>
using namespace std;

int main()
{
	double sum = 0;
	for (int i = 1; i <= 97; i += 2)
	{
		sum += (double)i / (i + 2);
	}
	cout << "The sum of 1/3 + 3/5 + 5/7 + 7/9 + ... + 95/97 + 97/99 is " << sum << endl;
	return 0;
}