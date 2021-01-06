// Copyright (c) 2020 Tong Gong All rights reserved
//
// Created by Tong Gong
// Created on December 2020
// This is a for loop program.
// cpplint ./helloWorld.cpp 是style check 的指令


#include <iostream>
#include <string>

void fahrenheit() {
    int userInputNumberBase;
    int userInputNumberHeight;
    float final;
    std::string userInputAsStringBase;
    std::string userInputAsStringHeight;

    // input
    std::cout << "Enter the base of the triangle: " << std::ends;
    std::cin >> userInputAsStringBase;
    std::cout << "Enter the height of the triangle: " << std::ends;
    std::cin >> userInputAsStringHeight;
    std::cout << "" << std::endl;

    // process + output
        try {
            userInputNumberBase = std::stoi(userInputAsStringBase);
            userInputNumberHeight = std::stoi(userInputAsStringHeight);
            if (userInputNumberBase > 0 && userInputNumberHeight > 0) {
                final = (userInputNumberBase * userInputNumberHeight) / 2;
                std::cout << "The area of the tringle is " << final <<
                "cm²" << std::ends;
            } else {
                std::cout << "You are not enter a positive integer" <<
                std::ends;
            }
        } catch (std::invalid_argument) {
            std::cout << "You are not type in an integer!" << std::ends;
        }
}
int main() {
    fahrenheit();
}
