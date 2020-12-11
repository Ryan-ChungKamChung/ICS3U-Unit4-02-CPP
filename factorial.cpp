// Copyright (c) 2020 Ryan Chung Kam Chung All rights reserved
//
// Created by Ryan Chung Kam Chung
// Created in December 2020
// Program does factorials

#include <iostream>
#include <string>


int main() {
    // Function does factorials

    std::string numberString;
    int number;
    int loopCounter = 0;
    int numberFactorial = 1;

    std::cout << "I will do the factorial of the number you give me"
    << std::endl;

    // Input
    std::cout << "Enter number: ";
    std::cin >> numberString;

    // Process
    try {
        number = std::stoi(numberString);

        // Output
        if (number < 0) {
            throw std::invalid_argument("");
        }

        do {
            loopCounter = loopCounter + 1;
            numberFactorial = numberFactorial * loopCounter;
        } while (loopCounter < number);
        
        // Output
        std::cout << "The factorial of " << number << " is "
        << numberFactorial << std::endl;
    } catch (std::invalid_argument) {
        // Output
            std::cout << "This isn't a valid number" << std::endl;
    }
}
