#include <iostream>
#include <string>
#include <map>

void countCharacterFrequency(const std::string &str) {
    std::map<char, int> freq;

    for (char c : str) {
        freq[c]++; 
    }

    std::cout << "Character frequencies: "<< std::endl;
    for (const auto &pair : freq) {
        if (pair.first == ' ')
            std::cout << " :" << pair.second << std::endl;
        else
            std::cout << pair.first << ": " << pair.second << std::endl;
    }
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input); 

    countCharacterFrequency(input);

    return 0;
}
