/* Count spaces, digits, and special characters in a string */


#include <stdio.h>

int main() {
    char str[] = "Hello, World! 123";
    int spaces = 0, digits = 0, special = 0;
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] == ' ') {
            spaces++;
        } else if (str[i] >= '0' && str[i] <= '9') {
            digits++;
        } else {
            special++;
        }
        i++;
    }

    printf("Spaces: %d\n", spaces);
    printf("Digits: %d\n", digits);
    printf("Special characters: %d\n", special);

    return 0;
}