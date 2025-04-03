#include <iostream>
#define SQUARE(x) ((x) * (x))

int main() {
    int num;
    std::cout << "Enter number: ";
    std::cin >> num;
    std::cout << "Square of " << num << " is: " << SQUARE(num) << "\n";
}