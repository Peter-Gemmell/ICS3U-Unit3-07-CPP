// Copyright (c) 2022 Peter Gemmell All rights reserved

// Created by Peter Gemmell
// Created on March 2022
// This program calculates the cost of pizza using constants

#include <iostream>
#include <string>

int main() {
    // this function is the game
    std::string ageNumberString;
    int ageNumber;

    // input
    std::cout << "Please enter your age : ";
    std::cin >> ageNumberString;

    // process & output
    try {
        ageNumber = std::stoi(ageNumberString);
        if (ageNumber >= 25 && ageNumber <= 40) {
            std::cout << "You are acceptable for my grand child."
            << std::endl;
        } else {
            std::cout << "You are Not acceptable for my grand child"
            << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "Not a valid Age";
    }
    std::cout << "\nDone." << std::endl;
}
