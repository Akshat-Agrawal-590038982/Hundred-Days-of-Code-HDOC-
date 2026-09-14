/* 
Write a program to find the 1’s complement of a binary number and 
print it. 
*/


#include <stdio.h>

int main() {
    long long binary, original, complement = 0, place = 1;
    int remainder;

    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    original = binary;

    // Calculate the 1's complement
    while (binary > 0) {
        remainder = binary % 10;
        if (remainder == 0) {
            complement += place; // Change 0 to 1
        }
        // If remainder is 1, we do nothing (it remains 0)
        place *= 10; // Move to the next place value
        binary /= 10;
    }

    printf("1's complement of %lld is %lld\n", original, complement);

    return 0;
}