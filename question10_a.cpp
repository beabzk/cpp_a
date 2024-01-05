#include <iostream>
#include <string>

std::string decimalToBinary(int decimal) {
    std::string binary = "";
    
    while (decimal > 0) {
        binary = std::to_string(decimal % 2) + binary;
        decimal /= 2;
    }
    
    return binary;
}

int main() {
    int decimal;
    std::cout << "Enter a decimal number: ";
    std::cin >> decimal;
    
    std::string binary = decimalToBinary(decimal);
    std::cout << "Binary representation: " << binary << std::endl;
    
    return 0;
}
