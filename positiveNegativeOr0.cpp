// Copyright (c) 2020 Jonathan Pasco-Arnone all rights reserved
//
// Created by Jonathan Pasco-Arnone
// Created on November 2020
// This program determines whether the number is positive, negative or 0

#include <iostream>

int main() {
    // This function gets an input, determines whether the number is
    // positive, negative or 0, and then outputs the result

    double number;

    std::cout << "" << std::endl;
    std::cout << "This program determines whether a"
          "number is positive, negative or 0" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "Please enter a number: ";
    std::cin >> number;
    std::cout << "" << std::endl;
    
    if (number == 0) {
        std::cout << "The number you entered was 0" << std::endl;
    } else if (number > 0) {
         std::cout << "The number you entered was positive" << std::endl;
    } else {
         std::cout << "The number you entered was negative" << std::endl;
    }
}
