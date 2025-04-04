#include <iostream>
#include <string>

int main() {
    int num;
    std::cout << "Enter an integer: ";
    std::cin >> num;

    int sum = 0;

    // Make a copy of the number and ensure it's positive
    num = abs(num);

    for (; num > 0; num /= 10) {
        sum += num % 10;
    }

    std::cout << "Sum of digits: " << sum << std::endl;

    return 0;
}
