/* 
Write a program to check if a number is an Armstrong number. 
*/


#include <stdio.h>
#include <math.h>

int main() {
    int n, original, sum = 0, remainder;
    int digits = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    original = n;

    // Count the number of digits
    int temp = n;
    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    // Calculate the sum of nth powers of each digit
    temp = n;
    while (temp > 0) {
        remainder = temp % 10;
        sum += pow(remainder, digits);
        temp /= 10;
    }

    if (original == sum) {
        printf("%d is an Armstrong number.\n", original);
    } else {
        printf("%d is not an Armstrong number.\n", original);
    }

    return 0;
}