/* 
Write a program to find the HCF (GCD) of two numbers. 
*/


#include <stdio.h>

int main() {
    int a, b, hcf;

    printf("Enter two positive integers: ");
    scanf("%d %d", &a, &b);

    // Find the smaller number
    int smaller = (a < b) ? a : b;

    // Find the HCF
    for (int i = 1; i <= smaller; i++) {
        if (a % i == 0 && b % i == 0) {
            hcf = i;
        }
    }

    printf("HCF of %d and %d is %d\n", a, b, hcf);

    return 0;
}