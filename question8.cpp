// write a program that swap two numbers with and without third variable.

#include <iostream>

void swapWithVariable(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

void swapWithoutVariable(int& a, int& b) {
    std::swap(a, b);
}

int main() {
    int num1, num2;

    std::cout << "Enter the first number: ";
    std::cin >> num1;

    std::cout << "Enter the second number: ";
    std::cin >> num2;

    std::cout << "Before swapping: num1 = " << num1 << ", num2 = " << num2 << std::endl;

    // Swapping with a variable
    swapWithVariable(num1, num2);
    std::cout << "After swapping with variable: num1 = " << num1 << ", num2 = " << num2 << std::endl;

    // Swapping without a variable
    swapWithoutVariable(num1, num2);
    std::cout << "After swapping without variable: num1 = " << num1 << ", num2 = " << num2 << std::endl;

    return 0;
}
