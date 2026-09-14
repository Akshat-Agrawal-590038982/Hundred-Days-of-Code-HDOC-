/* 
Write a program to find the LCM of two numbers. 
*/


#include <stdio.h>

int main() {
    int a, b, lcm, max;

    printf("Enter two positive integers: ");
    scanf("%d %d", &a, &b);

    // Find the larger number
    max = (a > b) ? a : b;

    // Find the LCM
    for (int i = max; ; i += max) {
        if (i % a == 0 && i % b == 0) {
            lcm = i;
            break;
        }
    }

    printf("LCM of %d and %d is %d\n", a, b, lcm);

    return 0;
}