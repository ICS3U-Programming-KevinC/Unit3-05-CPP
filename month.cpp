// Copyright (c) 2022 Kevin Csiffary All rights reserved.
//
// Created by: Kevin Csiffary
// Date: Oct. 13, 2022
// This program gets the user to input a month number
// then returns the name of that month

// Include required libraries
#include <iostream>

int main() {
    // Defines the variable used for the number of the month
    int month_number;

    // Gets the user input for the number of the month
    std::cout << "Input the number of a month: ";
    std::cin >> month_number;

    // Adds extra lines
    std::cout << "\n\n";

    // Display the month as a string with the number of the month
    switch (month_number) {
        case 1:
            std::cout << "Month 1 is January\n\n";
            break;

        case 2:
            std::cout << "Month 2 is February\n\n";
            break;

        case 3:
            std::cout << "Month 3 is March\n\n";
            break;

        case 4:
            std::cout << "Month 4 is April\n\n";
            break;

        case 5:
            std::cout << "Month 5 is May\n\n";
            break;

        case 6:
            std::cout << "Month 6 is June\n\n";
            break;

        case 7:
            std::cout << "Month 7 is July\n\n";
            break;

        case 8:
            std::cout << "Month 8 is August\n\n";
            break;

        case 9:
            std::cout << "Month 9 is September\n\n";
            break;

        case 10:
            std::cout << "Month 10 is October\n\n";
            break;

        case 11:
            std::cout << "Month 11 is November\n\n";
            break;

        case 12:
            std::cout << "Month 12 is December\n\n";
            break;

        // Handle the error case
        default:
            std::cout << month_number << " is not a valid month\n\n";
    }
}
