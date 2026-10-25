/* Find the first repeating lowercase alphabet in a string */


#include <stdio.h>

int main() {
    char str[] = "programming";
    int count[26] = {0}; // Array to store the count of each lowercase alphabet
    int i = 0;

    // Count the frequency of each lowercase alphabet
    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            count[str[i] - 'a']++;
        }
        i++;
    }

    // Find the first repeating lowercase alphabet
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z' && count[str[i] - 'a'] > 1) {
            printf("The first repeating lowercase alphabet is: %c\n", str[i]);
            return 0;
        }
    }

    printf("No repeating lowercase alphabet found.\n");
    return 0;
}