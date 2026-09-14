/* 
Write a program to find the product of odd digits of a number. 
*/


#include <stdio.h>

int main() {
    int n, product = 1, remainder;
    int hasOddDigit = 0; // Flag to check if there are any odd digits

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    while (n > 0) {
        remainder = n % 10;
        if (remainder % 2 != 0) { // Check if the digit is odd
            product *= remainder;
            hasOddDigit = 1; // Set flag to true
        }
        n /= 10;
    }

    if (hasOddDigit) {
        printf("Product of odd digits is %d\n", product);
    } else {
        printf("There are no odd digits in the number.\n");
    }

    return 0;
}