#include <iostream>
#include <algorithm>
#include <string>

int main() {
    std::string str;
    std::cout << "Enter a string: ";
    std::getline(std::cin, str);

    // a)Convert to uppercase
    std::transform(str.begin(), str.end(), str.begin(), ::toupper);

    std::cout << "Uppercase: " << str << std::endl;
    
    // b)Count vowels
    int vowels = 0;
    for (char c : str) {
        if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') vowels++;
    }
    std::cout << "Vowel Count: " << vowels << "\n";
    
    // c)Reverse string
    std::reverse(str.begin(), str.end());
    std::cout << "Reversed: " << str << "\n";
    
    return 0;




    
}


