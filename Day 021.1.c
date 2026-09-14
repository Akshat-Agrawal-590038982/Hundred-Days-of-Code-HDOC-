/* 
Write a program to swap the first and last digit of a number. 
*/


#include <stdio.h>

int main() {
    long long number, original, firstDigit, lastDigit, numDigits = 0, placeValue = 1;
    long long swappedNumber = 0;

    printf("Enter a number: ");
    scanf("%lld", &number);

    original = number;

    // Find the last digit
    lastDigit = number % 10;

    // Count the number of digits and find the first digit
    while (number > 0) {
        firstDigit = number % 10;
        number /= 10;
        numDigits++;
        if (number > 0) {
            placeValue *= 10; // Update place value for the first digit
        }
    }

    // Swap the first and last digits
    swappedNumber = lastDigit * placeValue; // Place last digit in the first position
    swappedNumber += (original / 10) % placeValue; // Add middle part of the number
    swappedNumber += firstDigit; // Place first digit in the last position

    printf("Swapped number: %lld\n", swappedNumber);

    return 0;
}