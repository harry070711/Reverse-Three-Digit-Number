# Reverse-Three-Digit-Number
C program to reverse 3 digit number
<<<<<<< readme
#include <stdio.h>

int main() {
    int num, reversed = 0;

    // Ask user for a 3-digit number
    printf("Enter a 3-digit number: ");
    scanf("%d", &num);

    // Check if the number is a 3-digit number
    if (num < 100 || num > 999) {
        printf("Invalid input! Please enter a 3-digit number.\n");
        return 1;
    }

    // Reverse the number
    int hundreds = num / 100;
    int tens = (num / 10) % 10;
    int units = num % 10;

    reversed = units * 100 + tens * 10 + hundreds;

    printf("Reversed number: %d\n", reversed);

    return 0;
}
=======

>>>>>>> main

