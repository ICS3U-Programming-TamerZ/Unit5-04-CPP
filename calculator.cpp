// Copyright (c) 2022 Tamer Zreg All rights reserved.
// .
// Created by: Tamer Zreg
// Date : Nov.30, 2022
// This program performs calculations on two numbers

#include <math.h>

#include <iostream>

double Calculate(double num1, double num2, char operation) {
    switch (operation) {
        case '+':
            return num1 + num2;

        case '-':
            return num1 - num2;

        case '*':
            return num1 * num2;

        case '/':
            return num1 / num2;

        case '%':
            return fmod(num1, num2);

        default:
            return -1;
    }
}

int main() {
    // Declaring variables
    char userOperation, wait;
    std::string num1Str, num2Str;
    double num1D, num2D, result;

    // Gets two numbers from the user
    std::cout << "Enter a number: ";
    std::cin >> num1Str;
    std::cout << "\nEnter a second number: ";
    std::cin >> num2Str;

    // Tries casting the two numbers to double
    try {
        num1D = std::stod(num1Str);
        num2D = std::stod(num2Str);
    } catch (...) {
        std::cout << "You must enter a number for both inputs.";
        std::cin >> wait;
    }

    // Gets the user's operation
    std::cout << "\nOperations: +, -, *, /, %";
    std::cout << "\nEnter an operation: ";
    std::cin >> userOperation;

    // Return value of Calculator() stored in result
    result = Calculate(num1D, num2D, userOperation);

    // Tells the user they did not enter a valid operation
    if (result == -1) {
        std::cout << userOperation << "is not a valid operation.";

        // Displays the sum/product of the calculation
    } else {
        std::cout << num1D << userOperation << num2D;
        std::cout << " = " << result << "\n";
    }
}