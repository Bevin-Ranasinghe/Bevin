#include <iostream>
using namespace std;

int main() {
    int number, reversedNumber = 0;

    cout << "Enter a number: ";
    cin >> number;

    for (; number != 0; number /= 10) {
        int digit = number % 10;
        reversedNumber = reversedNumber * 10 + digit;
    }

    cout << "Reversed Number: " << reversedNumber << endl;

    return 0;
}