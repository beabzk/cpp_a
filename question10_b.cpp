#include <iostream>
#include <cmath>
using namespace std;

int binaryToDecimal(int binary) {
    int decimal = 0, base = 1;
    while (binary > 0) {
        int lastDigit = binary % 10;
        decimal += lastDigit * base;
        binary /= 10;
        base *= 2;
    }
    return decimal;
}

int main() {
    int binary;
    cout << "Enter a binary number: ";
    cin >> binary;

    // Check if input is a binary number
    int temp = binary;
    while (temp != 0) {
        if (temp % 10 > 1) {
            cout << "Invalid input. Please enter a binary number." << endl;
            return 0;
        }
        temp /= 10;
    }

    int decimal = binaryToDecimal(binary);
    cout << "Decimal equivalent: " << decimal << endl;
    return 0;
}
