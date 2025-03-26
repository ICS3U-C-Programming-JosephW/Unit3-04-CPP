// Copyright (c) 2025. Joseph Wondimagnehu. All rights reserved.
//
// Created by: Joseph Wondimagnehu
// Date: Mar. 25, 2025
/* This program checks whether an integer entered
by the user is positive, negative, or zero. */

/* Include the iostream library for 
input and output functionalities. */
#include <iostream>

// Runs the main function.
int main() {
    // Declare the integer variable.
    int enteredInt;
    // Ask the user to enter an integer.
    std::cout << "Enter an integer.\n";
    // Store the integer into the declared variable.
    std::cin >> enteredInt;

    // Check if the user entered an integer greater than zero.
    if (enteredInt > 0) {
        // Display that the integer is a positive integer.
        std::cout << enteredInt << " is a positive integer.";
    } else if (enteredInt < 0) {
        // Check if the user entered an integer less than zero.
        // Display that the integer is a negative integer.
        std::cout << enteredInt << " is a negative integer.";
    } else {
        // Otherwise, the integer has to be zero.
        // Display that zero is just zero.
        std::cout << "Zero is just zero.";
    }
}
