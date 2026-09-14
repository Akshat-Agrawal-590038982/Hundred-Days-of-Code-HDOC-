/*
Find the digit that occurs the most times in an integer number.
*/


#include <stdio.h>

int main() {
    long long num;
    int digit_count[10] = {0};

    printf("Enter an integer number: ");
    scanf("%lld", &num);

    // Count the occurrences of each digit
    while (num != 0) {
        int digit = num % 10;
        digit_count[digit]++;
        num /= 10;
    }

    // Find the digit with the maximum count
    int max_digit = 0;
    for (int i = 1; i < 10; i++) {
        if (digit_count[i] > digit_count[max_digit]) {
            max_digit = i;
        }
    }

    printf("The digit that occurs the most times is: %d\n", max_digit);
    return 0;
}