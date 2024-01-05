// a program to square array values use function named Square_Array that should take array as input.
// example A = {4,5,6,9,11} should be converted to A = {16,25,36,81,121}

#include <iostream>

void Square_Array(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = arr[i] * arr[i];
    }
}

int main() {
    int A[] = {4, 5, 6, 9, 11};
    int size = sizeof(A) / sizeof(A[0]);

    Square_Array(A, size);

    for (int i = 0; i < size; i++) {
        std::cout << A[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
