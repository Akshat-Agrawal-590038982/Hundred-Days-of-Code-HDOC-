/* 
Write a program to swap two numbers without using a third variable.
*/


#include <stdio.h>

int main() {
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Swapping without a third variable
    num1 = num1 + num2; // Step 1: Add both numbers
    num2 = num1 - num2; // Step 2: Subtract the new num2 from the sum to get original num1
    num1 = num1 - num2; // Step 3: Subtract the new num2 from the sum to get original num2

    printf("After swapping: %d %d\n", num1, num2);

    return 0;
}