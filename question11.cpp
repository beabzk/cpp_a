// write a program that displays the fibonacci sequence up to the nth term
// 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, ...

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;

    int first = 1, second = 1;
    cout << first << " " << second << " ";
    for (int i = 3; i <= n; i++) {
        int next = first + second;
        cout << next << " ";
        first = second;
        second = next;
    }
    cout << endl;
    return 0;
}