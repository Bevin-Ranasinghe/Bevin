#include <iostream>
#include <string>

// Define the MathOperations namespace
namespace MathOperations {
    int add(int a, int b) {
        return a + b;
    }
}

// Define the TextOperations namespace
namespace TextOperations {
    std::string concat(const std::string& str1, const std::string& str2) {
        return str1 + str2;
    }
}

int main() {
    int num1, num2, sum;
    std::string str1, str2, concatenatedString;

    // Input two numbers for addition
    std::cout << "Enter the first number: ";
    std::cin >> num1;

    std::cout << "Enter the second number: ";
    std::cin >> num2;

    // Using MathOperations namespace to add the numbers
    sum = MathOperations::add(num1, num2);
    std::cout << "Sum: " << sum << std::endl;

    // Input two strings for concatenation
    std::cout << "Enter the first string: ";
    std::cin >> str1;

    std::cout << "Enter the second string: ";
    std::cin >> str2;

    // Using TextOperations namespace to concatenate the strings
    concatenatedString = TextOperations::concat(str1, str2);
    std::cout << "Concatenated String: " << concatenatedString << std::endl;

    return 0;
}


