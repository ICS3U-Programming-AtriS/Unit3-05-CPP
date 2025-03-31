// Copyright (c) 2025 Atri Sarker All rights reserved.
// .
// Created By: Atri S
// Date: March 30, 2025
// The program asks the user for the month as a number.
// It then displays the name of the month associated with the number.

#include <iostream>
#include <cstdio>

int main() {
    // Ask the user for the month number
    int monthNumber;
    std::cout << "Enter the number for a month: ";
    std::cin >> monthNumber;

    // Match number with the respective month
    // and display the result.
    switch (monthNumber) {
        case 1:
            printf("1 represents January.");
            break;
        case 2:
            printf("2 represents February.");
            break;
        case 3:
            printf("3 represents March.");
            break;
        case 4:
            printf("4 represents April.");
            break;
        case 5:
            printf("5 represents May.");
            break;
        case 6:
            printf("6 represents June.");
            break;
        case 7:
            printf("7 represents July.");
            break;
        case 8:
            printf("8 represents August.");
            break;
        case 9:
            printf("9 represents September.");
            break;
        case 10:
            printf("10 represents October.");
            break;
        case 11:
            printf("11 represents November.");
            break;
        case 12:
            printf("12 represents December.");
            break;
        default:
            printf("%i does not represent a month.", monthNumber);
            break;
    }

    // Print a newline at the end of the program
    std::cout << std::endl;
}
