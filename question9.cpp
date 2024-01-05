// write a program that checks if a number is a palindrome or not
// A palindrome is a number that is the same when reversed

#include <iostream>

bool isPalindrome(int number) {
    int originalNumber = number;
    int reverseNumber = 0;

    while (number > 0) {
        int digit = number % 10;
        reverseNumber = reverseNumber * 10 + digit;
        number /= 10;
    }

    return originalNumber == reverseNumber;
}

int main() {
    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;

    if (isPalindrome(number)) {
        std::cout << number << " is a palindrome." << std::endl;
    } else {
        std::cout << number << " is not a palindrome." << std::endl;
    }

    return 0;
}
